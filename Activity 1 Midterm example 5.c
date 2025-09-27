#include <stdio.h>
  int main() {
      
    int choice;
      
    do {
          printf("Enter choice (1-100): ");
          scanf("%d", &choice);
          if (choice < 1 || choice > 100) {
              printf("Try again.\n");
          }
      } while (choice < 1 || choice > 100);  
      printf("Nice choice!: %d\n", choice);  
      
      return 0;
  }
