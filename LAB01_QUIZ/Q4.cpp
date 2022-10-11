#include <iostream>
using namespace std;

//COMPLEXITY = N-2 ===> N

string recursive(int&,int&, int&, int&);

int main()
{
	int n;
	int a = 0, b = 1,temp=0;

	cout << "Enter the number of terms of series: ";
	cin >> n;
	n -= 2;

	cout << "Fibonnaci Series: ";
	cout<< recursive(a, b, temp, n);
	cout << endl << endl;

	return 0;
}

string recursive(int& a, int& b, int& temp, int& n)
{
	if (n == 0) return "";
	if (a == 0 && b == 1) cout << a << "    " << b << "    ";

	temp = a + b;
	cout << temp<<"    ";

	a = b; b = temp; n -= 1;

	return  recursive(a, b, temp, n);
}
