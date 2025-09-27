#include <stdio.h>
  int main() {
      char input;
      int f = 0;  
      do {
          f++;  
          printf("Enter letter (f to stop, attempt %d): ", f);
          scanf(" %c", &input);
          if (input != 'f') {
              printf("Got %c, continue...\n", input);
          }
      } while (input != 'f');  
      printf("Stopped at 'f' after %d attempts.\n", f);
     
      return 0;
  }
