#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char line[200] = "          This   is              a string  to   be     tokenized";
	char *token = NULL;
	token = strtok(line, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
