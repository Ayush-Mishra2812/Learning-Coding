#include <stdio.h>
#include <stdlib.h>

int main(){
    char adjective[20];
    char  bird[20];
    char  room[20];
    char  verb[20];
    char  verb1[20];
    char relative[20];
    char noun[20];
    char liquid[20];
    char ingverb[20];
    char bodypart[20];


    printf("Enter an Adjective: ");
    scanf("%s", &adjective);
    printf("Write a name of a bird: ");
    scanf("%s", bird);
    printf("Write a room of the house: ");
    scanf("%s", &room);
    printf("Write a verb in the past tense: ");
    scanf("%s", &verb);
    printf("Write a verb: ");
    scanf("%s", &verb1);
    printf("Write a name of a relative: ");
    scanf("%s", &relative);
    printf("Write a noun: ");
    scanf("%s", &noun);
    printf("Write a liquid: ");
    scanf("%s", liquid);
    printf("write a verb ending with -ing: ");
    scanf("%s", &ingverb);
    printf("Write a part of the body: ");
    scanf("%s", &bodypart);


    printf("I woke up to the %s smell of %s roasting in the %s downstairs. \n",adjective, bird, room);
    printf("I %s down the stairs to see if I could help %s the dinner.\n", verb, verb1);
    printf("My Mom said, \"See if %s need a fresh %s \"",relative, noun);
    printf("So I carried a tray of glasses full of %s into the %s room.\n", liquid, ingverb);
    printf("When I got there, I couldn\'t belive my %s !\n", bodypart);
}