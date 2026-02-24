#include <stdlib.h>
#include <stdio.h>

int ft_nlen(int nb)
{
    long n;
    int i;

    i = 0;
    n = (long) nb;
    if (n < 0)
    {
        i++;
        n = -n;
    }
    while (n > 9)
    {
        n = n / 10;
        i++;
    }
    i++;
    return (i);
}

char    *ft_itoa(int nb)
{
    long    n;
    int     i;
    char    *strNumber;

    i = ft_nlen(nb);
    strNumber = malloc((i +1) * sizeof(char));
    if (!strNumber)
        return (NULL);
    n = (long) nb;
    strNumber[i] = '\0';
    i--;
    if (n < 0)
    {
        strNumber[0] = '-';
        n = -n;
        while (i >= 1)
        {
            strNumber[i] = n % 10 + 48;
            n = n / 10;
            i--;
        }
    }
    else
    {
        while (i >= 0)
        {
            strNumber[i] = n % 10 + 48;
            n = n / 10;
            i--;
        }
    }
    return (strNumber);
}

int main(void)
{
    printf("%s\n", ft_itoa(-222555));
    printf("%s\n", ft_itoa(-2147483648));
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-8));
    printf("%s\n", ft_itoa(48));
    return (0);
}