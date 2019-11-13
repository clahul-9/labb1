#include <iostream>
#include <string>

using namespace std;
int main()
{
	//name
	string name;
	cout << "Name:"<<endl;
	cin >> name;
	//age
	int age;
	cout << "Age:" << endl;
	cin >> age;
	//gender(m/f)
	char gender;
	cout << "Gender(m/f):" << endl;
	cin >> gender;
	//address
	string address;
	cout << "Address:" << endl;
	cin >> address;
	//maride true/false
	bool maride;
	cout << "Maride(true/false:)" << endl;
	string x;
	cin >> x;
	if (x=="false")
	{
		maride = false;
	}
	else if (x=="true")
	{
		maride = true;
	}

	//height in meters
	float height;
	cout << "Height:" << endl;
	cin >> height;
	//utmatning
	cout << "\n \n" << endl;
	cout << name << " " << age << " " << gender << " " << address << " " << maride << " " << height << " " << endl;

	int u;
	cin >> u;
}