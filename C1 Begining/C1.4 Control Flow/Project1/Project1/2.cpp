#include<iostream>
using namespace std;
int main()
{
	//for
	int sum = 0;
	for (int val = 1; val <= 100;++val)
	{
		sum += val;//same as sum = sum + val
	}
	cout << "sum of 1 to 10 inclusive is:" << sum << endl;

	return 0;
}