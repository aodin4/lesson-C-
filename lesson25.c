#include<stdio.h>

void recur(int number);

int main()
{	
	int number;
	fprintf(stdout,"Add number for recurtion: ");
	fscanf(stdin,"%d",&number);
	recur(number);
	puts("Recurtion all!\n");
}


void recur(int number)
{
	fprintf(stdout,"%d\n",number);
	--number;
	if(number<0)
		return;
	else
		recur(number);
}
