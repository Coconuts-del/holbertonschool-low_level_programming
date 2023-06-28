#include <stdio.h>
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
    }
    size = i;
    printf("taille = %d\n", size); 
    size2 = size - 1;
    printf("taille = %d\n", size2); 

    for (i = 0; i < size / 2; i++) 
    {
    	tmp = s[i];
        s[i] = s[size2];
    printf("t= %c\n", s[i]); 
        s[size2--] = tmp;  
    printf("t= %c\n",tmp ); 
	}         
}

