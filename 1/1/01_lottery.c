#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m;
	int *k;
	bool flag;
	
	scanf("%d%d", &n, &m);
	k = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k[i]);
	}
	flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < n; l++)
			{
				for (int o = 0; o < n; o++)
				{
					if (m == k[i] + k[j] + k[l] + k[o])
					{
						flag = true;
						break;
					}
				}
				if (flag)
					break;
			}
			if (flag)
				break;
		}
		if (flag)
			break;
	}
	if (flag)
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}
