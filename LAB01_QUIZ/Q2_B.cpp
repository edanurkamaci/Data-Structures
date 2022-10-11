#include <iostream>
using namespace std;

//COMPLEXITY = N

int recursive(int&, int&);

int main()
{
	int n;
	int sum = 0;

	cout << "Enter the n: ";
	cin >> n;

	cout << "The sum of numbers from 1 to n: "<< recursive(n, sum);
	cout << endl << endl;

	return 0;
}

int recursive(int& a, int& b)
{
	if (a == 0) return b;

	b += a;
	a -= 1;

	return  recursive(a, b);
}
