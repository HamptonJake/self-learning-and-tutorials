#include<stdio.h>



// An example of passing pointers as arguments
void increment(int *p){
  *p = *p + 1;

}





// memory and variables





void main(){


  // determine how many bytes of memory a certain type uses

  printf("An int uses %zu bytes of memory\n", sizeof(int));
  printf("A double uses %zu bytes of memory\n", sizeof(float));


  int x = 10;
  int y = 100;

  float a = 1.2;
  float b = 25.1;
  
  printf("An int expression uses %zu\n", sizeof(y-x));
  printf("A float expression uses %zu\n", sizeof(b-a));



  // how is memory stored?


  /* each byte of memory is identified by an integer
     when you have a data type such as an int that uses more than one byte of memory, the bytes that make up the data are always adjacent to one another in memory
     sometimes these are in order, but not always
  */


  // what is a pointer?

  // a pointer is a variable that holds an address
  // just like an int variable can hold the value 12, a pointer variable can hold the address of data

  // used interchangeably when referring to pointers: index into memory, address, location


  int i = 10;
  printf("The value of i is %d\n", i);
  printf("The address of i is %p\n", (void*)&i);

  // pointer variable holds the address






  // Testing the increment funtion
  int eye = 10;
  int *pie = &eye;


  printf("This is the value of i: %d\n", eye);
  printf("This is the value of a derefernced i: %d\n", *pie);


  increment(pie);

  printf("This is the value of i: %d\n", eye);
  



  // The null pointer

  int *j;

  j = NULL;

  // DO NOT REFERENCE A NULL POINTER
  // *j = 12;


  int abc;
  int *p;

  // Same as int abc, *p;



  // sizeof and Pointers
  // sizeof is for size of type of expression not for variables in the expression
  int *gf;

  printf("%zu\n", sizeof(int));
  printf("%zu\n", sizeof(gf));
  printf("%zu\n", sizeof(*gf));

  


  
}
