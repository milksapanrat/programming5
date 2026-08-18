#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char ban[] = "banana";
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (strstr(sentence, ban) != NULL) {
        char *ptr = strstr(sentence, ban);
        int index = ptr - sentence;
        for (int i = index; i < index+6; i++) {
            sentence[i] = 'X';
        }
        printf("Censored Output: %s\n", sentence);
    } else {
        printf("The sentence does not contain the word 'banana'.\n");
    }
    return 0;
}