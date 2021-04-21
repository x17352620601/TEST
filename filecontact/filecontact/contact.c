#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"contact.h"
//查找函数
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
//初始化通讯录
void  Initcontact(struct contact* con)
{
	con->arr = (struct peoinfo*)malloc(DEFAULT_SZ * sizeof(struct peoinfo));
	if (con->arr == NULL)
	{
		return ;
	}
	con->size = 0;//设置通讯录初始元素只有一个
	con->capacity = DEFAULT_SZ;
	//把文件中存在的信息加载到通讯录中
	loadcontact(con);
}
void CheckCapacity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
	struct peoinfo*ptr=(struct peoinfo* )realloc(ps->arr, (2 + ps->capacity) * sizeof(struct peoinfo));
	if (ptr != NULL)
	{
		ps->arr = ptr;
		ps->capacity += 2;
		printf("增容成功\n");
	}
	else
	{
		printf("增容失败\n");
	}
	}
}
//增加一个信息是否能放进去
void addcontat(struct contact* con)
{
//检测当前通讯录的容量
	//1.如果满了，增加容量
	//2.如果未满，啥事都不干
	CheckCapacity(con);
	printf("请输入姓名\n");
	scanf("%s", con->arr[con->size].name);
	printf("请输入性别\n");
	scanf("%s", con->arr[con->size].sex);
	printf("请输入电话\n");
	scanf("%s", con->arr[con->size].tele);
	printf("请输入地址\n");
	scanf("%s", con->arr[con->size].addr);
	printf("请输入年龄\n");
	scanf("%d", &(con->arr[con->size].age));
	con->size++;
	printf("添加成功\n");
	/*if (con->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名\n");
		scanf("%s", con->arr[con->size].name);
		printf("请输入性别\n");
		scanf("%s", con->arr[con->size].sex);
		printf("请输入电话\n");
		scanf("%s", con->arr[con->size].tele);
		printf("请输入地址\n");
		scanf("%s", con->arr[con->size].addr);
		printf("请输入年龄\n");
		scanf("%d", &(con->arr[con->size].age));
		con->size++;
		printf("添加成功\n");
	}*/
}
//显示通讯录
void showcontact(const struct contact* con)
{
	if (con->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除的名字\n");
	char name[max_name] = { 0 };
	scanf("%s", name);
	//查找位置
	int ret = findbyname(con, name);
	//找到了返回下标，找不到返回-1
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{

		int j = 0;
		for (j = ret; j < con->size; j++)
		{
			con->arr[j] = con->arr[j + 1];
		}
		con->size--;
		printf("删除成功\n");
	}
}
void searchcontact(const struct contact* con)
{
	printf("请输入要查找的名字\n");
	char name[max_name] = { 0 };
	scanf("%s", name);
	int ret = findbyname(con, name);
	if (ret == -1)
	{
		printf("没有找到该联系人\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人的名字\n");
	char name[max_name];
	scanf("%s", name);
	int ret = findbyname(con, name);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入姓名\n");
		scanf("%s", con->arr[ret].name);
		printf("请输入性别\n");
		scanf("%s", con->arr[ret].sex);
		printf("请输入电话\n");
		scanf("%s", con->arr[ret].tele);
		printf("请输入地址\n");
		scanf("%s", con->arr[ret].addr);
		printf("请输入年龄\n");
		scanf("%d", &(con->arr[ret].age));
		printf("修改成功\n");
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
	//写通讯录中数据到文件中
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		fwrite(&(con->arr[i]), sizeof(struct peoinfo), 1, pf);
	}
	printf("保存成功\n");
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