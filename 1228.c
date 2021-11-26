#include <stdio.h>
 
int main() {
    int n, k, x, tmp;
    scanf(" %d %d %d", &n, &k, &x);
 
    tmp = (k + x) % n;
    printf("%d", tmp);
 
    return 0;
}

//не совсем то что нужно 