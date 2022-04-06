#include <stdio.h>
#include "main.h"

/**
 * main - Prints name of program.
 * @argc: Number of arguments passed
 * @argv: Array of pointers to string arguments passed.
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("%s\n", argv[0]);
	}	
	return(0);
}	
