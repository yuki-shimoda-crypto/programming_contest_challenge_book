#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FT_MAX(a, b) (a > b ? a : b)

int main(void)
{
	int n;
	int *a;
	int len;
	int max;

	max = 0;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				len = a[i] + a[j] + a[k];
				if (2 * FT_MAX(a[i], FT_MAX(a[j], a[k])) < len)
					max = len;
			}
		}
	}
	printf("%d\n", max);
	return (0);
}
