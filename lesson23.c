#include<stdio.h>
void f_print();
char f_bub();
int addnumber();
float avg();
int main()
{	
	f_print();
	int num = addnumber();
	fprintf(stdout,"Return add_number %d\n", num);
	int num1 = f_bub();
	fprintf(stdout,"Return f_bub %d\n",num1);
	float res = avg();
	fprintf(stdout,"Return avg %.1f\n",res);

}


void f_print()
{

	fprintf(stdout,"Hello Function\n");
}

int addnumber()
{
	int a = 10;
	int b = 35;
	int c;
	c =  a + b;
	return c;
}


char f_bub()
{
	int a;
	int b;
	a = 13;
	b = 12;
	return fprintf(stdout,"Return fbub - %d\n",a+b);
}


float avg()
{
	float a;
	float b;
	scanf("%f%f", &a, &b);
	return (a + b) / 2;
}



