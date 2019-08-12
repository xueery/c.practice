#include<stdio.h>
#include<stdlib.h>
int x = 3;
void inc(){
	static int x = 1;
	x *= (x + 1);
	printf("%d", x);
	return 0;
}
int main(){
	int i;
	for (i = 1; i < x; i++){
		inc();
	}
	return 0;
}