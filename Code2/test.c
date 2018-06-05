#include <stdlib.h>
#include "dynamicfunctions.h"


int main(void)
{
    unsigned int coins[] = {1, 2, 5, 10, 20, 50, 100};
    const size_t len = sizeof(coins) / sizeof(coins[0]);
    const unsigned int value = 252;
    unsigned int *solution;
    unsigned int result = make_change(coins, len, value, &solution);
    unsigned int i;
    printf("The sum of money: %d\n",value);
    printf("Number of coins: %u\n", result);
    printf("Coins used:\n");
    for (i = 0; i < len; i++) {
        if (solution[i] > 0) {
            printf("%u x %u\n", solution[i], coins[i]);
        }
    }
    free(solution);
    return 0;
}

