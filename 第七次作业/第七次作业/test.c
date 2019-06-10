#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//≈≈–Ú
int main(){
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++){
		for (B = 1; B <= 5; B++)
		for (C = 1; C <= 5; C++)
		for (D = 1; D <= 5; D++)
		for (E = 1; E <= 5; E++){
			if (((A == 3) + (B == 2) == 1) &&
				((B == 2) + (E == 4) == 1) &&
				((C == 1) + (D == 2) == 1) &&
				((C == 5) + (D == 3) == 1) &&
				((E == 4) + (A == 1) == 1) &&
				A != B&&A != C&&A != D&&A != E&&
				B != C&&B != D&&B != E&&
				C != D&&C != E&&
				D != E){
				printf("A=%d,B=%d,C=%d,D=%d,E=%d", A, B, C, D, E);
			}
		}
	}
	system("pause");
	return 0;
}
//—Óª‘»˝Ω«
void Pascal_t(int data[][10]){
	int i = 0;
	int j = 0;
	data[0][0] = 1;
	for (i = 1; i < 10; i++){
		data[i][0] = 1;
		for (j = 1; j < i; j++){
			data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
		}
		data[i][j] = 1;
	}
}
void print_f(int data[][10]){
	int i = 0, j = 0;
	for (i = 0; i < 10; i++){
		for (j = 0; j <= i; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
}
int main(){
	int data[10][10] = { 0 };
	Pascal_t(data);
	print_f(data);
	system("pause");
	return 0;
}
//–◊ ÷
int main(){
	char murder[4] = { 'a', 'b', 'c', 'd' };
	char killer;
	int i = 0;
	for (i = 1; i <= 4; i++){
		killer = murder[i];
		if ((murder[0] != killer) + (murder[2] == killer) + (murder[3] == killer)
			+ (murder[3] != killer) == 3)
			printf("%c «–◊ ÷\n", killer);
	}
	system("pause");
	return 0;
}