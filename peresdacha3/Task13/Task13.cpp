#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x0 = 0;
	int y0 = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	
	cin >> x0 >> y0;
	x1 = x0;
	y1 = y0;
	for (int i = -9; i < 9; i++)
	{
		if (x1 + i > 0 && x1 + i < 9 && x1 + i != x0)
		{
			cout << x1 + i << " " << y1 << endl;
		}
	}
	x1 = x0;
	y1 = y0;
	for (int i = -9; i < 9; i++)
	{
		if (y1 + i > 0 && y1 + i < 9  && y1 + i != y0)
		{
			cout << x1 << " " << y1 + i << endl;
		}
	}
	x1 = x0;
	y1 = y0;
	
	while (x1 < 8 && x1 > 1 && y1 > 1 && y1 < 8)
	{
		x1++;
		y1++;
		cout << x1 << " " << y1 << endl;
	}
	x1 = x0;
	y1 = y0;
	while (x1 < 8 && x1 > 1 && y1 > 1 && y1 < 8)
	{
		x1--;
		y1++;
		cout << x1 << " " << y1 << endl;
	}
	x1 = x0;
	y1 = y0;
	while (x1 < 8 && x1 > 1 && y1 > 1 && y1 < 8)
	{
		x1++;
		y1--;
		cout << x1 << " " << y1 << endl;
	}
	x1 = x0;
	y1 = y0;
	while (x1 < 8 && x1 > 1 && y1 > 1 && y1 < 8)
	{
		x1--;
		y1--;
		cout << x1 << " " << y1 << endl;
	}
	
	cin >> x1 >> y1;
	x2 = x1;
	y2 = y1;
	for (int i = -9; i < 9; i++)
	{
		if (x2 + i > 0 && x2 + i < 9 && x2 + i != x0)
		{
			cout << x2 + i << " " << y2 << endl;
		}
	}
	x2 = x1;
	y2 = y1;
	for (int i = -9; i < 9; i++)
	{
		if (y2 + i > 0 && y2 + i < 9 && y2 + i != y0)
		{
			cout << x2 << " " << y2 + i << endl;
		}
	}
	x2 = x1;
	y2 = y1;

	while (x2 < 8 && x2 > 1 && y2 > 1 && y2 < 8)
	{
		x2++;
		y2++;
		cout << x2 << " " << y2 << endl;
	}
	x2 = x1;
	y2 = y1;
	while (x2 < 8 && x2 > 1 && y2 > 1 && y2 < 8)
	{
		x2--;
		y2++;
		cout << x2 << " " << y2 << endl;
	}
	x2 = x1;
	y2 = y1;
	while (x2 < 8 && x2 > 1 && y2 > 1 && y2 < 8)
	{
		x2++;
		y2--;
		cout << x2 << " " << y2 << endl;
	}
	x2 = x1;
	y2 = y1;
	while (x2 < 8 && x2 > 1 && y2 > 1 && y2 < 8)
	{
		x2--;
		y2--;
		cout << x2 << " " << y2 << endl;
	}
	return EXIT_SUCCESS;
}