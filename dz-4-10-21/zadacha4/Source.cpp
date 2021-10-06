#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	int fact_n = 1;
    int fact_n_k = 1;

	for (int i = k + 1; i <= n; i++) 
	{
		fact_n *= i;
	}
	
	for (int i = 1; i <= n - k; i++)
	{
		fact_n_k *= i;
	}
	cout << fact_n /fact_n_k;

	return EXIT_SUCCESS;
}