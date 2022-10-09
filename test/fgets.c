#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char line[255];
	int len = 0;
	
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: fgets filename\n");
		exit(EXIT_FAILURE);
	}
	FILE *fil = fopen(argv[1], "r");
	if (fil == NULL)
	{
		dprintf(1, "Error getting file content");
		exit(EXIT_FAILURE);
	}

	while (fgets(line, 255, fil))
		dprintf(1, "%s", line);
	fclose(fil);
	return (0);
}
