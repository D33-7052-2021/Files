//programto calculate cube if numbers and loop using do while loop
/*
Name:Anthony Mutuku
Reg no:D33-7052-2021
Date:11/3/2025
*/
#include<stdio.h>
int main() {
  int i=1, n;
  // prompt user for input
  printf("Enter number of times (n): ");
  scanf("%d",&n);
  //loop to print numbers and their cubes
  do {
       printf("the number is: %d and the cube of the %d: %d/n", i, i, i*i);
       i++; //increment i
  } while (i<= n); //condition checked after execution
      
  return 0;
}
    