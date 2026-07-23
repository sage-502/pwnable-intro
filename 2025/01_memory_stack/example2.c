#include<stdio.h> //헤더파일은 메모리에 없음. 전처리기에 의해 치환.
#include<stdlib.h>

int global1 = 1; //초기화된 전역변수 : .data 세그먼트
int global2; //초기화 안된 전역변수 : .bss 

int sum(int x, int y) { //x, y는 함수 인자 : 스택
    static int call_count = 0; //정적 변수 : .data 세그먼트
    call_count++;
    return x + y;
} 

int main(){
    const int size = 10; //지역 const 변수 : 스택
    int* local_ptr; //지역 포인터 변수 : 스택
    local_ptr = (int*)malloc(size*sizeof(int)); //malloc으로 할당한 메모리 : 힙
    free(local_ptr);

    int a = 2, b = 3, c; //지역변수 a, b, c : 스택
    c = sum(a, b);
    printf("meow ^._.^"); //"meow ^._.^"는 문자열 상수 : .rodata

    return 0;
}
