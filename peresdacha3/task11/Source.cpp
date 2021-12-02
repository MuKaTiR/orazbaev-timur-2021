#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int  n;
	int summ = 0;
	int col = 0;
	int chislo = 0; 
	int sra = 0;
	for (n = 1; n <= 100; n++)
	{
		cin >> chislo;
		summ += chislo;
	}
	sra = summ / 100;
	cout << endl << sra << endl;
	return EXIT_SUCCESS;
}