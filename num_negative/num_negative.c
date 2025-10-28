#include <unistd.h>

void num_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

int main()
{
    num_negative(-5);
    num_negative(6);
}