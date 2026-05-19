#include <stdio.h>

int main(int argc, char *argv[])
{
    // if (argc == 1) {
    //     printf("You only have one argument. You suck.\n");
    // } else if (argc > 1 && argc < 4) {
    //     for (int i = 0; i < argc; i++) {
    //         printf("Argument %d: %s\n", i, argv[i]);
    //     }
    // } else {
    //     printf("You have too many arguments. You suck.\n");
    // }

    // int number = 5;

    // if ( number < 6) {
    //     printf("number is less than 6.\n");
    // } else if (number > 3) {
    //     printf("number is equal to 3.\n");
    // } else {
    //     printf("number is greater than 6.\n");
    // }
    int num0 = 0;

    if (num0) {
        printf("0.这条语句不会被执行.\n");
    }

    int num2 = 2;

    if (num2) {
        printf("2.这条语句会被执行.\n");
    }

    int num_neg1 = -1;

    if (num_neg1) {
        printf("-1.这条语句也会被执行.\n");
    }

    return 0;
}