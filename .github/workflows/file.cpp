#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int *p = &a;
    int *q = &b;
    *p = 70;
    *q = *p; 
    p = q;
    *p = 30;
    printf("%d %d\n", a, b);
    return 0;
}
