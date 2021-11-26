#include <stdio.h>
#include <conio.h>

int main() {

uint32_t foo (uint32_t num, uint32_t n)
{
    if (n == 32)
        return num;
    else if (n > 32)
        n %= 32;
 
    num = (num << n) | (num >> (32 - n));
 
    return num;
}

}