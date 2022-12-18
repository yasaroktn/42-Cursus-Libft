#include "libft.h"

 char *ft_strrchr(const char *s, int c)
 {
    int len;

    len = ft_strlen(s);
    while(len >= 0)
    {
        if(s[len] == (char)c)
            return((char *)&s[len]);
        len--;
    }
    return(NULL);
 }
/*
 int main()
{
	const char f[] = "yasar.furkan.enes";
	int c = 46;

    printf("%p" , ft_strrchr(f, c));
}  */