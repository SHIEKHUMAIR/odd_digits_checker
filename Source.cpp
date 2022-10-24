#include<iostream>
using namespace std;
int main()
{
	for (int i = 100; i < 1000; i++)
	{
		bool flag = true;
		int n = i, m;
		while (n != 0)
		{
			m = n % 10;
			n = n / 10;
			if (m % 2 == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << i << "   ";
		}
	}
	return 0;
}
