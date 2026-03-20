#include <stdio.h>

int call_count(){
    static int count;
    return ++count;
}

int main(void){
    printf("%d\n", call_count());
    printf("%d\n", call_count());
    printf("%d\n", call_count());

    return 0;

}


