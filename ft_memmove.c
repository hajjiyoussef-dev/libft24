#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dest, void *str , int size)
{
    unsigned char  *p1 = (unsigned char *) dest;
    unsigned char *p2 = (unsigned char *) str; 
    int i = 0; 
    int  j ;
    
    if (p1 > p2 && p1 < p2 + size)
    {
        while ( j < (size -1))
        {
            p1[i] = p2[i];
            j--;
         }
    }else
    {
        while ( i < size)
    {
        p1[i] = p2[i];
        i++;
    }
    }
    
    

    

    return (dest);
    
} 


int main() {
    char str[] = "Hello, World!";
    int i = 0;
    
    // // Overlapping regions, moving a part of the string within itself
    // memmove(str + 7, str, 6);
    
    // printf("%s\n", str);  // Output will be: "Hello, Hello!"
    
    // return 0;

    while ((str + 7)[i])
    {
         printf("%c", (str + 7)[i]);
        i++;
    }

}