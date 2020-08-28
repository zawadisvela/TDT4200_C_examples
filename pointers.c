#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int *arr;
	printf("address of arr before allocation: 0x%x\n", (unsigned int) arr);
	arr = malloc(sizeof(int) * 40);
	int static_array[40];
	printf("address of arr before free: 0x%x\n", (unsigned int) arr);
	arr[0] = 0;
	free(arr);
	printf("address of arr after free: 0x%x\n", (unsigned int) arr);
	arr[0] = 0;
	
	return 0;
}
