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
//	//struct s s = { "����",20,55.6 };
//	struct s tmp = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//������д
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
//	//��ʽ������
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	//��ʽ�����
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//д�ļ�
//	fputs("hellow\n", pf);
//	fputs("world\n", pf);
//	////���ļ�
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
//	////д�ļ�
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
//	//���ļ�
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}
//���̱�׼�����豸-stdin
// ��Ļ��׼����豸-stdout
//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL);
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
//int main()
//{
//	//���ļ�text.c
//	FILE* pf = fopen("test.txt", "w");//���·��
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("C:\\Users\\Сл\\Desktop\\C Program\\code\\class4_21\\class4_21\\test.c", "r");//����·����д��
//}
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}