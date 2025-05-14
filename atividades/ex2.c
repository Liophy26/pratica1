#include <stdio.h>

void modificador(int *p){
    int n;
    n = 5;
    *p = n;
    
}




int main(){
    
    int n = 3;
    int *p = &n;
    modificador(p);
    printf("valor de n:%d\n", n);
}
