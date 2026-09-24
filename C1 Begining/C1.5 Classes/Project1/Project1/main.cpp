#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item Total;
	if (cin >> Total)
	{
		Sales_item trans;
		while (cin >> trans)
		{
			if (Total.isbn() == trans.isbn())
			{
				Total += trans;
			}
			else
			{
				cout << Total << endl;
				Total = trans;
			}
		}cout << Total << endl;
	}
	else
	{
		cerr << "No data!?" << endl;
		return -1;
	}
	return 0;
}