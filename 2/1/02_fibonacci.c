#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int num)
{
	if (num <= 1)
		return num;
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void)
{
	int a = 10;
	printf("%d\n", fibonacci(a));

	return (0);
}