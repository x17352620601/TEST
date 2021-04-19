#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
//���Һ���
static int findbyname(struct contact* con, char name[max_name])
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (!strcmp(con->arr[i].name, name))
		{

			return i;
		}
	}
	if (i == con->size)
	{
		return -1;
	}
}
//��ʼ��ͨѶ¼
void  Initcontact(struct contact* con)
{
	memset(con->arr, 0, sizeof(con->arr));
	con->size = 0;//����ͨѶ¼��ʼԪ��ֻ��һ��
}
//����һ����Ϣ�Ƿ��ܷŽ�ȥ
void addcontat(struct contact* con)
{
	if (con->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", con->arr[con->size].name);
		printf("�������Ա�\n");
		scanf("%s", con->arr[con->size].sex);
		printf("������绰\n");
		scanf("%s", con->arr[con->size].tele);
		printf("�������ַ\n");
		scanf("%s", con->arr[con->size].addr);
		printf("����������\n");
		scanf("%d", &(con->arr[con->size].age));
		con->size++;
		printf("��ӳɹ�\n");
	}
}
//��ʾͨѶ¼
void showcontact(struct contact* con)
{
	if (con->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < con->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				con->arr[i].name,
				con->arr[i].age,
				con->arr[i].sex,
				con->arr[i].tele,
				con->arr[i].addr
			);
			printf("\n");
		}
	}
}
void delcontact(struct contact* con)
{
	printf("������Ҫɾ��������\n");
	char name[max_name] = { 0 };
	scanf("%s", name);
	//����λ��
	int ret = findbyname(con, name);
		//�ҵ��˷����±꣬�Ҳ�������-1
		if (ret == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{

			int j = 0;
			for (j = ret; j < con->size; j++)
			{
				con->arr[j] = con->arr[j + 1];
			}
			con->size--;
			printf("ɾ���ɹ�\n");
		}
} 
void searchcontact(const struct contact*con)
{
	printf("������Ҫ���ҵ�����\n");
	char name[max_name] = { 0 };
	scanf("%s", name);
	int ret = findbyname(con, name);
	if (ret == -1)
	{
		printf("û���ҵ�����ϵ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			con->arr[ret].name,
			con->arr[ret].age,
			con->arr[ret].sex,
			con->arr[ret].tele,
			con->arr[ret].addr
		);
	}
}
void modifycontact(struct contact* con)
{
	printf("������Ҫ�޸��˵�����\n");
	char name[max_name];
	scanf("%s", name);
	int ret = findbyname(con, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", con->arr[ret].name);
		printf("�������Ա�\n");
		scanf("%s", con->arr[ret].sex);
		printf("������绰\n");
		scanf("%s", con->arr[ret].tele);
		printf("�������ַ\n");
		scanf("%s", con->arr[ret].addr);
		printf("����������\n");
		scanf("%d", &(con->arr[ret].age));
		printf("�޸ĳɹ�\n");
	}
}
void sortcontact(struct contact* con)
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		int j = 0;
		for (j = 0; j < con->size - 1 - i; j++)
		{
			if (con->arr[j].age < con->arr[j + 1].age)
			{
				struct peoinfo arr1;
				arr1 = con->arr[j];
				con->arr[j] = con->arr[j + 1];
				con->arr[j + 1] = arr1;
			}
		}
	}
}