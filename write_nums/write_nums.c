#include <unistd.h>

int main()
{
    write(1, "0123456789\n", 12);
}