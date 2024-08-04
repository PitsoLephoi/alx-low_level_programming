#include "main.h"

void swap_int(int *a, int *b)
{
	/* makes use of three variables to switch values */
    
	int temp = *a;
	
	*a = *b;
	
	*b = temp;
}

