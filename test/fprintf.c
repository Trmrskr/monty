#include <stdio.h>
#include <unistd.h>

int main(void)
{
	fprintf(stdout, "1 is the descriptor for standard output\n");
	fprintf(stderr, "This is an error message\n");
	return (0);
}
