#include<stdio.h>
int main(){
	int x=0, y=0, z;
	printf("输入两个数：");
	scanf("%d%d", &x, &y);
	if (x > y){
		for (z = x-1; z > 0; z--){
			if (x%z == 0){
				if (y%z == 0){
					printf("最大的公约数为%d", z);
					break;
				}
			}
		}
	}
	if (x < y){
		for (z = y - 1; z>0; z--){
			if (y%z == 0){
				if (x%z == 0){
					printf("最大的公约数为%d", z);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}