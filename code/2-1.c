#include <stdio.h>

void increment(int x){
    ++x;
    printf("%d\n", x);
}

int main(void){
    int x = 10;
    
    printf("%d\n", x);
    increment(x);
    printf("%d\n", x);

    return 0;

}


