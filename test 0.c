#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>



// �������ʵ��

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("******1 play   2 exit******\n");
	printf("***************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);           //��ʼ��
	Displayboard(board, ROW, COL);        //��ӡ����
	while (1)
	{
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}