#include<stdio.h>
#include<stdlib.h>

int gloval1 = 1;
int gloval2;

int sum(int x, int y) {
    return x + y;
} 

int main(){
    const int size = 10;
    int* local_ptr;
    local_ptr = (int*)malloc(size*sizeof(int));
    free(local_ptr);

    int a = 2, b = 3, c;
    c = func(a, b);
    printf("meow ^._.^");

    return 0;
}
