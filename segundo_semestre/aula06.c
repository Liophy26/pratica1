#include <stdio.h>

void linha (int num, char ch){
    int i;
    for(i = 1; i<= num; i++)
    printf("%c", ch);
    printf("\n");
}

//passagem para valor (copia do voalor passado)
void func1(int param1, int param2){
    param1 = 3;
    printf("func1 : : param: %d, &param1: %p ", param1, &param1);
}

//passagem param referencia (referencia do var passada)
/*void func2(int &param1, int &param2){
    param1 = 3;
    printf("func1 : : param: %d, &param1: %p ", param1, &param1);
}
*/
int main(){

    int x = 5, y = 7;
    printf("x: %d, &x: %p\n", &x);
    func1(x,y);
    printf("x: %d, &x: %p\n", &x);
    func2(x,y);
    printf("x: %d, &x: %p\n", &x);

    return 0;
}