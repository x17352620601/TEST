#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}

int main()
{
	test(1);
	return 0;
}

//int fbn(int n)
//{
//	//使f(n)=f(n-1)+f(n-2)
//	int i = 0;
//	int sum = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (i =3 ; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//
//
//
//
//
//
//
////int fbn(int x)
////{
////	if (x <= 2)
////		return 1;
////	else
////		return fbn(x - 1) + fbn(x - 2);
////}
//int main()
//{
//	while (1)
//	{
//		int n = 0;
//		int reg = 0;
//		scanf("%d", &n);
//		reg = fbn(n);
//		printf("%d", reg);
//		
//	}
//	return 0;
//}
//斐波拉契数
// 前两个数的和等于后一个数
//int factorial(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x* factorial(x - 1);
//	
//}
////int factorial(int x)
////{
////	int i = 0;
////	int reg = 1;
////	for (i = 1; i <= x; i++)
////	{
////		reg *= i;
////	}
////	return reg;
////}
//
//int main()
//{
//	int n = 0;
//	int reg = 0;
//	scanf("%d", &n);
//	reg = factorial(n);
//	printf("%d", reg);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	else
//		return 0;
//	
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);*/
//	/*printf("%d", len);*/
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}