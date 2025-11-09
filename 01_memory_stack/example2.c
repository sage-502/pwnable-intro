#include<stdio.h>
#include<stdlib.h>

int global1 = 1;
int global2;

int sum(int x, int y) {
    static int call_count = 0
    call_count++;
    return x + y;
} 

int main(){
    const int size = 10;
    int* local_ptr;
    local_ptr = (int*)malloc(size*sizeof(int));
    free(local_ptr);

    int a = 2, b = 3, c;
    c = sum(a, b);
    printf("meow ^._.^");

    return 0;
}
