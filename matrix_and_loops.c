

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	int n = 0;
	printf("Enter matrix size: ");
	scanf("%d", &n); //Note that we pass a pointer to n, not n itself.
	printf("\n");	

	int **M = malloc(sizeof(int *) * n); //Allocating space for the row-pointers
	M[0] = malloc(sizeof(int) * n * n); //Allocating space for the actual numbers
	int *V = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		V[i] = i;
		M[i] = M[0] + n * i;	
		for (int j = 0; j < n; j++) {
			M[i][j] = i*j;
		}
	}
	
        for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d, ", M[i][j]);
		}
		printf("\n");
	}
}
