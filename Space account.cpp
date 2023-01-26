%{
#include<stdio.h>
int lc=0, sc=0,  ch=0; 
%}

%%
\n lc++; 
([ ])+ sc++; 
. ch++;	 
%%

int main()
{
	FILE *f; 
	char file[10]; 
	printf("Enter File Name : "); 
	scanf("%s",file); 
	f = fopen(file,"r"); 
	yyin = f;
	yylex();
	printf("\nNo. of lines=%d", lc);
	printf("\nNo. of spaces=%d", sc);
	printf("\nNo. of other characters=%d", ch);
	
}
int yywrap()
{
}