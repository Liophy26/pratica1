#include <stdio.h>

int main(){
    int x = 15;
    x = 0x0000000F;
    // 00|00|00|0F
    printf("x: %d, sizeof(int): %ld\n", x, sizeof(int));
    x = 0x7FFFFFFF;
    // [0]111 1111 | 1111 1111 | 1111 1111 | 1111 1111
    //      7    F      F    F      F    F      F    F
    //                                              +1
    // [1]000 0000 | 0000 0000 | 0000 0000 | 0000 0000
    //      8    0      0    0      0    0      0    0
    printf("x: %d, sizeof(int): %ld\n", x, sizeof(int));
    X = X + 1;
    x = 0xFFFFFFFF;
    printf("x: %d, sizeof(int): %ld\n", x, sizeof(int));

    return 0;
}