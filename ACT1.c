#include <stdio.h>

int main()
{
char Username[100]; char Food[100]; char Place[100]; char Phone[100]; char Email[100];
char Gender[100]; char Password[100]; char Lastname[100]; char Nationality[100];
int Age;

printf("Enter your Username: ");
scanf("%s", Username);

printf("Enter your Password: ");
scanf("%s", Password);

printf("Enter your Age:");
scanf("%d", &Age);

printf("What is your sport:");
scanf("%s", Food);

printf("favorite Place?:");
scanf("%s", Place);

printf("Enter your Phone number:");
scanf("%s", Phone);

printf("Email Address:");
scanf("%s", Email);

printf("Gender: ");
scanf("%s", Gender);

printf("Last name: ");
scanf("%s", Lastname);

printf("Nationality: ");
scanf("%s", Nationality);

printf("==================================\n");
printf(" USER INFORMATION \n");
printf("==================================\n");






printf("Username: %s\n", Username);
printf("Password: %s\n", Password);
printf("Age: %d\n", Age);
printf("Favorite food: %s\n", Food);
printf("Favorite place: %s\n", Place);
printf("Phone number: %s\n", Phone);
printf("Email address: %s\n", Email);
printf("Gender: %s\n", Gender);
printf("Lastname: %s\n", Lastname);
printf("Nationality: %s\n", Nationality);





return 0;
}