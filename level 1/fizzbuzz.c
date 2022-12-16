#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    putnbr(int n)
{
    if (n < 10)
        putchar(n + 48);
    else
    {
        putnbr(n/10);
        putnbr(n%10);
    }
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i%3 == 0 && i%5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i%3 == 0)
            write(1, "fizz\n", 5);
        else if (i%5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
}