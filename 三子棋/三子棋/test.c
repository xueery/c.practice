#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu(){
	printf("*******************************\n");
	printf("*******    1.play     *********\n");
	printf("*******    0.exit     *********\n");
	printf("*******************************\n");
}
void game(){
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while (1){
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*'){
		printf("玩家赢\n");
	}
	else if (ret == '#'){
		printf("电脑赢\n");
	}
	else if (ret == 'Q'){
		printf("平局\n");
	}
}
int main(){
	int input = 0;
	srand(time(0));
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！");
			break;
		default:
			printf("输入错误，请重新输入：");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}