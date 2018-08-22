#include <stdio.h>
int is_prime(unsigned long long nb)
{
	unsigned long long i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else 
			i++;
	}
	return (1);
}
int main()
{
	unsigned long long i = 0;
	unsigned long long j = 0;
	while (i < 600851475143)
	{
		if ((is_prime(i) == 1) && (600851475143 % i == 0))
		{
			j = i;
		}
		i++;
	}
	printf("%llu\n",j);
		
	return (0);
}
