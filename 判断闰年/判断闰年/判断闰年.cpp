#include<stdio.h>
int main(){
	int i = 1000;
	while (i >= 1000 && i <= 2000){
		while (i % 400 == 0){
			printf("%5d", i);
			break;
		}
		while (i % 4 == 0 && i % 100 != 0){
				printf("%5d", i);
				break;
		}
		i++;
	}
	return 0;
}