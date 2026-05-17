#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char* first_name = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
    //L表示64位长整型
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    //ld 表示long double
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    //e表示科学计数法
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    // this makes no sense, just a demo of something weird
    //'\0'表示空字符其值为0
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);
    //int nul_byte = '0';表示0,其中'0'的ASCII码为48
    //字符就算数字,一个字符占用一个字节,一个字节8位,一个字节的ASCII码范围是0-255
    int null_byte = (int) '0';
    int care_percentage2 = bugs * null_byte;
    printf("Which means you should care %d%%.\n", care_percentage2);

    printf("nul_byte:%c\n=============\n%s\n", nul_byte,nul_byte);

    unsigned long number = 1;
    while (1) {

        printf("number:%lu-%ld\n",number,sizeof(number));
        number=number << 1;
        number++;
        if (number == 18446744073709551615) break;
    }

    return 0;
}