#include <stdio.h>

int main(){
    int a;
    double b;
    double c;
    printf("&a: %u(%lu byte(s)) \n", &a, sizeof(a));
    printf("&b: %u(%lu byte(s)) \n", &b, sizeof(b));
    printf("&c: %u(%lu byte(s)) \n", &c, sizeof(c));
    return 0;
}