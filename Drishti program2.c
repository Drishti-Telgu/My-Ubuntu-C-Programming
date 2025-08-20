#include <stdio.h>

int main() {
    char ch;
    char word[11]; 
    int i = 0;

    printf("Enter characters. End with pressing enter: ");

    while(1) {
        ch = getchar();
        word[i] = ch;

        if (ch == '\n') {
            break;
        }

        i++;
       
        if (i >= 10) {
            printf("\nWord too long, truncating...\n");
            break;
        }
    }

    word[i] = '\0';

    printf("\nYou entered the word: %s", word);
    return 0;
}

