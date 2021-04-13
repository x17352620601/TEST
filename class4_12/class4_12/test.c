#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void qsort(void* base, 
//	size_t num,
//	size_t width,
//	int(__cdecl* compare)(const void* elem1, const void* elem2));
//qsort(arr,sz,sizeof(arr[0]),)

struct str
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_folat(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct str*)e1)->age - ((struct str*)e2)->age;
}
int cmp_sturct_name(const void* e1, const void* e2)
{
	return strcmp(((struct str*)e1)->name, ((struct str*)e2)->name);
}
void test1()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1, };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz1, sizeof(arr[0]), cmp_int); int i = 0;
	//第一参数：待排序的数组的首元素地址
	//第二参数：待排序数组的元素个数
	//第三个参数：待排序数组每个元素的大小-单位是字节
	//第四个参数：是函数指针需要穿过去的是比较两个元素所用函数的地址
	//这个函数需要自己实现 函数指针的两个参数是：带比较的两个元素的地址
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr[i]);	
	}
}
void test2()
{
	float f[] = { 10.0,9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz2 = sizeof(f) / sizeof(f[0]);
	qsort(f, sz2, sizeof(f[0]), cmp_folat);
	int i = 0;
	for (i = 0; i < sz2; i++)
	{
		//printf("%d ", arr[i]);
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct str s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",10} };
	int sz3 = sizeof(s) / sizeof(s[3]);
	qsort(s, sz3, sizeof(s[0]), cmp_struct_age);
}
void test4()
{
	struct str s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",10} };
	int sz3 = sizeof(s) / sizeof(s[3]);
	qsort(s, sz3, sizeof(s[0]), cmp_struct_age);
}
int main()
{	
	test4();	
return 0;
}
//void bullsort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int ret = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = ret;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bullsort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int  main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int (*pa)(int, int);//函数指针
//	int (*parr[4])(int, int);//parr是一个存储函数指针的数组
//	int (*(*pfarr)[4])(int, int) = &parr;//pfarr是一个数组指针，指针指向的数组有4个元素
//	//指针指向的数组的每个元素是一个函数指针 int(*)(int ,int)
//	return 0;
//}
//计算器

//void menu()
//{
//	printf("**********************************************\n");
//	printf("*****  1.add                     2.sub  ******\n");
//	printf("*****  3.mul                     4.div  ******\n");
//	printf("*******5.xor        0.exit       *************\n");
//	printf("**********************************************\n");
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int xor (int x, int y)
//{
//	return x ^ y;
//}
//void calc(int(*parr)(int x, int y))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", parr(x, y));
//
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入你要进行什么运算\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//
//			break;
//		case 2:
//			calc(sub);
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			calc(mul);
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			calc(div);
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	//parr 是一个函数指针数组---转移表
//	int (*parr[])(int, int) = { 0,add,sub,mul,div,xor };
//	do
//	{
//		menu();
//		printf("请输入你要进行什么运算\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数\n");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	
//	} while (input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////能指向my_strcpy的函数指针，写一个函数指针数组能够存放4个my_strcpy函数的地址
//
//int main()
//{
//	char *(*pa)(char*, const char*) = my_strcpy;
//	char* (*pa[4])(char*, const char*) = my_strcpy;
//	return 0;
//}
//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];
//	int(*pa)(int, int) = add;
//	int(*parr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}
//
//函数指针
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = add;
//	printf("%d\n", (p)(2, 3));
//	printf("%d\n", (*p)(2, 3));//
//	//printf("%d\n", (**p)(2, 3));//
//	//printf("%d\n", (***p)(2, 3));//
//	return 0;
//}
//typedef void(*pfun_t)(int);
//int  main()
//{
//	pfun_t signal(int, pfun_t);
//	void(*  signal(int, void(*)(int))  )(int);
//	return 0;
//}//signal 是一个函数申明
//signal 函数的参数有两个，第一个 int ，第二个是函数指针，该函数指针指向的函数参数是int，返回类型是void
// 函数的返回类型也是函数指针；该函数指针的函数参数是int，返回类型是void
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//	//指针数组-数组-存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	int arr2[5];//取出数组的地址
//	int(*pa)[5] = &arr2;//pa就是一个数组指针
//	int(*parr3[10])[5];
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}
//int mian()
//{
//	int* p = NULL;//整型指针指向整型的指针 可以存放整型的地址
//	char* pc = NULL;//字符指针 指向字符的指针 可以存放字符的地址
//	//数组指针，指向数组的指针 存放数组的地址；
//	int arr[10] = { 0 };
//	//arr-首元素的地址
//	//&arr[0]-首元素的地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//数组的地址要存起来
//	//p 为数组指针
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//指针数组 存放整型指针
//	char* pch[5];//指针数组 存放字符指针
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//常量字符串
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";
//	/**p = 'w';*/
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}