
/* printf is here. 
   Angle brackets means it's not in same directory */
#include <stdio.h>

/* Arrays don't know their length, 
   so we need the argument count
   as well as the argument vector. */
int main(int argc, char **argv)
{
	printf("Hello World!\n");
        printf("num args: %d\n", argc);	
	printf("first arg: %s\n", argv[1]);
        int var_1 = 42;
	float var_2 = 3.14159265359;
	/* %d and %f are placeholders for the variables
	   the .2 indicates two decimal places are shown */
	printf("Some variables: %d, %.2f \n", var_1, var_2);

	/* Tell the caller that everything is fine */
	return 0;
}
