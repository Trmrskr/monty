#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	FILE *fil;
       
	if (argc != 2)
	{
		dprintf(2, "Usage: getline filename");
		return (1);
	}

	fil = fopen(argv[1], "r");
	if (fil == NULL)
		dprintf(1, "Error getting file content");
	
	while (getline(&line, &len, fil) != -1)
		dprintf(1, "%s yeye\n", line);
	free(line);
	fclose(fil);
	return (0);
}
