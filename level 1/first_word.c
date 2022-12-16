#include <unistd.h>

void    first_word(char *s)
{
    while (*s && ((*s >= 9 && *s <= 13) || *s == 32))
        s++;
    while (*s)
    {
        if ((*s >= 9 && *s <= 13) || *s == 32)
        write(1, s, 1);
        s++;
    }
}

int main(int ac, char** av)
{
    if (ac == 2)
    {
        first_word(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}