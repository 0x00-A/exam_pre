#include <unistd.h>

int ft_strlen(char *s)
{
    int len = 0;
    while (*s)
    {
        s++;
        len++;
    }
    return (len);
}

int ft_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (1);
        s++;
    }
    return (0);
}

void    search_and_replace(char *s, char a, char b)
{
    while (*s)
    {
        if (*s == a)
            write(1, &b, 1);
        else
            write(1, s, 1);
        s++;
    }
}

void    ft_putstr(char *s)
{
    while (*s)
    {
        write(1, s, 1);
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
    {
        if (ft_strchr(av[1], av[2][0]))
            search_and_replace(av[1], av[2][0], av[3][0]);
        else
            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}