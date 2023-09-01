#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks string
 * @str: array string
 *
 * Return: Always a 0 on its success
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: counts the number of arguments
 * @argv: all the arguments
 *
 * Return: Always a 0 on its success
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*runs array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> string to int*/
			sum += str_to_int;
		}

		/*Condition for number including symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
