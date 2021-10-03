#include<iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int fact_n = 1, fact_k = 1, fact_n_k = 1;

	for (int i = 1; i < n; i++) 
	{
		fact_n = i;
	}
	for (int i = 1; i < k; i++)
	{
		fact_k = i;
	}
	for (int i = 1; i < n - k; i++)
	{
		fact_n_k = i;
	}
	cout << fact_n / (fact_k * fact_n_k);

	return EXIT_SUCCESS;
}