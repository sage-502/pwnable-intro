// filename: practice2.c
#include<stdio.h>

int sum(int x, int y){
  int result = x + y;
  return result;
}

int sub(int x, int y){
  int result = x - y;
  return result;
}

int main(){
  int a = 2, b = 3, c=4, d;
  d = sum(a, b);
  d = sub(d, c);
  printf("%d\n", d);
  return 0;
}
