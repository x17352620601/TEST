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
//ö������
//enum sex
//{
//	//ö�ٵĿ���ȡֵ--ö�ٳ���
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
//λ�� ������λ
//struct s
//{
//	int a : 2;//2������λ-4
//	int b : 5;//5������λ-32
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct s s;
//	printf("%d\n", sizeof(s));//8���ֽ�
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
//	printf("%d\n", offsetof(struct s, d));//�궨��
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
//gccû��Ĭ�϶�������
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
//����һ���ṹ������
//����һ��ѧ���������ͣ������ѧ������������ѧ������������
//struct stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s3,s6;//ȫ�ֱ���
//int main()
//{
//	//�ṹ�����
//	struct stu s1;//�ֲ�����
//	struct stu s2;
//
//	return 0;
//}