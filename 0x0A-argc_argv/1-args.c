#include "main.h"

/**
 * main - Prints number of arguments passed to it.
 *
 * @argc: Number of arguements passed.
 * @argv: Array of pointers to string arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc > 0)
		printf("*%d\n", argc - 1);

	return (0);
}	
