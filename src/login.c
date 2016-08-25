#include "login.h"

void login(){
    char username[10];
    char password[10];
    printf("Login:\n");
    scanf("%s", username);
    printf("Password:\n");
    scanf("%s", password);
    printf("%s - %s \n", username, password );
}
