#include<stdio.h>

int sum(int x, int y){
  int result = x + y;
  return result;
}

int main(){
  int a = 2, b = 3, c;
  c = sum(a, b);
  printf("%d\n", c);
  return 0;
}
