#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> n;

	a = n / 100;
	b = n / 10 - a * 10;
	c = n - a * 100 - b * 10;

	
	if (a == 1)
	{
		cout << "сто ";
	}
	if (a == 2)
	{
		cout << "двести ";
	}
	if (a == 3)
	{
		cout << "триста ";
	}
	if (a == 4)
	{
		cout << "четыреста ";
	}
	if (a == 5)
	{
		cout << "пятьсот ";
	}
	if (a == 6)
	{
		cout << "шестьсот ";
	}
	if (a == 7)
	{
		cout << "семьсот ";
	}
	if (a == 8)
	{
		cout << "восемьсот ";
	}
	if (a == 9)
	{
		cout << "девятьсот ";
	}
	
	if (b == 1 && c == 0)
	{
		cout << "десять бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 1)
	{
		cout << "одиннадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 2)
	{
		cout << "двенадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 3)
	{
		cout << "тринадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 4)
	{
		cout << "четырнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 5)
	{
		cout << "пятнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 6)
	{
		cout << "шестнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 7)
	{
		cout << "семнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 8)
	{
		cout << "восемнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 1 && c == 9)
	{
		cout << "девятнадцать бананов ";
		return EXIT_SUCCESS;
	}
	if (b == 2 )
	{
		cout << "двадцать ";
	}
	if (b == 3)
	{
		cout << "тридцать ";
	}
	if (b == 4)
	{
		cout << "сорок ";
	}
	if (b == 5)
	{
		cout << "пятьдесят ";
	}
	if (b == 6)
	{
		cout << "шестьдесят ";
	}
	if (b == 7)
	{
		cout << "семьдеят ";
	}
	if (b == 8)
	{
		cout << "восемьдесят ";
	}
	if (b == 9)
	{
		cout << "девяносто ";
	}
	if (c == 1)
	{
		cout << "один банан ";
	}
	if (c == 2)
	{
		cout << "два банана ";
	}
	if (c == 3)
	{
		cout << "три банана ";
	}
	if (c == 4)
	{
		cout << "четыре банана ";
	}
	if (c == 5)
	{
		cout << "пять бананов ";
	}
	if (c == 6)
	{
		cout << "шесть бананов ";
	}
	if (c == 7)
	{
		cout << "семь бананов ";
	}
	if (c == 8)
	{
		cout << "восемь бананов ";
	}
	if (c == 9)
	{
		cout << "девять бананов ";
	}
	if (c == 0)
	{
		cout << "бананов ";
	}
	return EXIT_SUCCESS;
}