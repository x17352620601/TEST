#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void  menu()
{
	printf("**************************************************\n");
	printf("******1.add                         2.del   ******\n");
	printf("******3.search                      4.modify******\n");
	printf("******5.show                        6.sort  ******\n");
	printf("******0.exit                                ******\n");
	printf("**************************************************\n");
}

int main()
	{
	int input = 0;
	//����ͨѶ¼
	struct contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("���������Ĳ���\n");
		scanf("%d", &input);
		switch (input)
		{
		case exit:
			printf("�����˳�����\n");
			break;
		case add:
			addcontat(&con);
			break;
		case del:
			
			delcontact(&con);
			break;
		case search:
			
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		default:
			printf("���������\n");
			break;
		}
	} while (input);
}