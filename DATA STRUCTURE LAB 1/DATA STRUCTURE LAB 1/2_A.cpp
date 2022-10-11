#include <iostream>
using namespace std;

//COMPLEXITY = N

int recursive(int&,int&);

int main()
{
	int a=1, b=0;

	recursive(a, b);

	return 0;
}

int recursive(int& a, int& b)
{
	if (a == 51) return 0;

	cout << a << "\t";
	
	b = a + 1;

	return recursive(b,b);
}
