#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("******1.play*****************0.exit*****\n");
	printf("****************************************\n");
}

void game()
{
	
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS,COLS,'0' );
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
int test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ������Ϸ�����˳���Ϸ��>(1/0)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("GAME OVER!!!!\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}	
	}while(input);
}

int main()
{
	test();
	return 0;
}