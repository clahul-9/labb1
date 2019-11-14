#include <iostream>
#include<stdio.h>

int main() {
	char name[25];
	int age;
	char gender;
	char address[25];
	int	maride;
	float height;
    //Asking dor info
	printf_s("Enter <name> <age> <gender(m/f)> <address> <maride(true=1/false=0)> <height in meters> :");
	//scaning info 
	scanf_s("%24s %d %c %24s %d %f",name,sizeof(name),&age,&gender,1,&address,sizeof(address),&maride,&height);
	printf("\n\n\n %s \n %i \n %c \n %s \n %i \n %f", name, age,gender,address,maride, height);

	char u;
	std::cin >> u;
}