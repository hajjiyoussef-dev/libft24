 
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




// int main()
// {

//     char src[] = "youssefhhajji" ;
//     char dest[20] ;
//     int res ;
//     res = ft_strlcpy(dest, src, 8) ;

//     printf("%s\n", dest) ; 
//     printf("%d \n", res) ;

//     int j2 = 0;
//     char str[] = "sdfghjklsdfghjkdfghjk\n";
//     char ch;

//     while (str[j2]) {
//         ch = str[j2];
//         putchar(ft_toupper(ch));
//         //  printf("%s\n" , ft_toupper(ch));
//         j2++;
//     }

//      int j = 0;
//     char str2[] = "GEEKFORGEEKS\n";
//     char ch2;

//     while (str2[j]) {
//         ch2 = str2[j];
//         putchar(ft_tolower(ch2));
//         // printf("%s\n" , ft_tolower(ch2));
//         j++;
//     }


//     char s[] = "youssef hajji" ;
//     char c = 'o' ;
     
//     printf("%s\n" , ft_strchr(s,c));
//     printf("%s\n" , ft_strrchr(s,'s'));


//     char s1[] = "abcsd";
//     char s2[] = "abcsf";
    
//   int  res2 = ft_strncmp(s1,s2,5);

//     printf("%d\n" , res2) ;

//     char s3[] = "youssef hajji hamza hrami" ;
//     char c3 = ' ' ;
//     int  n3 = 8 ;
//     printf("%s \n", ft_memchr(s3,c3,n3)) ;


//     char str11[] = "youssefd";
//     char str22[] = "youssefcahv" ;
//     size_t n = 9;
    
//     printf("%d \n", ft_memcmp(str11,str22,n));


//     char s16[] = "youssef hajji hajji" ;
//     char s26[] = "youssef";

//     char *res26 ;
//     res26 = ft_strnstr(s16,s26, 100); 
//     printf("%s \n", res26);

//     int *arr = (int *) ft_calloc(10, sizeof(int));
    
//     if (arr)
//     {
//         for (size_t i = 0; i < 10; i++)
//         {
//         printf("%d \n",arr[i] );
//         }
        
        
//     }
//     free(arr);


//     char s12345[] = "hello youssef hajjiqwertyuiopqwertyuiopqwertyuiopasdfghjklasdfghjklasdfghjklqwertyuiopasdfghjkl" ;
//     char *res2345 = ft_strdup(s12345);
//     printf(":test;%s:\n",res2345);

//     char dest2323[] = "hajjffffff";
//     const char src2323[] = "hello" ;
//     int res2323 ;
//     res2323 = ft_strlcat(dest2323, src2323 , 10);
    
//     printf("%d \n" , res2323);
//     printf("%s" , dest2323);

    
//     return (0);



   
// }

// #include <stdio.h>
// int main() {
//    printf("%ld\n", STDC_VERSION);
//    return 0;
// }


// int main(void)
// {
//     char s[] = " youssef youssef youssef " ;
//     char **s1 = ft_split(s,' ') ;
//     int i = 0;
//     while (s1[i])
//     {
//         printf("%s\n", s1[i]);
//         free(s1[i]);
//         i++;
//     }
//     free(s1);
//     return (0);
// }


// }