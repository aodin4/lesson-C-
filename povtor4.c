#include<stdio.h>

void recur(int number);

int main()
{
	int number;
	printf("Recur function\n");
	fscanf(stdin,"%d",&number);
	recur(number);
	puts("All recur\n");

}

void recur(int number)
{
	fprintf(stdout,"%d\n",number);
	--number;
	{
		if(number < 0)
			return;
		else
			recur(number);	
	}


}
