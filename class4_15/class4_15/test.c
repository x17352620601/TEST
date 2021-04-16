#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr[10] = { 0 };
//	memset(arr, '1', 10);
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);//比较字节的个数
//	printf("%d\n", ret);
//	return 0;
//}
//memcmp
//void* my_memmove(void* dest, void* src, size_t num)
//{
//  char* ret = (char*)dest;
//	if (dest > src)
//	{
//		//后——>前
//		char* s1 = (char*)dest + num-1;
//		char* s2 = (char*)src + num-1;
//		while (num--)
//		{
//			*s1 = *s2;
//			s1--;
//			s2--;
//		}
//	}
//	else
//	{
//		//前->后
//		char* s1 = (char*)dest;
//		char* s2 = (char*)src;
//		while (num--)
//		{
//			*s1 = *s2;
//			s1++;
//			s2++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1+2 , arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//}
//memcpy处理不同内存的拷贝
//memmove处理重叠内存的拷贝
//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	char arr1[] = "abcdef";
//	char arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%c\n", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//错误码 错误信息
//	//0-no error
//	//1-Operation not permitted
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生的错误，就会把对应的错误码，赋值到errno中
//	
//	/*har* str = strerror(0);
//	printf("%s\n", str);*/
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success.");
//	}
//	return 0;
//}

//int main()
//{
//	//192.168.31.121
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//切割buf中的字符串
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	return 0;
//}

//教学程序
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//	}
//	//
//	while (*cur )
//	{
//		s1 = cur;
//		s2 = p2;
//		while (*s1 != '\0' &&*s1 == *s2&& *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//}
//int main()
//{
//
//	char* p1 = "abcdefabcdef";
//	char* p2 = "fa";
//	char * p3=my_strstr(p1, p2);
//	if (p3 == NULL)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("%s\n", p3);
//	}
//	return 0;
//}
//
//strstr 查找字符串
//null -\0
//自写程序
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(*dest != NULL);
//	assert(*src  != NULL);
//	char* s1  = NULL;
//	char* s2  = NULL;
//	char* ret = dest;
//	while (*ret)
//	{
//		s1 = ret;
//		s2 = src;
//
//		while(*s1 && *s2 && !(*s1-*s2))
//		{
//			s1++;
//			s2++;
//		}
//
//		if (!*s2)
//		{
//			return ret;
//		}
//		ret++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbcdefg";
//	char* p2 = "bbc";
//	char* p3 = my_strstr(p1, p2);
//
//	if (p3 == NULL)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("%s\n", p3);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdfg";
//	int ret = strncmp(arr1, arr2,5);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "ghilmn";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
// }

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	return 0;
//}
//#include<assert.h>
//int my_strcmp(const char* arr1,const  char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//		{
//			return 0;
//		}
//		arr1++;
//		arr2++;
//	}
//	 if (*arr1 < *arr2)
//	{
//		return -1;
//	}
//	else if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<assert.h>
//char* my_strcat(char* dest, const char* scr)
//{
//	assert(dest && scr != NULL);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while(*dest++ = *scr++)
//	{
//
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hellow\0xxxxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
 /*char *my_strcpy(char* dest, const char* src)
{

	 char* ret = dest;
	 while (*dest++ = *src++)
	 {

	 }
	 return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}*/
//int my_strlen(char* str)
//{
//	char* arr = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - arr;
//	/*int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;*/
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}