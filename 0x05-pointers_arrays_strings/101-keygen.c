#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// Define the length of the password
#define PASSWORD_LENGTH 10

// Define the characters that can be used in the password
const char ALLOWED_CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

// Generate a random password that meets the requirements of 101-crackme
char* generate_password() {
    char* password = malloc(PASSWORD_LENGTH + 1);
    int i, num_digits = 0, num_letters = 0;
    while (num_digits < 3 || num_letters < 7) {
        // Generate a random password
        for (i = 0; i < PASSWORD_LENGTH; i++) {
            password[i] = ALLOWED_CHARS[rand() % (strlen(ALLOWED_CHARS))];
            if (isdigit(password[i])) {
                num_digits++;
            } else if (isalpha(password[i])) {
                num_letters++;
            }
        }
    }
    password[PASSWORD_LENGTH] = '\0';
    return password;
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate and print 10 random passwords
    int i;
    for (i = 0; i < 10; i++) {
        char* password = generate_password();
        printf("%s\n", password);
        free(password);
    }

    return 0;
}

