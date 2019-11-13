#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	cout << endl;

	vector<int> prime;
	prime.push_back(2);

	
	for (int i = 2;; i++){
		bool flag = true;
		//cout <<"i"<< i;
		for (int e : prime) {
			//cout <<"e"<< e;
			if (i%e==0)
			{
				flag = false;
			}
		}
		if (prime.size() >= n)
		{
			break;
		}
		if (flag)
		{
			prime.insert(prime.end(), i);
		}
	}
	for (int e : prime) {
		cout << e<<endl;
	}
	char q;
	cin >> q;

	return 0;
}