#include <stdio.h>

int f(int n){
    printf("etapa: %i\n", n);
    if( n>1){
        return f(n-1)+f(n-2);
    } if(n == 1){
        return 1;
    }  if(n == 0){
        return 0;
    }
}
int main(){
    int n;
    printf("Valor de n:");
    scanf("%i", &n);
    printf("%d", f(n));
    return 0;
}