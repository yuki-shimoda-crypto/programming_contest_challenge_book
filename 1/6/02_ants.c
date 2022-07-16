#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_max(int a, int b)
{
	return a > b ? a : b;
}

int ft_min(int a, int b)
{
	return a < b ? a : b;
}

int ft_abs(int a)
{
	return a > 0 ? a : a * -1;
}

int main(void)
{
	int l, n, *x;
	int max = 0, min = 0;

	scanf("%d%d", &l, &n);
	x = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);
	for (int i = 0; i < n; i++)
		max = ft_max(max, (x[i] < 5 ? ft_abs(x[i] - 10) : x[i]));
	for (int i = 0; i < n; i++)
		min = ft_max(min, (x[i] > 5 ? ft_abs(x[i] - 10) : x[i]));
	printf("%d\n", min);
	printf("%d\n", max);
	return (0);
}

勝てると楽しい
ドン勝は案外ムズい