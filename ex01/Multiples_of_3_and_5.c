#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	while (i * 3 < 1000)
	{
		if ((i * 3) % 5 == 0)
			i++;
		else
		{
			sum += i * 3;
			i++;
		}
	}
	while (j * 5 < 1000)
	{
		sum += j * 5;
		j++;
	}
	printf("%d\n",sum);
}
		
			
