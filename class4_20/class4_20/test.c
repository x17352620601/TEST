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
//	//������С
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
//	int arr[];//δ֪�Ĵ�С-���������Ա-����Ĵ�С�ǿ��Ե�����
//};//���������ڴ����Ч�ʸߣ� 
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
//	//�ͷſռ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free �ͷ�֮��strָ��Ŀռ�󣬲������str��Ϊnull
//	str = NULL;
//	//�Ƿ������ڴ棻
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
//	*p = (char*)malloc(num);//�����ͷţ������ڴ�й¶��
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
//	//static int a=10;//��̬��
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
//	int* p = (int*)malloc(100);//����
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
//	char p[] = "hello world";//��������֮����ǷǷ����ʣ�
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
//	return 0;//�Ƿ�����
//}
////����2
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
////����1
////void GetMemory(char** p)
////{
////	*p = (char*)malloc(100);
////}
////void Test(void)
////{
////	char* str = NULL;
////	GetMemory(&str);
////	strcpy(str, "hello world");
////	//1.�ڴ�й¶����
////	//2.���д���������ֱ���������str ��ֵ���ݵ���ʽ��p p��GETMEMORY�������β�,ֻ�ܺ����ڲ���Ч
////	//��GetMemory��������ֵ�󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й¶
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
//	//6���Զ�̬���ٵ��ڴ������ͷţ��ڴ�й¶����
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	////5����ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//free(p);
//	//p = NULL;
//	//free(p);
//	//��α��⣿
//	//4��ʹ��free�ͷŶ�̬���ٵ�һ����
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
//	//��ʱp�Ѿ�����malloc�������ٵĿռ䣻
//	//���տռ�
//	
//	////3���ԷǶ�̬�����ڴ��free�ͷ�
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//	
//////2���Զ�̬���ٵ��ڴ��Խ�����
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
////			*(p + i) = i;//��i��10��ʱ��Խ�����
////		}
////	}
////	free(p);
////	p = NULL;
//	////1����NULL�Ľ����ò�����
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵΪnull;
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
//	int* p = (int*)realloc(NULL, 40);//��mallocһ��������
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
//	int* p = (int*)calloc(10, sizeof(int));//��ʼ��Ϊ0
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
//	int* p = (int*)malloc(40);//����ʼ��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}//���ռ䲻��ʹ��ʱ�ͷſռ�
//	free(p);
//	p = NULL;//p��λ�ò���
//	return 0;
//}
//struct s
//{
//	char name[20];
//	int age
//};
//int main()
//{
//	struct s arr[50];//50������
//	//30���˷�
//	//60 ����
//	return 0;
//}