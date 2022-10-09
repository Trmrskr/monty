#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char line[200];
	FILE *fil = fopen(argv[1], "r");
	if (fil == NULL)
	{
		fprintf(stderr, "unable to open file");
		exit(EXIT_FAILURE);
	}
	fgets(line, 200, fil);
	char *token = NULL;
	token = strtok(line, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	fclose(fil);
	return (0);
}
