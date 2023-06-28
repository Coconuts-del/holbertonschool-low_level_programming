#include "main.h"

/**
* rev_string - prints a string,and its reverse, followed by a new line,
*
* @s : s = valeur de s *s = address of s
* Return: (void)
*/

void rev_string(char *s)
{ 
    int i, size, size2;
    char tmp;
    
    size = 0;

    for (i = 0; (s[i] != '\0'); i++)
    { 
		size++;       
    }
    size2 = size - 1;

    for (i = 0; i < size / 2; i++) 
    {
    	tmp = s[i];
        s[i] = [size2];
        s[size2--] = tmp;  
	}         
}

