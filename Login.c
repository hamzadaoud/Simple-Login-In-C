#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
// Declare variables
double a = 3.14 , b = 2.72 , c = 0;
char username[50],password[50];

// Prompt the user to enter their username and password
printf("Enter your username: ");
scanf("%s", username);
printf("Enter your password: ");
scanf("%s", password);

// Check if the entered credentials are valid , this is just a sipmle app the default credentials are admin / admin you can change them if you want.
if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
{
    printf("Welcome! You have successfully logged in.\n");
    // Perform mathematical operations
c = pow(a, b);
printf("The result of raising a to the power of b is: %f\n", c);

c = sqrt(a);
printf("The square root of a is: %f\n", c);

c = sin(a);
printf("The sine of a is: %f\n", c);

c = log(a);
printf("The natural logarithm of a is: %f\n", c);
}
else
{
    printf("Sorry, the entered credentials are invalid.\n");
}

return 0;


}
