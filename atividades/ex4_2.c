#include <stdio.h>

void modificador(int n){
    n = 5;
    int *p;
p = &n;

}
*p = 2

int main(){
    int n = 3;
    modificador(n);
    printf("valor de n:%d\n", n);
}