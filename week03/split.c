#include <stdio.h>
#include <string.h>

int main() {
    char line[1024];
    while (fgets(line, sizeof(line), stdin)) {
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, " \t\n");
        }
    }
    return 0;
}
