#include <stdio.h>
#include <string.h>
int main() {
char name[20];
printf("Enter your name: ");
 fgets(name, sizeof(name), stdin);
if (name[strlen(name) - 1] == '\n') {
name[strlen(name) - 1] = '\0';
    }
printf("You entered name: %s\n", name);
return 0;
}

