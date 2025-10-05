#include <stdio.h>
#include <stdlib.h>

int 
main()
{
	char	*correct = malloc(500001 * sizeof(char));
	char	*wrong = malloc(500001 * sizeof(char));

	if (correct == NULL) {
		printf("memory allocation of input 1 failed\n");
		return 1;
	}

	if (wrong == NULL) {
		printf("memory allocation of input 2 failed\n");
		return 1;
	}



	



	free (correct);
	free (wrong);
	correct = NULL;
	wrong = NULL;
}
