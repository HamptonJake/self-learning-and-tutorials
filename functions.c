#include<stdio.h>



// function prototypes
// Notify the compiler in advance that you'll be using the function of a certain type
void foo(void);




// Empty parameter lists
void specify_void(void){

  printf("This function has no parameters\n");
}




int plus_one(int n){
  return n+1;
}


void secret_message(void){
  printf("This is a secret message\n");
}




// Arguments are copied into the parameters



int main(void){

  int i = 10, j;

  j = plus_one(i);

  printf("i + 1 is %d\n", j);

  secret_message();

  foo();

  specify_void();


  

}


void foo(void){
  printf("This was declared after the main function\n");
}


