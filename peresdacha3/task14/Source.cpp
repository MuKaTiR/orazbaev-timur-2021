#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int H = 0;
	int M = 0;
	int a = 0;
	int t = 0;
	int R = 0;
	int m = 0;
	int F = 0;

	 
	cin >> H >> M >> R >> m;
	F = 6.67 * 0.00000000001 * M * m / ((R + H) * (R + H));
	a = F / m;
	t = sqrt(2 * H / a);
	
	cout << t;

	return EXIT_SUCCESS;
}