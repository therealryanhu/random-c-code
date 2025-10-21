#include <stdio.h>

int main(int argc, char *argv[])
{
	while (--argc > 0)
		printf((argc > 1) ? "%s " : "%s",
		       *++argv); //++argv because argv[0] = "echo"
	printf("\n");
	return 0;
}
