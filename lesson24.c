#include<stdio.h>
#define SIZE 50
void string(char str[]);
int sum_number(int a, int b);
int ymnozh(int k,int l);
int main()
{	
	int res_sum,a,b;
	int res_ymnozh;
	int k;
	int l;
	printf("You can add two numbers and our function will count sum value\n");
	scanf("%d%d", &a, &b);
	char str[SIZE]="I am function string\n";
	string(str);
	res_sum = sum_number(a,b);
	fprintf(stdout, "Result sum_number = %d\n",res_sum);
	printf("You can add two numbers and our function will multiply your value\n");
	scanf("%d%d",&k,&l);
	res_ymnozh = ymnozh(k,l);
	fprintf(stdout,"Result multiply function - %d\n",res_ymnozh);
}

void string(char str[])
{
	fprintf(stdout,"Func string: %s",str);
}	
int sum_number(int a, int b)
{
return a + b;
}

int ymnozh(int k, int l)
{

	return k * l;
}	
