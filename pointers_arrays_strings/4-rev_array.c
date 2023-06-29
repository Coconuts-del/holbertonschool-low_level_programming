#include "main.h"

/**
* _reverse_array - reverses the content of an array of integers 
*
* @a   :  an array of integer
* @n   :  number of elements of the array
* Return: (void)
*/

void reverse_array(int *a, int n)
{ int *ptr1,*ptr2;
  int tmp; 
  ptr1 = &a[0];  
  ptr2 = &(a[n - 1]);
  for ( ; ptr1 < ptr2; ptr1++, ptr2--)
  {  
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
  }  
}  
