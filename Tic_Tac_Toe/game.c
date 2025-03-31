#include <stdio.h>


int main()
{
    char location[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    int x_location;
    int o_location;
    int turn = 0;
    char location2[9]  = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    char person;

    printf(" %c | %c | %c\n", location[0], location[1], location[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", location[3], location[4], location[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", location[6], location[7], location[8]);

    while (turn < 9)
    {

        printf("User X print where you want to place your character: ");
        scanf("%d", &x_location);
        person = 'X';
        if (location2[x_location] != location[x_location])
        {
            printf("invalid input \n");
        }
        else
        {
            location[x_location] = 'X';
            printf(" %c | %c | %c\n", location[0], location[1], location[2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", location[3], location[4], location[5]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", location[6], location[7], location[8]);
            turn++;
            if (location[0] == location[1] && location[1] == location[2])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[2] == location[5] && location[5] == location[8])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[6] == location[7] && location[7] == location[8])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[0] == location[3] && location[3] == location[6])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[0] == location[4] && location[4] == location[8])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[2] == location[4] && location[4] == location[6])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[1] == location[4] && location[4] == location[7])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (location[3] == location[4] && location[4] == location[5])
            {
                printf("YOU WIN!!!! %c\n", person);
                break;
            }
            else if (turn == 9)
            {
                printf("Its a draw\n");
                break;
            }
        }

        if (turn < 9)
        {
            printf("User O print where you want to place your character: ");
            scanf("%d", &o_location);
            person = 'O';
            if (location2[o_location] != location[o_location])
            {
                printf("invalid input \n");
            }
            else
            {
                location[o_location] = 'O';
                printf(" %c | %c | %c\n", location[0], location[1], location[2]);
                printf("---+---+---\n");
                printf(" %c | %c | %c\n", location[3], location[4], location[5]);
                printf("---+---+---\n");
                printf(" %c | %c | %c\n", location[6], location[7], location[8]);
                turn++;
                if (location[0] == location[1] && location[1] == location[2])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[2] == location[5] && location[5] == location[8])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[6] == location[7] && location[7] == location[8])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[0] == location[3] && location[3] == location[6])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[0] == location[4] && location[4] == location[8])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[2] == location[4] && location[4] == location[6])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[1] == location[4] && location[4] == location[7])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (location[3] == location[4] && location[4] == location[5])
                {
                    printf("YOU WIN!!!! %c\n", person);
                    break;
                }
                else if (turn == 9)
                {
                    printf("Its a draw\n");
                    break;
                }
            }
        }
    }
    return 0;
}