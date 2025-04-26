#include <stdio.h>

typedef struct rgb_char {
    char r;
    char g;
    char b;
    char a;
} RGBAChar;
typedef union pixel{
    int pixel;
    struct rgb_char canais; // == RGBAChar;
} UPixel;

int main(){
    //Write C code here
    UPixel p1; //Union pixel p2;
    p1.pixel = 0xAABBCCDD;
    printf("(int)pixel: %X\n", p1 pixel);
    printf("R: %X\n", p1.canais.r);
    printf("G: %X\n", p1.canais.g);
    printf("B: %X\n", p1.canais.b);
    printf("A: %X\n", p1.canais.a);
    p1.pixel = 268;
    printf("(int)pixel: %X\n", p1 pixel);
    printf("R: %X\n", p1.canais.r);
    printf("G: %X\n", p1.canais.g);
    printf("B: %X\n", p1.canais.b);
    printf("A: %X\n", p1.canais.a);
    return 0;
}