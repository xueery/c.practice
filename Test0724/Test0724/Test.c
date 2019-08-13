#include<stdio.h>
#include<stdlib.h>
int a = 1;
void test(){
	int a = 2;
	a += 1;
}
int main(){
	int y = 10;
	int x = y++;
	int b = 2;
	int c = 0;
	switch (++c){
	    case 0:++c;
	    case 1:++c;
	    case 2:++c;
	}
	printf("%d\n", c);
	printf("%d\n", (b++) * 3);
	test();
	printf("%d,%d\n", x,y);
	printf("%d\n", a);
	return 0;
}