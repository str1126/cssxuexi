#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//结构体
//描述一个学生的数据
//名字
//电话
//年龄
//性别
//struce 结构体关键字  S 结构体标签  struce S 结构体类型
//typedef struct S
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	short age;
//	char sex[15];
//}stu/*s1,s2,s3*/;
//int main()
//{
//	stu s1={"张大家","15239931587",18,"保密"};
//	struct S s ={"张香菱","15239161587",15,"保密"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[19];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char h[] = "hello bit\n";
//	struct T t = {"hello",{100,"hello word",3.14},h};
//	printf("%s\n",t.ch);
//	printf("%d\n",t.s.a);
//	printf("%lf\n",t.s.d);
//	printf("%s\n",t.pc);
//	
//};
//void test2()
//{
//	printf("hehe");
//}
//void test1()
//{
//	test2;
//}
//void test()
//{
//	test1;
//}
//
//int main()
//{
//	test();
// 	return 0;
// }


//int main()
//{
//	int i =0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j = 0;
//		//int ret = 1;
//		for(j=1;j<=i;j++)
//		{
//			ret*=j;
//		}
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[13];
//	for(i=0;i<=12;i++)
//	{
//		printf("hehe\n");
//		arr[i]=0;
//	}
//	return 0;
//}

void My_strcpy(char*dest,char*src)
{
	assert(dest!=NULL);//断言
	assert(src!=NULL);
	while(*dest++ = *src++)
	{
		;
	}

	//if(dest!=NULL && src!=NULL)
	//{
	//	while(*dest++ = *src++)
	//	{
	//		;
	//	}
	//}可优化
	//while(*src!='\0')
	//{
	//	*dest=*src;
	//	*src++;
	//	*dest++;
	//}
	//*dest=*src;可优化
}
int main()
{
	char arr1[] = "################";
	char arr2[] = "bit";
	//printf("%s\n",arr1);
	My_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	//printf("%s\n",arr2);
	return 0;
}