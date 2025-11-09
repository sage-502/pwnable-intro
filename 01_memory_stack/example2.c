#include<stdio.h>
#include<stdlib.h>

int gloval1 = 1; //①
int gloval2; //②

int main(){
  const int size = 10; //③
  int* local_ptr; //④
  local_ptr = (int*)malloc(size*sizeof(int)); //⑤
  free(local_ptr);
  
  printf("%d", func(2, 3)); //⑥

  return 0;
}
