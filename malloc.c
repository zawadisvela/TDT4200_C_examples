
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int *arr = malloc(sizeof(int) * 10000);
	arr[9800] = 42;
	free(arr);
	printf("What is life? %d\n", arr[9800]);
	printf("Pointer arithmetic is fun. %d\n", *(arr + 9800));
        return 0;
}

