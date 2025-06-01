#include <stdio.h>

int func1(unsigned int x){

if(x==0){
    return 1;
}else if(x>=1){
    return 2*x+func1(x-1);
}
}

int main(){
    int x;
printf("valor x:");
scanf("%i", &x);
printf("%d", func1(x));


    return 0;
}