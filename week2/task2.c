#include <stdio.h>

int main() {
    char correctID = '1';        
    char correctPassword = 'a';
    char enteredID;
    char enteredPassword;
    int attempts = 0;
    printf("Enter your ID please: ");
    scanf(" %c", &enteredID);
    if (enteredID == correctID) {
        while (attempts < 3) {
            printf("Enter your password (single character): ");
            scanf(" %c", &enteredPassword);
            if (enteredPassword == correctPassword) {
                printf("Welcome\n");
            } else {
                printf("Try again please\n");
            }

            attempts++;
        }
        printf("No more tries.\n");
    } else {
        printf("You are not registered.\n");
    }
}