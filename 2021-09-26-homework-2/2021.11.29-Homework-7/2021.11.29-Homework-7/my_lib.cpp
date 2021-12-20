#include "my_lib.h"
#include <iostream>
#include <cmath>

using namespace std;

int count(int n)
{
	int cnt = 0;
	
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}

		cnt++;
	}

	return cnt;
}
void circle(int radius)
{
	for (int x = 0; x <= radius * 2; ++x)
	{

		for (int y = 0; y <= radius * 2; ++y)
		{
			int a = radius - x;
			int b = radius - y;

			float d = sqrt(a * a + b * b);

			if (d > (float)radius - 0.5 && d < (float)radius + 0.5)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}

		cout << endl;
	}
}
