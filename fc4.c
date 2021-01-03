#include<stdio.h>
#include<math.h>
#define A -2.0
#define B 2.0
#define H 0.1

double F(double x)
{
	return exp(x) - x*x;
}

int main()
{
	double x, y;
	double min;
	double q;
	int n;
	n = 0;
	
	min = F(A);
	for (x = A; x <=B;x = x + H) {
	y = F(x);
	printf("%10.2f %10.2f\n",x,y);
	
	if ( y < min)
		min = y;
	modf(y, &q);
	if ((long)q % 2 == 0)
		n++;

}
printf("min = %.2f\n", min);
printf("n = %d\n", n);
return 0;

}
