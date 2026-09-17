#include<iostream>
using namespace std;
int main()
{
	int currentVal = 0, Val = 0;
	if (cin >> currentVal)
	{
		int cnt = 1;
		while (cin >> Val)
		{
			if (Val == currentVal)
			{
				++cnt;
			}
			else
			{
				cout << currentVal << " occuer " << cnt << " times " << endl;
				currentVal = Val;
				cnt = 1;
			}
		}
		cout << currentVal << " occuer " << cnt << " times " << endl;

	}

	return 0;
}