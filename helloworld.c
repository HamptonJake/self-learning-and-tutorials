#include <stdio.h>
#include <stdbool.h> //this is required for my version of c (what even is my version?)





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



  
  
  
}

