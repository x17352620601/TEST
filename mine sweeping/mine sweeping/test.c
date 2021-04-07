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
	//初始化数组
	InitBoard(mine, ROWS,COLS,'0' );
	InitBoard(show, ROWS, COLS, '*');
	//打印数组
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
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
		printf("请选择玩游戏还是退出游戏：>(1/0)\n");
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
			printf("输入错误请重新输入\n");
			break;
		}	
	}while(input);
}

int main()
{
	test();
	return 0;
}