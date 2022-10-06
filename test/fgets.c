#include <stdio.h>

int main(int argc, char **argv)
{
	char line[255];
	int len = 0;
	FILE *fil = fopen(argv[1], "r");
	if (fil == NULL)
		dprintf(1, "Error getting file content");

	while (fgets(line, 255, fil))
		dprintf(1, "%s", line);
	return (0);
}
