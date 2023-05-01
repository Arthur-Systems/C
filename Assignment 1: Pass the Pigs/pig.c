#include <stdio.h>
#include <stdlib.h>
#include "names.h"
/*
 * Create a new type called "Position".
 * Any variable of this type acts like an int.
 * The enum defines contants with the names SIDE, RAZORBACK, etc.
 * where SIDE == 0, RAZORBACK == 1, etc.
 */
typedef enum
{
    SIDE,
    RAZORBACK,
    TROTTER,
    SNOUTER,
    JOWLER
} Position;
/*
 * Define a constant array pig that assigns a pig position to each value
 * of a pseudorandom number from 0 through 6.
 * SIDE appears twice because it has 2/7 chance of being rolled.
 * The same goes for JOWLER.
 */
const Position pig[7] = {
    SIDE,
    SIDE,
    RAZORBACK,
    TROTTER,
    SNOUTER,
    JOWLER,
    JOWLER,
};

int main(void)
{
    int num_players = 2;
    printf("Number of players (2 to 10)? ");
    int scanf_result = scanf("%d", &num_players);
    if (scanf_result < 1 || num_players < 2 || num_players > 10)
    {
        fprintf(stderr, "Invalid number of players. Using 2 instead.\n");
    }

    unsigned seed = 2023;
    printf("Random-number seed? ");
    int num_assignments = scanf("%u", &seed);

    if (num_assignments < 1)
    {
        fprintf(stderr, "Invalid seed. Using 2023 instead.\n");
    }

    srandom(seed);
    int player_points[num_players];
    for (int i = 0; i < num_players; i += 1)
    {
        player_points[i] = 0;
    }
    int player = 0;
    int roll = 0;
    printf("%s\n", player_name[player]);
    while (1)
    {
        while (1)
        {
            roll = random() % 7;
            if (pig[roll] == SIDE)
            {
                break;
            }
            else
            {
                player_points[player] += roll + 1;
            }

            printf("%d rolls %d, has %d\n", player, roll, player_points[player]);

            if (player_points[player] >= 100)
            {
                printf("%s won!\n", player_name[player]);
                return 0;
            }

            if (pig[roll] == SIDE)
            {
                player = (player + 1) % num_players;
                printf("%s\n", player_name[player]);
            }
        }
    }
}
