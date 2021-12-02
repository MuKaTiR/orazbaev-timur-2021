#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;
	int f = 0;
	int s = 0;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	
	f = (x2 - x1)*(y3 - y1) - (x3 - x1) * (y2 - y1);
	if (f < 0)
	{
		f = f * (-1);
	}

	s = f / 2;

	cout << s;

	
	

	return EXIT_SUCCESS;
}