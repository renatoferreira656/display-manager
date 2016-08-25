#include "login.h"

void login(){
    char * username = malloc(20);
    char * password = malloc(20);
    printf("Login:\n");
    scanf("%s", username);
    printf("Password:\n");
    scanf("%s", password);
    printf("%s - %s \n", username, password );
}
