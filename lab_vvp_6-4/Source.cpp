#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("x = ");
	printf("%d\n", x);
	float y = ((3 * (powf((float)x, (float)6))) - (6 * x * x) - 7);
	printf("y = ");
	printf("%f", y);
}