#include <unistd.h>

void    rotone(char *s)
{
    char c;
    while (*s)
    {
        if ((*s >= 'a' && *s < 'z') || (*s >= 'A' && *s < 'Z'))
            c = *s + 1;
        else if (*s == 'z')
            c = 'a';
        else if (*s == 'Z')
            c = 'A';
        else
            c = *s;
        write(1, &c, 1);
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
    return (0);
}