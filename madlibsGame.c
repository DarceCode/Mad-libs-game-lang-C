#include <stdio.h>
#include <string.h>

int main() {

    char verb[20] = "";
    char noun[20] = "";
    char adjective1[20], adjective2[20], adjective3[20] = "";

    printf("Enter your verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';
    
     printf("Enter your noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    
     printf("Enter your adjective1: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
     printf("Enter your adjective2: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    
     printf("Enter your adjective3: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';
    
    
    printf("\nI am %s so good today!", verb);
     printf(", and i hope that %s will be so ghetto.", noun);
      printf("\nCurrently the %s feet cries. ", adjective1);
       printf("\nI see a %s dinosaur.", adjective2);
        printf("\nHoping this %s shoes will fit.", adjective3);


    return 0;
}