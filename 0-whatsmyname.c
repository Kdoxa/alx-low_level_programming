#include <stdio.h>
/**
 * main -> this is a function to print its name
 * @argc: argument parameter
 * @argv: an array of a command listed
 * Return: 0 
 **/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
