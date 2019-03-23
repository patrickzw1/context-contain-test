#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main( int argc, char* argv[] )
{
	char *str1, *str2;
	if (argc <= 2)
	{
		fprintf (stderr, "Error, need at least one more argv\n");
		return 0;
	}
	str1 = argv[1];
	str2 = argv[2];

	if (strstr(str1, str2))
	{
		printf ("true\n");
	}else {
		printf ("false\n");
	}
	return 0;
}
