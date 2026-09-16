#include<iostream>
using namespace std;
int main()
{
	//while
	int sum = 0, val = 1;
	while (val <= 10)
	{
		sum += val;
		++val;//val + 1
	}
	cout << "Sum of 1 to 10 isnclusive is " << sum << endl;
	//practice 1 find the sum of integers bettwen 50 inclusive to 100 inclusive
	int gross = 0, vaL = 50;
	while (vaL <= 100)
	{
		gross += vaL;
		++vaL;
	}
	cout << "Sum of 50 to 100 isnclusive is " << gross << endl;
	//practice 2 print integers bettwen 10 to 0
	int ten = 10;
	while (ten >= 0)
	{
		cout << ten << endl;
		--ten;
		
	}
	//practice 3 asking user to input 2 integers a and b, print all integers bettwen a and b
	int a; int b; int c = 0;
	cout << "type two integers: ";
	cin >> a >> b;
	c += a;
	while (c <= b)
	{
		cout << c << endl;
		++c;
		

	}



	return 0;
}