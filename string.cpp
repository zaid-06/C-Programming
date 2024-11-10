#include <iostream>
#include <string>

using namespace std;

string getNumName(int n);
int main () {
	
	int n;
	string numName;
	cout << "Enter a number: ";
	cin >> n;
	
	numName = getNumName(n);
	
	cout << numName << endl;
	return 0;
}

string getNumName(int n) 
{
	string numName;
	switch(n)
	{
		case 0:
			numName = "Zero";
			break;
		case 1:
			numName = "One";
			break;
		case 2:
			numName = "Two";
			break;
		default:
			numName = "Other";
			break;
	}
	return numName;
}

