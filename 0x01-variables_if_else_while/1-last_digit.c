#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry function
 *
 * Description: This program will assign a random number to the
 *		variable n each time it is executed. Complete
 *		the source code in order to print the last
 *		digit of the number stored in the variable n.
 *
 * Return: the function return 0 if succed
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*here star the code*/
	lastDigit = n % 10; /*gets the last digit by calculating the modulo of 10 of
			     *					the number
			     */
	if (lastDigit > 5)
	{
		printf("the last digit of %i is %i and it is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("the last digit of %i is %i and it is 0\n",n, lastDigit);
	}
	else
	{
		printf("the last digit of %i is %i and it is less than 5\n",n, lastDigit),
	}

	return (0);
}
