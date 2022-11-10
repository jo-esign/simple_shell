#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	int p_id, p_pid;

	p_id = getpid();
	p_pid = getppid();

	printf("process ID: %d\n", p_id);
	printf("parent process ID: %d\n", p_pid);

	return (0);
}
