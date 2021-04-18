#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	return 0;
}
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//}
//枚举类型
//enum sex
//{
//	//枚举的可能取值--枚举常量
//	MALE=2,
//	FAMALE=4,
//	SECRET=8
//};
//enum color
//{
//	red,
//	yellow,
//	blue
//};
//int main()
//{
//	enum sex s = MALE;
//	enum color c = red;
//	printf("%d %d %d\n", red, yellow, blue);
//	return 0;
//}

//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct s s = { 0 };
//	s.a = 10;
//	s.b = 20; 
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//位段 二进制位
//struct s
//{
//	int a : 2;//2个比特位-4
//	int b : 5;//5个比特位-32
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct s s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}
//struct s
//{
//	int a;
//	char c;
//	double d;
//
//};
//void init(struct s *tmp)
//{
//	tmp->a = 100;
//	tmp->c = 'w';
//	tmp->d = 3.14;
//}
//int main()
//{
//	struct s s = { 0 };
//	init(&s);
//	return 0;
//}
//#include<stddef.h>
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct s, c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));//宏定义
//	return 0;
//}
//#pragma pack(4)
//struct s
//{
//	char ci;
//	double d;
//};
//int main()
//{
//	struct s s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//#pragma pack()
//gcc没有默认对齐数；
//struct t
//{
//	double weight;
//	short age;
//};
//struct s
//{
//	char c;
//	struct t st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct s s = { 'c',100,3.14,"hello bit" };
//	struct s s = { 'c',{120.0,18},199,3.14,"hello bit" };
//	printf("%c %d %lf %s", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//	struct Node* n;
//};
//int main()
//{
//	return 0;
//}
//
//struct
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	
//	return 0;
//}
//申明一个结构体类型
//声明一个学生个体类型，是想过学生类型来创建学生变量（对象）
//struct stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s3,s6;//全局变量
//int main()
//{
//	//结构体变量
//	struct stu s1;//局部变量
//	struct stu s2;
//
//	return 0;
//}