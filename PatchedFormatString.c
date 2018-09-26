#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *	File:					PatchedFormatStirng.c
 *	CWE-134:				Uncontrolled Fortmat String
 *	Description:			This is an example of a Patched Format String vulnerability written in C. 
 *							This program fixes the fortmat string bug. 
 *	Patch:					1. Always specify a format string as part of program.
 *							2. if possible, make the format string a constant
 * 
*/


int targetString;

void vulnerableFunction(char *string)
{
	printf("%s", string);
	
	if(targetString){
		printf("%s This string contains a format String vulnerability. \n ");
	}
}



int main(int argc, char **argv)
{	
	if(argv[1]== NULL){
		printf ("\033[31;1m [*] ERROR!  \033[0m\n");
		printf ("\033[31;1m [*] Program needs to be passed a single string.  \033[0m\n");
		printf ("\033[31;1m [*] Example: \t./FormatString Hello \n  \033[0m\n");


		return 0;
	} else{
		vulnerableFunction(argv[1]);
	}
}
	