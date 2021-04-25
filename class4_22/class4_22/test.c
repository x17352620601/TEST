#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//#define DEBUG 
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d\n", arr[i]);
//#endif
//#ifdef DEBUG
//		printf("%d\n", arr[i]);
//#endif // DEBUG
//
//	}
//}
//#define MAX(X,Y) ((X>Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int end1 = m - 1;
//    int end2 = n - 1;
//    int end = m + n - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {
//            nums1[end] = nums1[end1];
//            --end;
//            --end1;
//        }
//        else
//        {
//            nums1[end] = nums2[end2];
//            --end;
//            --end2;
//        }
//    }
//    if (end2 >= 0)
//    {
//        nums1[end] = nums2[end2];
//        --end;
//        --end2;
//    }
//    return nums1;
//}
//int main()
//{
//    int nums1[6] = { 4,5,6 ,0, 0, 0};
//    int nums2[3] = { 1,2,3 };
//    merge(nums1, 3, 3, nums2, 3, 3);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", nums1[i]);
//    }
//    return 0;
//}
//int main()
//{
//	int x = 0;
//	return 0;
//}
//#define SQUARE(X) ((X)*(X))
//int main()
//{
//	int ret = SQUARE(5+1);
//	printf("%d\n", ret);
//	return 0;
//}
//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//
//	//int max = MAX;
//	//printf("%s\n", STR);
//	//printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	//printf("%s\n", __FILE__);//文件的路径
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 19;
//	int b = 11;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
