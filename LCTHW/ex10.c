#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;

    // let's make our own array of strings
    char *states[] = {"California", "Oregon", NULL, "Texas", argv[1]};

    argv[2] = states[1];
    // go through each string argv
    // skipping the first arg because
    for (i = 0; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    int num_states = 5;

    for (i=0; i<num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
