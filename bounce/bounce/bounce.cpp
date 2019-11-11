#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x<0)
	{
		cout << "Error";
	}
	else
	{
		int q = (2 * x)+1;
		for (int i = 0; i < q; i++)
		{
			if (x >= 0)
			{
				cout << x << "\n";
				x = x - 1;
			}
			else if (x < 0)
			{
				cout << -1 * x << "\n";
				x = x - 1;
			}
		}
	}
	char y;
	cin >> y;
	return 0;
}