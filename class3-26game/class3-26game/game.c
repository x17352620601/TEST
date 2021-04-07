#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
void cd()
{
	printf("**********************************\n");
	printf("***     1.paly     0.exit      ***\n");
	printf("**********************************\n");
}

void game()
{
	int reg = 0;
	int guess = 0;
	reg = rand() % 100 + 1;
	
	while (1)
	{
		printf("请输入你猜测的数字大小:\n");
		scanf("%d", &guess);
		if (guess < reg)
		{
			printf("您猜小了,请在猜一次!\n");
			
		}
		else if (guess > reg)
		{
			printf("您猜大了，请在猜一次!\n");
		}
		else
		{
			printf("猜对了\n!");
			break;
		}
	}
	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		cd();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("您以退出游戏\n");
			break;
		default:
			printf("输入错误请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}