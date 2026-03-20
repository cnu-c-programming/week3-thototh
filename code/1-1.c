#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
int div(int a, int b){
    return a/b;
}
int main(void){
    int a = 10, b = 5;
    printf("10 + 5 = %d\n", add(a, b));
    printf("10 - 5 = %d\n", sub(a, b));
    printf("10 * 5 = %d\n", mul(a, b));
    printf("10 / 5 = %d\n", div(a, b));
    
    return 0;
}
