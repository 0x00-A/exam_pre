#include <unistd.h>

void    rot13(char *s)
{
    char c;
    while (*s)
    {
        if ((*s >= 'a' && *s <= 'm')||(*s >= 'A' && *s <= 'M'))
            c = *s + 13;
        else if ((*s > 'm' && *s <= 'z')||(*s > 'M' && *s <= 'Z'))
            c = *s - 13;
        else
            c = *s;
        write(1, &c, 1);
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot13(av[1]);
    write(1, "\n", 1);
    return (0);
}