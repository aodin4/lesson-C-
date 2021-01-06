#include<stdio.h>

int main()
{
	fprintf(stdout,"Выберите фильм и узнаете его описание:\n");
	fprintf(stdout,"1.Terminator\n");
	fprintf(stdout,"2.Star Wars\n");
	fprintf(stdout,"3.Avatar\n");
	fprintf(stdout,"4.Chelentano\n");
	int number;
	fscanf(stdin,"%d",&number);
	
	switch(number) {
	case 1: fprintf(stdout,"Machine vs People\n");
	break;
	case 2: fprintf(stdout,"Epic battle, where Dzedai vs Sithi\n");
	break;
	case 3: fprintf(stdout,"People colonized other planets\n");
	break;
	case 4: fprintf(stdout,"Romantic film from Italy\n");
	break;
	default:
		fprintf(stdout,"Chose film from diapozon 1-4\n");
	break;
}
fprintf(stdout,"We hope that your love our site\n");
}
