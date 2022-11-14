#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <string.h>



// 三子棋的实现

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
	Initboard(board, ROW, COL);           //初始化
	Displayboard(board, ROW, COL);        //打印棋盘
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
}
void test()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}