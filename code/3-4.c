#include <stdio.h>
#include <stdarg.h>


int max_of(int num, ...){
    va_list ap;
    va_start(ap, num);
    int front = va_arg(ap, int);
    for(int i = 0; i < num-1; i++){
        int next = va_arg(ap, int);
        if(next > front) front = next;
    }
    va_end(ap);
    return front;
}

int main(void){
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;

}


