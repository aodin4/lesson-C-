#include<stdio.h>

float del(int num1,int num2);
void f_print(void);
int ymnozh(int i, int c);
int sum_num(int a,int b);
int	main()
{	
	int num1,num2;
	printf("Add two numbers for delenie\n");
	scanf("%d%d",&num1,&num2);
	float res_del = del(num1,num2);
	fprintf(stdout,"Delenie num1 on num2 = %f\n",res_del);
	int res_ymn;
	int i,c;
	printf("Add two number for multiply\n");
	scanf("%d%d",&i,&c);
	res_ymn = ymnozh(i,c);
	fprintf(stdout,"Ymnozhenie a * b = %d\n",res_ymn);
	f_print();
	int a, b;
	printf("Please, add two number for sum_function\n");
	scanf("%d%d",&a, &b);
	int res_sum = sum_num(a,b);
	fprintf(stdout,"Result function sum - %d\n",res_sum);
		



}

int sum_num(int a, int b)
{
	return a + b;
}

void f_print(void)
{
	printf("Hello motherfake\n");
}
	
	
int ymnozh(int i, int c)
{
	return i * c ;
}

float del(int num1,int num2)
{
	return num1 / num2;

}
