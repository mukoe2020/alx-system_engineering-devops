#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite loop to make the program hang
 * Return: always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - main functin that creates 5 zombie processes
 * Return: always 0
 */
int main(void)
{
	int h;
	pid_t zombie;

	for (h = 0; h < 5; h++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);

}

	infinite_while();
	return (0);
}
