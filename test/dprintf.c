#include <stdio.h>
#include <unistd.h>

int main(void)
{
	dprintf(STDOUT_FILENO, "1 is the descriptor for standard output");
	dprintf(STDERR_FILENO, "This is an error message");
	return (0);
}
