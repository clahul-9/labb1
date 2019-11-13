#include <stdio.h>

int x;
int main(){
	printf("Hej! Please insert a number: \n");
	scanf_s("%d", &x);
	printf("Your number is %d \n", x);
	
	int q;
	scanf_s("%d", &q);

	return 0;
}