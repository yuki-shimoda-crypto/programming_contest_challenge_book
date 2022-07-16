#include <stdio.h>
#include <stdlib.h>
// // increasing order
// int compar(const void *n1, const void *n2)
// {
// 	if (*(long *)n1 > *(long *)n2)
// 		return (1);
// 	else if (*(long *)n1 < *(long *)n2)
// 		return (-1);
// 	else
// 		return (0);
// }

// int cmpnum(const void * n1, const void * n2)
// {
// 	if (*(long *)n1 > *(long *)n2)
// 	{
// 		return 1;
// 	}
// 	else if (*(long *)n1 < *(long *)n2)
// 	{
// 		return -1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }

// int main(void)
// {
// 	long num[10] = {60, 10, 50, 30, 80, 40, 20, 90, 70, 0};

// 	qsort(num, 10, sizeof(long), compar);
// 	for (int i = 0 ; i < 10; i++)
// 		printf("%ld\n", num[i]);
// 	return 0;
// }


int compar(const void *n1, const void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}
int main(void)
{
	int num[10] = {60, 10, 50, 30, 80, 40, 20, 90, 70, 0};

	qsort(num, 10, sizeof(int), compar);
	for (int i = 0 ; i < 10; i++)
		printf("%d\n", num[i]);
	return 0;
}
