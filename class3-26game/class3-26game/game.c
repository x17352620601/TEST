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
		printf("��������²�����ִ�С:\n");
		scanf("%d", &guess);
		if (guess < reg)
		{
			printf("����С��,���ڲ�һ��!\n");
			
		}
		else if (guess > reg)
		{
			printf("���´��ˣ����ڲ�һ��!\n");
		}
		else
		{
			printf("�¶���\n!");
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
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}