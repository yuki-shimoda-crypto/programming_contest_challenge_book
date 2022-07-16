#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m, *k;

	scanf("%d%d", &n, &m);
	k = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			for (int c = 0; c < n; c++)
			{
				for (int d = 0; d < n; d++)
				{
					if (m == k[a] + k[b] + k[c] + k[d])
					{
						printf("Yes\n");
						return (0);
					}
				}
			}
		}
	}
	printf("No\n");

	return (0);
}

