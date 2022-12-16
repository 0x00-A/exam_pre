#include <unistd.h>

void    rev_print(char *s)
{
    int len = 0;
    while (*s)
    {
        s++;
        len++;
    }
    s--;
    while (len)
    {
        write (1, s, 1);
        s--;
        len--;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_print(av[1]);
    write(1, "\n", 1);
    return (0);
}