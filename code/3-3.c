#include <stdio.h>
#include <stdarg.h>


int average(int num, ...){
    va_list ap;
    va_start(ap, num);
    int total = 0;
    for(int i = 0; i < num; i++){
        total += va_arg(ap, int);
    }
    va_end(ap);
    return total/num;
}

int main(void){
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));

    return 0;

}


