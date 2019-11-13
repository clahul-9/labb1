#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char x;
	scanf_s( "%c",&x);
	printf("\n");
	//cout << int(x) << char(97);
	if (int(x)<=57&&int(x)>=49)
	{
		//printf("nr %i \n",x);
		for (int i = 1; i <=(x-48); i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%i", j);
			}
			
			printf("\n");
		}
	}
	else if (int(x)>=65 && int(x)<=90)
	{
		for (int i = 65; i <= x; i++)
		{
			int k = 65;
			while (k <= i)
			{
				printf("%c", i);
				k++;
			}
			printf("\n");	
		}
	}
	char a;
	cin >> a;
	return 0;
}