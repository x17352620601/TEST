#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (j = 0; j <= row; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() %col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int  x,int  y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1 ][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void SL1(char mine[ROWS][COLS], char show[ROWS][COLS], int count, int x, int y)
{
	if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && count == 0)
	{
		show[x][y] = count + '0';
		int count5 = get_mine_count(mine, x, y + 1);
		SL1(mine, show, count5, x, y + 1);
		int count6 = get_mine_count(mine, x + 1, y - 1);
		SL1(mine, show, count6, x + 1, y - 1);
		int count7 = get_mine_count(mine, x + 1, y);
		SL1(mine, show, count7, x + 1, y);
		int count8 = get_mine_count(mine, x + 1, y + 1);
		SL1(mine, show, count8, x + 1, y + 1);
	}
	else
	{
		show[x][y] = count + '0';
	}
}
void SL(char mine[ROWS][COLS],char show[ROWS][COLS],int count, int x, int y)
{
	if (x >= 1 && x <= 9 && y >= 1 && y <= 9 && count == 0)
	{
		show[x][y] = count + '0';	
		int count1 = get_mine_count(mine, x - 1, y - 1);
		SL(mine, show, count1, x - 1, y - 1); 
		int count2 = get_mine_count(mine, x - 1, y);
		SL(mine, show, count2, x - 1, y);
		int count3 = get_mine_count(mine, x - 1, y + 1);
		SL(mine, show, count3, x - 1, y + 1);
		int count4 = get_mine_count(mine, x, y - 1);
		SL(mine, show, count4, x, y - 1);
		
	}
	else
	{
		show[x][y] = count + '0';	
	}
}

int WIN(char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] != '*')
			{
				win++;
			}
		}
	}
	return win;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			//坐标合法
			if (mine[x][y] == '1')
			{
				printf("GAME OVER\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//计算x,y坐标周围有几个雷
				int count = get_mine_count(mine,x,y);
				/*show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);*/
				SL(mine, show,count, x, y);
				SL1(mine, show, count, x, y);
				DisplayBoard(show, ROW, COL);
				win = WIN(show, ROW, COL);			
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
	}
}