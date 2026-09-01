// Write a program that takes a text string and a
// numeric "key" from the user, and encrypts the text
// by shifting every letter forward by the key's value.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int key, i;
    char word[50];


    printf("please enter your word: ");
    scanf("%s", word);
    printf("please enter your numeric key: ");
    scanf("%d", &key);

    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] = (word[i] - 'a' + key) % 26 + 'a';
        else if (word[i] >= 'A' && word[i] <= 'Z')
            word[i] = (word[i] - 'A' + key) % 26 + 'A';
    }

    printf("the encrypted word is: %s", word);

    return EXIT_SUCCESS;
}
