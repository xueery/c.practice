#include<stdio.h>
int main(){
	int i = 1,count=0;
	for (i; i <= 100; i++){
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("1-100������%d��9\n",count);
	return 0;
}