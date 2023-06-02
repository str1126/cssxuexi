#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	return 0;
//}
 
//原码
//反码
//补码

//int main()
//{
//	int a = 20;//4个字节，32个比特位
//	//00000000000000000000000000010100--原码
//	//00000000000000000000000000010100--反码
//	//00000000000000000000000000010100--补码
//	int b = -10;
//	//10000000000000000000000000001010--原码
//	//11111111111111111111111111110101--反码
//	//10000000000000000000000000001010--补码
//	int w = 0x44332211;
//	//大端字节序存储模式--44332211
//	//小端字节序存储模式--11223344
//	printf("%d\n",w);
//	return 0;
//} 

//判断本机器为大端还是小端
//int main()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	if(*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//第一种
//int check_sys()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	if(*p==1)
//		return 1;
//	else
//		return 0;
//}
//第二种
//int check_sys()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	return *p;
//}
//第三种
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a; 
//}
//int main()
//{
//	//写一段代码判断本机器是大端还是小端
//	int ret = check_sys();
//	//1为小端
//	//返回0为大端
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//
//}

int main()
{
	char a = 128;
	printf("%u",a);
	return 0;
}   