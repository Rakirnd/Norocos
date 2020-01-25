#include "k_norocos.h"

bool is_k_norocos(int n, int k)
{

	int prime_counter = 0;

	if (n % 2 == 0)
	{

		n = n / 2;
		prime_counter++;

		if (n % 2 == 0)
			return false;

	}

	int divisor = 3;
	int sqrt_n = sqrt(n);

	while (prime_counter < k && divisor <= sqrt_n)
	{

		if (n % divisor == 0)
		{

			prime_counter++;
			n = n / divisor;

			if (n % divisor == 0)
				return false;
		
		}

		divisor += 2;

	}

	if(n == 1)
		return true;

	return false;

}

void k_norocos(int n, int k, int N[])
{

	int k_norocoase_counter = 0;

	ofstream g("norocos.out");

	for (int i = 0; i < n; i++)
		if (is_k_norocos(N[i], k))
			k_norocoase_counter++;

	g << k_norocoase_counter;

	g.close();

}