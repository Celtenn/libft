#include <stdio.h>
#include "libft.h"
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *tey = (char *)dst;
    char *hey = (char *)src;
    size_t i = 0;
    
    if(dst == 0 && src == 0)
        return(0);
    if (dst > src)
    {
      while(0 < len)
      {
        tey[len -1] = hey[len -1];
        len--;
      }
    }
    else
    {
      while(i < len)
      {
          tey[i] = hey[i];
          i++;
      }
    }
      return(dst);
}
