#include<stdio.h>
#include<time.h>

int main(){
  printf("This is a new file\n");



  printf("\n\n\n");


  int x = 10;
  
  if(x == 10) printf("%d is 10\n", x);

  if(x==10)
    printf("%d is 10\n", x);

  // Above is the way that the code flows without using braces

  // Now this is with braces

  if(x==10){
    printf("Yes it's 10\n");
    printf("I already said it's 10\n");
    printf("WHAT DID I JUST SAY\n");
  }

  // Couple of else ifs

  int i = 95;

  if(i == 99){
    printf("%d == 99\n", i);
  } else if(i == 201){
    printf("%d == 201\n", i);
  }else{
    printf("i isn't matching up my friend\n");
  }


  // do-while is basically the same, but it does the first pass of the loop before checking the conditional
  int thenum = 5;

  do{
    printf("This number is: %d\n", thenum);
    thenum++;
  }while(thenum <= 4);



  int theothernum = 5;
  while(theothernum <= 4){
    printf("This number is: %d\n", theothernum);
    theothernum++;
  }
  
  
  

}
