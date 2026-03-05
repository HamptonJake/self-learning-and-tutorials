#include <stdio.h>
#include <stdbool.h> //this is required for my version of c (what even is my version?)
#include <time.h> //for random





int main(void){

  int te;
  int be;

  for (te=0, be=10; te < 100; te++, be++){
    printf("%d, %d\n", te, be);
  }


  

  int i; //signed integers
  float f; //signed floating point
  char *s = "char pointer\n"; //char * ("char pointer") is the string type


  i = 3;
  f = 3.14;

  printf("%si=%d and f=%f\n", s, i, f);

  printf("Hello World!\n");



  printf("Testing boolean types\n");

  int x = 1;

  if (x){
    printf("The varible: %d is non-zero\n", x);
  }

  int y = true;

  if(y){
    printf("brother, y is true\n");
  }

  


  printf("Here come the ternary operators\n");

  int t = 12;
  int r = 35;

  printf("t = %d, r = %d\n", t, r);

  t += r > 40? 0 : 5;

  printf("holdup, an operation just completed\n");

  printf("t = %d\n", t);


  int wh_count = 0;

  while(wh_count < 3){
    printf("oooooohh scawy, scawy things momma\n");
    wh_count++;
  }


  // this is required for the random function to generate different numbers each time this program is run
  srand(time(NULL));
  
  // Conditional operators
  int num1 = rand()%30;
  int num2 = rand()%30;


  if(num1 < num2){
    printf("%d is less than %d\n", num1, num2);
  }else{
      printf("%d is greater than %d\n", num1, num2);
    }




  printf("*******Size of operator*******\n");
  printf("This is only for the size of the type of expression, not the size of the actual expression");
  int abra = 12029132;
  // zu is the format for type size_t
  printf("This is the size of the varibale %zu\n", sizeof(abra));
  printf("Size of the expression (89.5/25.2) = %zu\n", sizeof(89.5/25.2));


  printf("%zu\n", sizeof(int));
  printf("%zu\n", sizeof(char));


  
  
}

