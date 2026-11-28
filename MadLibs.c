#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    // MAD LIBS
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";
    printf("Enter an adjective (description): \n");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter an noun (animal or person): \n");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): \n");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter an verb (ending w/ -ing): \n");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): \n");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Albert Einstein was %s at the time \n", adjective1);
    printf("He met Paul Dirac who was quite %s in a park\n", adjective2);
    printf("Both were talking enthusiastically about how %s Niels Bohr is\n", adjective3);
    printf("When suddenly a %s barge in\n", noun);
    printf("Einstein and Dirac were flabbergasted so they immediately go for a %s with their boots", verb);
    
    return 0;

}