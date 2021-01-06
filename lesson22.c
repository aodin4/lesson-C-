#include<stdio.h>
int main()
{	
	int t;
	int i;
	for(i = 0;i<=10;i++)
	{
		if(i == 5)
		break;
	
	fprintf(stdout,"%d\n",i);
	}


/*- -CONTINUE- - - -- -------- - - - - - - - - 	- - - - - - - -	--- - -	*/
	
	for(int j = 0;j<10;j++)
	{
	        if(j == 6)
		continue;
	 fprintf(stdout,"work with continue [%d]\n",j);


	}

/*- -GOTO- - - -- -------- - - - - - - - -  - - - - - - - - --- - - */

	for(int t = 0; t<10;t++)
	{
		if(t == 7)
		goto metka;
	fprintf(stdout,"Work with metka - %d\n",t);
	}
	metka:
        printf("Bye bitch\n");
	fprintf(stdout,"Work with metka - %d\n",t);


}
