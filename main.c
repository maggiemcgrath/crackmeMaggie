#include <stdio.h>
#include <string.h>
int main(int argc, char** argv) {
if (argc != 2) {
        printf("Please input password on run\n");
        return -1;
    }
char* correct = "Crack3dMe";
if (strncmp(argv[1], correct, strlen(correct))) {
        printf("No, %s is not correct.\n", argv[1]);
        return 1;
    } else {
        printf("Yes, %s is correct!\n", argv[1]);
        return 0;
    }
}