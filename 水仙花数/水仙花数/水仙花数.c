#include<stdio.h>
#include<math.h>
int main(){
	int i,count=0,j;
	double sum = 0;
	int tmp[10] = { 0 };
	for (i = 0; i <= 10000; i++){
		for (j = i; j; j /= 10){
			tmp[count] = j % 10;
			count++;
		}
		for (j = 0; j < count; j++){
			sum =sum+pow(tmp[j], count);
		}
		if (sum == i)
			printf("%5d", i);
		sum = count = 0;
	}
	printf("\n");
	return 0;
}