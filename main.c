 
#include "libft.h"
// int main(void)
//     {
//         char src[] =  "youssef hajjiii" ; 
//         printf("%s \n" , src) ;
        
//         ft_memcpy(src + 8, src , (7 * (sizeof(char)))) ; 
       
//         printf("%s " , src) ; 

//         return (0) ;
//     }



// int main(void)
// {
//     char src[] = "youssef hajjiii" ;

//    // char dest[20] ;

//     ft_memmove(src + 8, src, 7);

//     printf("%s", src);

//     return (0);

    
    
// }
int main(void)
{
    char src[] = "youssef hajji" ;
    char dest[20] ;
    int res ;
    res = ft_strlcpy(dest, src, 8) ;

    printf("%s", dest) ; 
    printf("%d", res) ;
    return (0);
}




