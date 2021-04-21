#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
	con->arr = (struct peoinfo*)malloc(DEFAULT_SZ * sizeof(struct peoinfo));
	if (con->arr == NULL)
	{
		return ;
	}
	con->size = 0;//����ͨѶ¼��ʼԪ��ֻ��һ��
	con->capacity = DEFAULT_SZ;
	//���ļ��д��ڵ���Ϣ���ص�ͨѶ¼��
	loadcontact(con);
}
void CheckCapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
	struct peoinfo*ptr=(struct peoinfo* )realloc(ps->arr, (2 + ps->capacity) * sizeof(struct peoinfo));
	if (ptr != NULL)
	{
		ps->arr = ptr;
		ps->capacity += 2;
		printf("���ݳɹ�\n");
	}
	else
	{
		printf("����ʧ��\n");
	}
	}
}
//����һ����Ϣ�Ƿ��ܷŽ�ȥ
void addcontat(struct contact* con)
{
//��⵱ǰͨѶ¼������
	//1.������ˣ���������
	//2.���δ����ɶ�¶�����
	CheckCapacity(con);
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
	/*if (con->size == MAX)
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
	}*/
}
//��ʾͨѶ¼
void showcontact(const struct contact* con)
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
void searchcontact(const struct contact* con)
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
void DestroyContact(Contact* con)
{
	free(con->arr);
	con->arr = NULL;
}
void savecontact(Contact* con)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return ;
	}
	//дͨѶ¼�����ݵ��ļ���
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(&(con->arr[i]), sizeof(struct peoinfo), 1, pf);
	}
	printf("����ɹ�\n");
	fclose(pf);
	pf = NULL;
}
void loadcontact(Contact* con)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	
	while (fread(&(con->arr[con->size]), sizeof(struct peoinfo), 1, pf))
	{
		CheckCapacity(con);
		con->size++;
	};
	fclose(pf);
	pf = NULL;
}