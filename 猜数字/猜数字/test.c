#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("******  1.play   *******\n");
	printf("******  0.exit   *******\n");
	printf("************************\n");
}
void game(){
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1){
		printf("输入你要猜的1-100之间的数字：");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else{
			printf("猜对了\n");
			break;
		}
	}
}
int main(){
	int p=0;
	srand((unsigned int)time(NULL));
    do{		
		menu();
		printf("请选择：");
		scanf("%d", &p);
		switch (p){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入。");
			break;
		}
	} while (p);
	system("pause");
		return 0;
}
