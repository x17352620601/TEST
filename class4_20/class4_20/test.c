#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<stdlib.h>
//struct s
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i]= i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);	
//	ps = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[10];
//};
//struct S
//{
//	int n;
//	int arr[];//未知的大小-柔性数组成员-数组的大小是可以调整的
//};//柔性数组内存访问效率高； 
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放空间
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free 释放之后str指向的空间后，并不会把str置为null
//	str = NULL;
//	//非法访问内存；
//	//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//	
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);//忘记释放，导致内存泄露；
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//int* test()
//{
//	//static int a=10;//静态区
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int* test()
//{
//	int* p = (int*)malloc(100);//堆区
//	return p;
//}
//int main()
//{
//	int* p = test();
//	free(p);
//	return 0;
//}
//char* GetMemory(void)
//{
//	char p[] = "hello world";//结束函数之后就是非法访问；
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;//非法访问
//}
////改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////改正1
////void GetMemory(char** p)
////{
////	*p = (char*)malloc(100);
////}
////void Test(void)
////{
////	char* str = NULL;
////	GetMemory(&str);
////	strcpy(str, "hello world");
////	//1.内存泄露问题
////	//2.运行代码程序会出现奔溃的现象str 以值传递的形式给p p是GETMEMORY函数的形参,只能函数内部有效
////	//等GetMemory函数返回值后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄露
////	printf(str);
////	free(str);
////	str = NULL;
////}
//int main()
//{
//	Test();
//	return 0;
//}
//#include<stdlib.h>
//#include<errno.h>
//#include<windows.h>
//int main()
//{
//	//6、对动态开辟的内存忘记释放（内存泄露）；
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	////5、对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	//free(p);
//	//如何避免？
//	//4、使用free释放动态开辟的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*p++ = i;
//	//	}
//	//}
//	//free(p);//err
//	//p = NULL;
//	//此时p已经不是malloc当初开辟的空间；
//	//回收空间
//	
//	////3、对非动态开辟内存的free释放
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//	
//////2、对动态开辟的内存的越界访问
////	int* p = (int*)malloc(5 * sizeof(int));
////	if (p == NULL)
////	{
////		printf("%d\n", strerror(errno));
////	}
////	else
////	{
////		int i = 0;
////		for (i = 0; i < 10; i++)
////		{
////			*(p + i) = i;//当i是10的时候越界访问
////		}
////	}
////	free(p);
////	p = NULL;
//	////1、对NULL的解引用操作；
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值为null;
//	//*p = 0;//err
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//	
//	return 0;
//}
//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//和malloc一样的作用
//	return 0;
//}

//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = realloc(p, 40);
//	if (p2 == NULL)
//	{
//		printf("%d\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p2 + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p2 + i));
//		}
//	}
//	free(p2);
//	return 0;
//}

//int main()
//{
//	union aa
//	{
//		float x;
//		float y;
//		char c[6];
//	};
//	struct st
//	{
//		union aa;
//		float w[5];
//		double ave;
//	}m;
//	printf("%d\n", sizeof(m));
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//初始化为0
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(40);//不初始化
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}//当空间不在使用时释放空间
//	free(p);
//	p = NULL;//p的位置不变
//	return 0;
//}
//struct s
//{
//	char name[20];
//	int age
//};
//int main()
//{
//	struct s arr[50];//50个数据
//	//30个浪费
//	//60 不够
//	return 0;
//}