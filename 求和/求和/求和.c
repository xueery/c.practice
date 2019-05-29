#include<stdio.h>
int main(){
	int i=1;
	double j,sum=0.0;
	for (i; i <= 100; i++){
		//sum = sum +j*(1.0/i);
	    //j=j*(-1);
		j = 1.0/ i*(i % 2 ? 1 : -1);
		sum = sum + j;
	}
	printf("sum=%lf\n", sum);//doubleÎª%lf¡£
	return 0;
}