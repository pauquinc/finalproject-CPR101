#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing() {
/* Version 1 */
printf("*** Start of tokenizing Words Demo ***\n");
char words[200];
char* word;
int w_counter;
printf("Type a few words separated by space (q - to quit):\n");
gets(words);
while (strcmp(words, "q") != 0) {
    word=strtok(words, " ");
    w_counter = 1;
    while (word) {
        printf("word #%d is \'%s\'\n", w_counter++, word);
        word = strtok(NULL, " ");
    }
    printf("Type a few words separated by space (q - to quit):\n");
    gets(words);
}
printf("*** End of Tokenizing Words Demo ***\n\n");

/* Version 2 */



/* Version 3 */

}