#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max_row 9
#define Max_col 9
#define MINE_COUNT 10
//使用两个二维数组表示地图
//初始化
//打印地图
//让用户输入一组坐标,需要检查坐标的合法性
//判定当前位置如果是地雷，提示游戏结束
//如果不是地雷，判定是否游戏胜利
//如果不是地雷，需要更新一个数字，这个数字
//表示周围8个格子里面有几个地雷
void Init(char show_map[Max_row][Max_col],
	      char mine_map[Max_row][Max_col]){
	//show_map全初始化为*
	int row = 0;
	int col = 0;
	for (row = 0; row < Max_row; row++){
		for (col = 0; col < Max_col; col++){
			show_map[row][col] = '*';
		}
	}
	//mine_map初始化
	for (row = 0; row < Max_row; row++){
		for (col = 0; col < Max_col; col++){
			mine_map[row][col] = '0';
		}
	}
	//随机生成十个地雷
	int mine_count = MINE_COUNT;
	while (mine_count>0){
		int row = rand() % Max_row;
		int col = rand() % Max_col;
		if (mine_map[row][col] == '1'){
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}
void printMap(char show_map[Max_row][Max_col]){
	int row = 0;
	int col = 0;
	 //先打印第一行（坐标）
	printf("  |");
	for (col = 0; col < Max_row; col++){
		printf("%d ", col);
	}
	printf("\n");
	//打印一行分隔符
	for (col = 0; col < Max_row; col++){
		printf("---");
	}
	printf("\n");
	//按照每行来打印
	for (row = 0; row < Max_row; row++){
		printf("%d |", row);
		for (col = 0; col < Max_col; col++){
			printf("%c ", show_map[row][col]);
		}
		printf("\n");
	}
}
void UpdateShowmap(char show_map[Max_row][Max_col],
	char mine_map[Max_row][Max_col],int row,int col){
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1'){
		++count;
	}
	if (row - 1 >= 0 && mine_map[row - 1][col] == '1'){
		++count;
	}
	if (row - 1 >= 0 && col+1 < Max_col && mine_map[row - 1][col + 1] == '1'){
		++count;
	}
	if (col - 1 >= 0 && mine_map[row][col - 1] == '1'){
		++count;
	}
	if (col + 1< Max_col && mine_map[row][col + 1] == '1'){
		++count;
	}
	if (row + 1 < Max_row && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1'){
		++count;
	}
	if (row + 1 < Max_row && mine_map[row + 1][col] == '1'){
		++count;
	}
	if (row + 1 < Max_row && col + 1 < Max_col && mine_map[row + 1][col + 1] == '1'){
		++count;
	}
	show_map[row][col]= count +'0';
}
void game(){
	int row = 0;
	int col = 0;
	int blank_count = 0;
	//创建两个二维数组
	char show_map[Max_row][Max_col];
	char mine_map[Max_row][Max_col];
	//初始化
	Init(show_map, mine_map);
	while (1){
		system("cls");
		//打印地图
		printMap(show_map);
		//让用户输入坐标
		printf("请输入一组坐标(row col):");
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= Max_row || col < 0 || col >= Max_col){
			printf("您的输入有误，请重新输入！\n");
			continue;
		}
		if (show_map[row][col] != '*'){
			//此位置被翻开
			printf("您的输入位置已经被翻开，请重新输入！\n");
			continue;
		}
		//判定是否踩雷
		if (mine_map[row][col] == '1'){
			system("cls");
			printf("踩雷了，游戏结束\n");
			printMap(mine_map);
			break;
		}
		++blank_count;
		//判定是否扫雷成功
		if (blank_count == Max_row*Max_col - MINE_COUNT){
			printf("扫雷成功！\n");
			break;
		}
		//更新地图
		UpdateShowmap(show_map,mine_map,row,col);
	}
}
int menu(){
	printf("***********************\n");
	printf("      1.开始游戏       \n");
	printf("      0.结束游戏       \n");
	printf("***********************\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	srand(time(0));
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else
			printf("输入有误，请重新输入");
	}
	system("pause");
	return 0;
}