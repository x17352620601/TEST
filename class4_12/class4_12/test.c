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
	//��һ��������������������Ԫ�ص�ַ
	//�ڶ������������������Ԫ�ظ���
	//����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ����Ҫ����ȥ���ǱȽ�����Ԫ�����ú����ĵ�ַ
	//���������Ҫ�Լ�ʵ�� ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
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
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*pa)(int, int);//����ָ��
//	int (*parr[4])(int, int);//parr��һ���洢����ָ�������
//	int (*(*pfarr)[4])(int, int) = &parr;//pfarr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��ָ��������ÿ��Ԫ����һ������ָ�� int(*)(int ,int)
//	return 0;
//}
//������

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
//	printf("����������������\n");
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
//		printf("��������Ҫ����ʲô����\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//
//			break;
//		case 2:
//			calc(sub);
//			printf("����������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			calc(mul);
//			printf("����������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			calc(div);
//			printf("����������������\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//		default:
//			printf("ѡ�����\n");
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
//	//parr ��һ������ָ������---ת�Ʊ�
//	int (*parr[])(int, int) = { 0,add,sub,mul,div,xor };
//	do
//	{
//		menu();
//		printf("��������Ҫ����ʲô����\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������\n");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	
//	} while (input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//
//}
////��ָ��my_strcpy�ĺ���ָ�룬дһ������ָ�������ܹ����4��my_strcpy�����ĵ�ַ
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
//����ָ��
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
//}//signal ��һ����������
//signal �����Ĳ�������������һ�� int ���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
// �����ķ�������Ҳ�Ǻ���ָ�룻�ú���ָ��ĺ���������int������������void
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//	//ָ������-����-���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	int arr2[5];//ȡ������ĵ�ַ
//	int(*pa)[5] = &arr2;//pa����һ������ָ��
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
//	int* p = NULL;//����ָ��ָ�����͵�ָ�� ���Դ�����͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ�� ָ���ַ���ָ�� ���Դ���ַ��ĵ�ַ
//	//����ָ�룬ָ�������ָ�� �������ĵ�ַ��
//	int arr[10] = { 0 };
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//	//p Ϊ����ָ��
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
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//ָ������ �������ָ��
//	char* pch[5];//ָ������ ����ַ�ָ��
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//�����ַ���
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