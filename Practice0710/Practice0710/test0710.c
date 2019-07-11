#include<stdio.h>
#include<stdlib.h>
int judgeExit(int array[4][4], int x, int y, int key){
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0){
		if (array[i][j]>key){
			j--;
		}
		else if(array[i][j]<key){
			i++;
		}
		else{
			return 1;
		}
	}
	return 0;
}

int main(){
	int array[4][4] = {
		{1,3,6,7},
		{2,4,7,8},
		{4,6,9,10},
		{6,11,12,13}
	};
	int ret=judgeExit(array, 4, 4, 6);
	if (ret == 1){
		printf("Exit\n");
	}
	else{
		printf("Not exit\n");
	}
	system("pause");
	return 0;
}