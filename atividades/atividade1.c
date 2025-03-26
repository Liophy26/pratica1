#include<stdio.h>

int main(){

    char s[] = "Maria"
    *ptr = s;

    /*Usando s | Usando ptr | Valor
    s[2],*(s+2)|*(ptr+2);ptr[2]|r      
    &s[0], s   |(ptr+0);&ptr[0]|1000
    &s[1],(s+1)|(ptr+1);&ptr[1|1001
&s[4000],(s+400)|(ptr+4000);&ptr[4000], &ptr|5000 */
    return 0;
}