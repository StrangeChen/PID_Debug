
//如果你介意关闭提示 请看完此文档！！

/**
  ******************************************************************************
  * 纵向滑动条可调节PID参数 也可以输入数值
  * pid参数每改变一次发送一次数据
  * 勾选“为负数”即可发送负值
  * 横向滑动条可调节波形x轴方向大小
  * 
  * 注：
  * 波特率仅为常见三种  如果需要添加 联系我
  * 波形没有储存功能 从图像中消失及清理 如需要缓存波形 请联系我
  ******************************************************************************/

/**
  ******************************************************************************
  * 下位机发送数据显示被波形程序举例
  ******************************************************************************/
// *data:	所发送数据数组，最大长度为6
// n:		发送数据所占字节数
void sendDatatoPC(float *data, u8 n)
{
	int8_t i = 0;
	unsigned char *point;
	point = (unsigned char*)data;	  //得到float的地址
	if(n > 24)
		n = 24;
	usart_send_char('$');	//发送一个字节的函数，不同单片机实现不同
	usart_send_char('%');
	usart_send_char(n * 0.25);

	for(i = 0; i < n;i ++)
		usart_send_char(point[i]);
}

float output[3];
float a = 0;
while(1)
{
	a += 0.1;
	if(a > 3.14f)	a = -3.14f;
	output[0] = 500 * sinf(a);
	output[1] = 500 * sinf(a+1.5);
	output[2] = 400 * sinf(a);
	sendDatatoPC(output, sizeof(output));
}
/**
  ******************************************************************************
  *	上位机发送协议
  *  0   1    2        3       4          5       6
  *	cmd sign float[0] float[1] float[2] float[3] sum
  ****
  *	cmd = ‘p' or 'i' or 'd'
  *	sign = '-' or '+'
  *	float-- > char * 4
  * sum = cmd + sign + para_8 * 4
  ******************************************************************************/
/**
  ******************************************************************************
  * 下位机接收PID参数程序举例
  ******************************************************************************/
uint8_t RX_PID_Count = 0;
uint8_t RX_PID_Buf[20];
u8		RX_PID_Sum = 0;
u8		pidReadBuf;
PID_t 	*pidAdjust;
u8 		charBuf;
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == UART4)
	{
		RX_PID_Buf[RX_PID_Count & 0x7f] = pidReadBuf;
		//是否开始接收
		if ((RX_PID_Count & 0x7f) == 0 && RX_PID_Buf[0] != '$')
			return;

		RX_PID_Count++;

		if ((RX_PID_Count & 0x7f) == 8)
		{
			//接收正确
			if (RX_PID_Sum == pidReadBuf)
			{
				for (int i = 0; i < 4; i++)
					charBuf[i] = RX_PID_Buf[i + 3];

				switch (RX_PID_Buf[1])
				{
				case 'p':
					memcpy(&pidAdjust->p, charBuf, 4);
					if (RX_PID_Buf[2] == '-')
						pidAdjust->p = -pidAdjust->p;
					break;
				case 'i':
					memcpy(&pidAdjust->i, charBuf, 4);
					if (RX_PID_Buf[2] == '-')
						pidAdjust->i = -pidAdjust->i;
					break;
				case 'd':
					memcpy(&pidAdjust->d, charBuf, 4);
					if (RX_PID_Buf[2] == '-')
						pidAdjust->d = -pidAdjust->d;
					break;
				}
				RX_PID_Sum = 0;
				RX_PID_Count = 0;
			}
			else
			{
				RX_PID_Sum = 0;
				RX_PID_Count = 0;
			}
		}
		else
			RX_PID_Sum += pidReadBuf;
	}
	
}
  
//将2333.txt文件中文字改变为“是否关闭应用”即可
  
  
  
  
  
  
  
  
