#include <stdio.h>
#include <stdlib.h>
typedef enum boolean {FALSE,TRUE} Boolean;

void Error(char *);

void Warning(char *);

/* Error: report program error.
	Pre: s points to the message to be printed. 
	Post: The function prints the message and terminates the program */
void Error(char *s)
{
	fprintf(stderr, "%s\n", s);
	exit(1);
}

