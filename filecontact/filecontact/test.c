#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void  menu()
{
	printf("**************************************************\n");
	printf("******1.add                         2.del   ******\n");
	printf("******3.search                      4.modify******\n");
	printf("******5.show                        6.sort  ******\n");
	printf("******0.exit                        7.save  ******\n");
	printf("**************************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct contact con;//arr指针和size,capacity;
	Initcontact(&con);
	do
	{
		menu();
		printf("请输入您的操作\n");
		scanf("%d", &input);
		switch (input)
		{
		case e:
			//销毁通讯录
			savecontact(&con);
			DestroyContact(&con);
			printf("您以退出程序\n");
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
		case save:
			savecontact(&con);
			break;
		default:
			printf("您输入错误\n");
			break;
		}
	} while (input);
}