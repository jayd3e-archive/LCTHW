#include<stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    printf("The size of an int: %d\n", sizeof(int));
    printf("The size of areas (int[]): %d\n", sizeof(areas));

    printf("The number of ints in areas: %d\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, and the second is %d.\n",
            areas[0], areas[1]);
    
    printf("The size of a char: %d\n", sizeof(char));
    printf("The size of name (char[]): %d\n",
            sizeof(name));
    printf("The number of chars: %d\n",
            sizeof(name) / sizeof(char));

    printf("The size of full name (char[]): %d\n",
            sizeof(full_name));
    printf("The number of chars: %d\n",
            sizeof(full_name) / sizeof(char));
    printf("Character at index 7 in full_name: %c\n",
            full_name[7]);

    printf("Name=\"%s\" and Full_name=\"%s\"\n",
            name, full_name);

    areas[0] = 100;
    name[0] = 'P';
    full_name[0] =name[0];

    printf("New area[0]: %d\n", areas[0]);
    printf("New name[0]: %c\n", name[0]);
    printf("New full_name[0]: %d\n", full_name[0]); 
    return 0;
}
