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
		printf("������Ҫ�µ�1-100֮������֣�");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else{
			printf("�¶���\n");
			break;
		}
	}
}
int main(){
	int p=0;
	srand((unsigned int)time(NULL));
    do{		
		menu();
		printf("��ѡ��");
		scanf("%d", &p);
		switch (p){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����������������롣");
			break;
		}
	} while (p);
	system("pause");
		return 0;
}
