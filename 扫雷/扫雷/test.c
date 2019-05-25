#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Max_row 9
#define Max_col 9
#define MINE_COUNT 10
//ʹ��������ά�����ʾ��ͼ
//��ʼ��
//��ӡ��ͼ
//���û�����һ������,��Ҫ�������ĺϷ���
//�ж���ǰλ������ǵ��ף���ʾ��Ϸ����
//������ǵ��ף��ж��Ƿ���Ϸʤ��
//������ǵ��ף���Ҫ����һ�����֣��������
//��ʾ��Χ8�����������м�������
void Init(char show_map[Max_row][Max_col],
	      char mine_map[Max_row][Max_col]){
	//show_mapȫ��ʼ��Ϊ*
	int row = 0;
	int col = 0;
	for (row = 0; row < Max_row; row++){
		for (col = 0; col < Max_col; col++){
			show_map[row][col] = '*';
		}
	}
	//mine_map��ʼ��
	for (row = 0; row < Max_row; row++){
		for (col = 0; col < Max_col; col++){
			mine_map[row][col] = '0';
		}
	}
	//�������ʮ������
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
	 //�ȴ�ӡ��һ�У����꣩
	printf("  |");
	for (col = 0; col < Max_row; col++){
		printf("%d ", col);
	}
	printf("\n");
	//��ӡһ�зָ���
	for (col = 0; col < Max_row; col++){
		printf("---");
	}
	printf("\n");
	//����ÿ������ӡ
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
	//����������ά����
	char show_map[Max_row][Max_col];
	char mine_map[Max_row][Max_col];
	//��ʼ��
	Init(show_map, mine_map);
	while (1){
		system("cls");
		//��ӡ��ͼ
		printMap(show_map);
		//���û���������
		printf("������һ������(row col):");
		scanf("%d%d", &row, &col);
		if (row < 0 || row >= Max_row || col < 0 || col >= Max_col){
			printf("���������������������룡\n");
			continue;
		}
		if (show_map[row][col] != '*'){
			//��λ�ñ�����
			printf("��������λ���Ѿ������������������룡\n");
			continue;
		}
		//�ж��Ƿ����
		if (mine_map[row][col] == '1'){
			system("cls");
			printf("�����ˣ���Ϸ����\n");
			printMap(mine_map);
			break;
		}
		++blank_count;
		//�ж��Ƿ�ɨ�׳ɹ�
		if (blank_count == Max_row*Max_col - MINE_COUNT){
			printf("ɨ�׳ɹ���\n");
			break;
		}
		//���µ�ͼ
		UpdateShowmap(show_map,mine_map,row,col);
	}
}
int menu(){
	printf("***********************\n");
	printf("      1.��ʼ��Ϸ       \n");
	printf("      0.������Ϸ       \n");
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
			printf("������������������");
	}
	system("pause");
	return 0;
}