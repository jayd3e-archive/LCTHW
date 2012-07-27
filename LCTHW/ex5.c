#include<stdio.h>

/*this is a comment */
int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.345f;
    double super_power = 5676800000000000000000000000000000.8975;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";
    char empty[] = "";

    //this is a comment
    printf("You are %x miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("YOu have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name of %s.\n", first_name);
    printf("I have a last name of %s.\n", last_name);
    printf("My full name is %s %c. %s.\n", first_name, initial, last_name);
    printf("This is an empty string %s.\n", empty);

    return 0;
}
