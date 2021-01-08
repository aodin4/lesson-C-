// work with fucntion - strstr(), strcmp
#include<stdio.h>
#include<string.h>
int function1();
int main()
{
	char str[] = "Time always be good";
	char sub[] = "be";
	
	if(strstr(str,sub) == NULL)
	{
		fprintf(stdout,"'%s' Time dont research in string '%s'\n",sub,str);
	}
	else
	{
		fprintf(stdout,"'%s' was find in string '%s' on adress %p\n",sub,str,strstr(str,sub)); 
	fprintf(stdout,"'%s' be on string '%s' on index %d",sub, str,strstr(str, sub) - str);
	}
	function1();
	
}



int function1()
{
	char password[] = "pass";
	char ps[20];
	do
	{
fprintf(stdout,"Add password: ");
scanf("%s",ps);
	} while(strcmp(password, ps) != 0);
	printf("Password true\n");
	return 0;


}


