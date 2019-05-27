#include<stdio.h>
int main(){
	int i = 100;
	int j;
	while (i >= 100 && i <= 200){
		int amount = 1;
		for (j = 2; j < i / 2; j++){
			if (i%j == 0){
				amount = 0;
				break;
			}
		}
		if (amount == 1)
			printf("%5d", i);
		i++;
	}
	return 0;
}