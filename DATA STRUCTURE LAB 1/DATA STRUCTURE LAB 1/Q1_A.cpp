#include <iostream>
using namespace std;

//COMPLEXITY = N

int main()
{
	int n;

	cout << "Enter the n: ";
	cin >> n;
	cout << endl;

	for (int i = n; i >= 0; i--)
		cout << i << "\t";

	return 0;
}