#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,6,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				break;
			}
		}
		if (j = sz && arr[i] != arr[j])
		{
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int arr1[5] = { 0 };
//	int arr2[5] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	int m = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] & 1 == 1)
//		{
//			arr1[j] = arr[i];	
//			j++;
//		}
//		else
//		{
//			
//			arr2[m] = arr[i];
//			m++;
//		}
//	}
//	for (int i = 1; i < sz/2; i++)
//	{
//		arr1[i] ^= arr1[i - 1];
//	}
//	printf("%d\n", arr1[4]);
//	for (int i = 1; i < sz / 2; i++)
//	{
//		arr2[i] ^= arr2[i - 1];
//	}
//	printf("%d\n", arr2[4]);
//	return 0;
//}