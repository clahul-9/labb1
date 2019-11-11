#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	for (int i = 0; i < (x*2); i++)
	{
		if (x>=0)
		{
			cout <<x;
			x - 1;
		}
		else if (x>0)
		{
			cout << -x;
			x - 1;
		}
	}
	char y;
	cin >> y;
	return 0;
}