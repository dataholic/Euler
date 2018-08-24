#include <math.h>
#include <stdio.h>

int is_Pythagorean(int a,int b,int c)
{
	int i , j;
	i = pow(a,2) + pow(b,2);
	j = pow(c,2);
	if (a >= b || b >= c )
		return (0);
	if (i == j)
		return (1);
	else
		return (0);
}
int main()
{
	int i = 1,j = 2,k = 3,prod;
	while (i < 1000)
	{
		j = 0;
		while(j < 1000)
		{
			k = 0;
			while (k < 1000)
			{
				if ((is_Pythagorean(i,j,k) == 1) && (i + j + k == 1000))
				{
					prod = i * j * k;
					break;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	printf("%d\n",prod);
	return (0);
}
