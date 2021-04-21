#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL);
	{
		return 0;
	}
	fseek(pf, 2, SEEK_END);
	int ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}
//struct s
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct s s = { "张三",20,55.6 };
//	struct s tmp = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制写
//	fread(&tmp, sizeof(struct s), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//	return 0;
//}
//struct s
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct s s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化输入
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	//格式化输出
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hellow\n", pf);
//	fputs("world\n", pf);
//	////读文件
//	//fgets(buf, 1024, pf);
//	//puts(buf);
//	////printf("%s", buf);
//	//fgets(buf, 1024, pf);
//	//puts(buf);
//	//printf("%s", buf);
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	////写文件
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	//fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}
//int main()
//{
//	FILE* pfRead = fopen("TEST.txt", "r");
//	if (pfRead == NULL);
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}
//键盘标准输入设备-stdin
// 屏幕标准输出设备-stdout
//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL);
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//int main()
//{
//	//打开文件text.c
//	FILE* pf = fopen("test.txt", "w");//相对路径
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("C:\\Users\\小谢\\Desktop\\C Program\\code\\class4_21\\class4_21\\test.c", "r");//绝对路径的写法
//}
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}