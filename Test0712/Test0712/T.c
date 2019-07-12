int countOne(int a){
	int count = 0;
	for (int x = a; x != 0; x = x / 2){
		int y = x % 2;
		if ((y & 1) == 1){
			count++;
		}
	}
	return count;
}
int main(){
	int a = 7;
	printf("%d\n", countOne(a));
	return 0;
}