#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_PASSWORD_LENGTH 50
#define MIN_PASSWORD_LENGTH 6
#define ENCRYPTION_KEY 5
#define MAX_USERS 10

struct User {
    char username[50];
    char encryptied_pasword[MAX_PASSWORD_LENGTH];
    int is_active;
};

struct User users[MAX_USERS];
int user_count = 0;

void displayHeader();
void displayMenu();
void caeserEncrypt(char *password, char *encrypted, int key);
void caeserDecrypt(char *encrypted, char *decrypted, int key);
int hashPassword(char *password);
void registerUser();
void loginUser();
void viewAllUsers();
void bubbleSortUsers();
int searchUser(char *username);
void saveToFile();
void loadFromFile();