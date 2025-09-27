#include <stdio.h>
 
int main() {
     
    int num;
      do {
          printf("Enter a positive number: ");
          scanf("%d", &num);
      } while (num <= 0);
      printf("Valid number: %d\n", num);        
      
      return 0;
  }
