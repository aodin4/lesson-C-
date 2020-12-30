#include<stdio.h>



int main() 
{
	int c,nt, pred, sl;
	nt = 0;
	pred = 0;
	sl = 0;

	while(( c = getchar()) != '1') {
	      if(c == ' ') {
		nt = '\t';
		putchar(nt);
	      if(c == '\r') {
	        pred = '\b';
		putchar(pred);
	      if(c == '\\') {
		sl = '\n';
		putchar(sl); 

		
                }	

            }  

       }

   }
	   
		return 0;
}




