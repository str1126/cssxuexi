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
 
//ԭ��
//����
//����

//int main()
//{
//	int a = 20;//4���ֽڣ�32������λ
//	//00000000000000000000000000010100--ԭ��
//	//00000000000000000000000000010100--����
//	//00000000000000000000000000010100--����
//	int b = -10;
//	//10000000000000000000000000001010--ԭ��
//	//11111111111111111111111111110101--����
//	//10000000000000000000000000001010--����
//	int w = 0x44332211;
//	//����ֽ���洢ģʽ--44332211
//	//С���ֽ���洢ģʽ--11223344
//	printf("%d\n",w);
//	return 0;
//} 

//�жϱ�����Ϊ��˻���С��
//int main()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	if(*p == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//��һ��
//int check_sys()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	if(*p==1)
//		return 1;
//	else
//		return 0;
//}
//�ڶ���
//int check_sys()
//{
//	int a = 1;
//	char*p=(char*)&a;
//	return *p;
//}
//������
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a; 
//}
//int main()
//{
//	//дһ�δ����жϱ������Ǵ�˻���С��
//	int ret = check_sys();
//	//1ΪС��
//	//����0Ϊ���
//	if(ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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