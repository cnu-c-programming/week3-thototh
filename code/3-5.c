#include <stdio.h>
#include <stdarg.h>


void my_sum(char oder, int num, ...){
    va_list ap;
    va_start(ap, num);
    int total = 0;

    switch (oder){
        case 'S':
            for(int i = 0; i < num-1; i++){
                printf("%s ", va_arg(ap, char*));
            }
            printf("%s\n", va_arg(ap, char*));
            break;
        case 'C':
            for(int i = 0; i < num; i++){
                printf("%c", va_arg(ap, int));
            }
            printf("\n");
            break;
        case 'D':
            for(int i = 0; i < num; i++){
                total+=va_arg(ap, int);
            }
            printf("%d\n", total);
            break;
    }
}

int main(void){
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;

}


