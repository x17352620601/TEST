#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int  tmp = *buf2;
		*buf2 = *buf1;
		*buf1 = tmp;
		*buf1++;
		*buf2++;
	}
}
void Bubble_sort(void* base, int sz, int width, int  (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};
cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
cmp_float(const void* e1, const void* e2)
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
		return 0;
	}
}
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}
test2()
{
	float f[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	Bubble_sort(f, sz, sizeof(f[0]),cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f\n", f[i]);
	}
}
test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	Bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
}
test4()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	Bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
}
int main()
{
	test4();
	return 0;
}