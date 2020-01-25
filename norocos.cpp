#include "norocos.h"

bool is_norocos(int n)
{

	int sum = 0;
	int n_patrat = pow(n, 2);
	int a = 1;
	int b = n;

	do
	{

		sum = ((a + b) * (b - a + 1)) / 2;

		if (sum == n_patrat)
			return true;

		a++;
		b++;

	} while (sum < n_patrat);

	return false;

}

void norocos(int n, int N[])
{

	int nr_norocoase[1000] = { 0 };
	int nr_norocoase_index = 0;
	int min_norocos = 2000000001;
	int max_norocos = 0;

	ofstream g("norocos.out");

	for (int i = 0; i < n; i++)
		if (is_norocos(N[i]))
			nr_norocoase[nr_norocoase_index++] = N[i];

	for (int i = 0; i < nr_norocoase_index; i++)
	{

		if (nr_norocoase[i] < min_norocos)
			min_norocos = nr_norocoase[i];

		if (nr_norocoase[i] > max_norocos)
			max_norocos = nr_norocoase[i];

	}

	if (nr_norocoase_index == 0)
		g << 0;
	else
		g << min_norocos << " " << max_norocos;

	g.close();


}