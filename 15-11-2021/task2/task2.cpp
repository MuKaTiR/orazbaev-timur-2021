#include<iostream>
using namespace std;
main()
{
	int x, max, min, i = 2;
	cin >> min >> max;
	while (cin >> x)
	{
		i++;
		if (i % 2)
		{
			if (x < min)
			{
				min = x;
			}
		}
		else if (x > max)
		{
			max = x;
		}
	}
	cout << max + min;
}