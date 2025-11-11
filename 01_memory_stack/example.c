#include<stdio.h>

int mult(int a, int b){
  int result = a * b;
  return result;
}

int main(){
  int num = mult(3, 5);
  printf("%d", num);
  return 0;
}
