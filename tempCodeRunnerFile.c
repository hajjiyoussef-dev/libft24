#include <string.h>
int main(void)
{
    char src[] =  "wertyuiwerty" ;
    printf("%s \n" , src +3 ) ;

    char *me = ft_memcpy(src +3, src ,5 ) ;
    char *ther = memcpy(src + 3 , src , 5) ;
    printf("%s\n%s\n" , me , ther) ;

    return (0) ;
}