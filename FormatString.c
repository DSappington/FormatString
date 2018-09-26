#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int targetString;

void vulnerableFunction(char *string)
{
	printf(string);

}



int main(int argc, char **argv)
{	
	if(argv[1]== NULL){
		printf ("\033[31;1m [*] ERROR!  \033[0m\n");
		printf ("\033[31;1m [*] Program needs to be passed a single string.  \033[0m\n");
		printf ("\033[31;1m [*] Example: \t./vulnerableProgram Hello \n  \033[0m\n");


		return 0;
	} else{
		vulnerableFunction(argv[1]);
	}
}
	