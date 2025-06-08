#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT 1024
#define MAX_ARGS 64

void parse_input(char *input, char **args) {
    int i = 0;
    args[i] = strtok(input, " \t\n");
    while (args[i] != NULL) {
        i++;
        args[i] = strtok(NULL, " \t\n");
    }
}

int main() {
    char input[MAX_INPUT];
    char *args[MAX_ARGS];

    while (1) {
        printf("mysh> "); // shell prompt
        if (!fgets(input, MAX_INPUT, stdin)) {
            break; // handle Ctrl+D
        }

        parse_input(input, args);
        if (args[0] == NULL) continue;

        // built-in command: exit
        if (strcmp(args[0], "exit") == 0) {
            break;
        }

        // built-in command: cd
        if (strcmp(args[0], "cd") == 0) {
            if (args[1] == NULL || chdir(args[1]) != 0) {
                perror("cd failed");
            }
            continue;
        }

        // fork + exec
        pid_t pid = fork();
        if (pid == 0) {
            // Child process
            execvp(args[0], args);
            perror("Command failed");
            exit(EXIT_FAILURE);
        } else if (pid > 0) {
            // Parent process
            wait(NULL); // wait for child
        } else {
            perror("Fork failed");
        }
    }

    return 0;
}

