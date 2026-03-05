#include<stdio.h>



int plus_one(int n){
  return n+1;
}


// Arguments are copied into the parameters



int main(void){

  int i = 10, j;

  j = plus_one(i);

  printf("i + 1 is %d\n", j);




}
