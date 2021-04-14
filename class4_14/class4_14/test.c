#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>




//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{ 
//	int Num;
//	char* pcName;
//	short sDate; 
//	char cha[2];
//	short sBa[4];
//}*p; 
////假设p 的值为0x100000。如下表表达式的值分别为多少？
// int main()
// {
//	 p = (struct test*)0x100000;
//	 printf("%p\n", p+0x1); //0x00100014
//	 printf("%p\n", (unsigned long)p+0x1);//0x00100001
//	 printf("%p\n", (unsigned int*)p+0x1);//0x00100004
//	 return 0;
// }
//int main()  
//{ 
//	int a[5] = { 1, 2, 3, 4, 5 }; 
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));// 整个二维数组的长度 48
//	printf("%d\n", sizeof(a[0][0]));//第一个元素的长度 4
//	printf("%d\n", sizeof(a[0]));//第一排数组的地址 16 a[0]相当于第一行作为一维数组的数组名
//	printf("%d\n", sizeof(a[0] + 1));// 第一行第二个元素的地址 4
//	printf("%d\n", sizeof(*(a[0] + 1)));//第一行第二个元素 4
//	printf("%d\n", sizeof(a + 1)); //第二行第1个数组的地址 4
//	printf("%d\n", sizeof(*(a + 1)));//第二行元素的长度 16
//	printf("%d\n", sizeof(&a[0] + 1)); // 第二行的地址 4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//第二行的长度 16
//	printf("%d\n", sizeof(*a));//a 是第一行的长度第一行元素的长度16
//	printf("%d\n", sizeof(a[3]));//第四行的元素长度16
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef"; 
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p)); //1
//	printf("%d\n", sizeof(p[0]));//1  P[0]=*(P+0)
//	printf("%d\n", sizeof(&p)); //4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//
//
//	printf("%d\n", strlen(p));//6 P存a 的地址
//	printf("%d\n", strlen(p + 1));//5 
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0])); //err
//	printf("%d\n", strlen(&p)); //随机值
//	printf("%d\n", strlen(&p + 1));//随机值 
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef"; 
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	//strlen不统计\0
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr)); //err
//	printf("%d\n", strlen(arr[1])); //err
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 }; 
//	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组的总大小-单位是字节-16
//	printf("%d\n", sizeof(a + 0));//数组名是首元素地址4 /8
//	printf("%d\n", sizeof(*a));//4/8
//	printf("%d\n", sizeof(a + 1));//4 
//	printf("%d\n", sizeof(a[1]));//4/8
//	printf("%d\n", sizeof(&a));//16× 正确答案是4/8因为是地址
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	return 0;
//}
//swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int  tmp = *buf2;
//		*buf2 = *buf1;
//		*buf1 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//void Bubble_sort(void* base, int sz, int width, int  (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//test2()
//{
//	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	Bubble_sort(f, sz, sizeof(f[0]),cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", f[i]);
//	}
//}
//test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	Bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
//}
//test4()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	Bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
//}
//int main()
//{
//	test2();
//	return 0;
//}