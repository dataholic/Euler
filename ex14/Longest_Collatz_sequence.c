#include <stdio.h>

unsigned long long Collatz_sequence(unsigned long long nb)
{
	unsigned long long i = 1;
	while (nb != 1)
	{
		if (nb % 2 == 0)
		{
			nb /= 2;
		}
		else
		{
			nb = (3 * nb) + 1;
		}
		i++;
	}
	return (i);
}
int main()
{
	unsigned long long i = 1, res = 1,temp,num;
	while (i < 1000000)
	{
		temp = Collatz_sequence(i);
		if (temp > res)
		{
			res = temp;
			num = i;
		}
		i++;
	}
	printf("%llu\n",num);
	return (0);
}
