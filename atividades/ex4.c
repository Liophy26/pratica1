#include <stdio.h>

void f1(){
    printf("***");

}
void f2(){
    printf("*****");
}
void f3(){
    printf("*******");
}

int main(){
    f1();
    f2();
    f3();
    f2();
    f1();
    return 0;
}