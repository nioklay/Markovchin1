#include <stdio.h>
#include <conio.h>

int main(){
    char a, b, c, d;
    unsigned int pack;
    scanf("%c,%c,%c,%c",&a,&b,&c,&d);   

    pack = (((((a << 8) | b) << 8 ) | c) << 8) | d;
    printf(" n1 = %hu",pack);

}