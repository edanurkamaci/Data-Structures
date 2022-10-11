#include <iostream>
using namespace std;

//COMPLEXITY = N 

int main()
{
	int n;
	int sum = 0;

	cout << "Enter the number of consecutive positive integers (starting from 1): ";
	cin >> n;

	while (n > 0)
	{
		sum += n;
		n--;
	}

	cout << endl << "The sum is: " << sum<<endl<<endl;

	return 0;
}