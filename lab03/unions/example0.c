#include<stdio.h>
#include<stdlib.h>

int main()
{
    union intParts {
        int theInt;
        char bytes[sizeof(int)];
    };
    union intParts parts;
    parts.theInt = 5968145;

    printf("The int is %i\nThe bytes are [%i, %i, %i, %i]\n",
    parts.theInt, parts.bytes[0], parts.bytes[1], parts.bytes[2], parts.bytes[3]);

    //struct operator {
       // int intNum;
        //float floatNum;
       // int type;
       // double doubleNum;
    //};

    struct operator {
        int type;
        union {
            int intNum;
            float floatNum;
            double doubleNum;
        } types;
    };

    union Coins {
        struct {
            int quarter;
            int dime;
            int nickel;
            int penny;
        };
        int coins[4];
    };

    union Coins change;
    for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
    {
        scanf("%i", change.coins + i );
    }
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n", 
    change.quarter, change.dime, change.nickel, change.penny);
}