#include <iostream>
using namespace std;

//COMPLEXITY = N

int recursive(int, int&);

int main()
{
	int n;
	int fact = 1;

	cout << "Input a number: ";
	cin >> n;

	cout << "The Factorial of "<< n << " is: " << recursive(n, fact);
	cout << endl << endl;

	return 0;
}

int recursive(int a, int& b)
{
	if (a == 0) return b;

	b *= a;
	a -= 1;

	return  recursive(a, b);
}
