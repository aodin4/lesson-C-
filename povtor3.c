#include<stdio.h>
#define SIZE 50
void string(char str[]);
int cube(int x);

int main()
{	
	int x;
	int res_cube;

	printf("Add numberfor cube-func\n");
	scanf("%d\n",&x);
	res_cube = cube(x);

	fprintf(stdout, "Result cube = %d\n",res_cube);
	char str[SIZE]={"I am a function"};
	string(str);
	

}






void string(char str[])
{
	fprintf(stdout,"Func string - %s\n",str);
}

int cube(int x)
{
	return (x * x) * x;


}
