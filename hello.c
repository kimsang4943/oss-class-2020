#include <stdio.h>

extern void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

	return;
}
int main()
{
printf("Hello.world\n");

	return 0;
}
