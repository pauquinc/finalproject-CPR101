#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing()
{
    /* Version 1 */
    printf("*** Start of tokenizing Words Demo ***\n");
    char words[200]; //Declare string words
    char *word; //declar char pointer
    int w_counter; //declare variable int type
    printf("Type a few words separated by space (q - to quit):\n");
    gets(words); //This function gets input from user
    while (strcmp(words, "q") != 0) 
    {
        word = strtok(words, " "); //function searches for a separator string within a larger string
        w_counter = 1;
        while (word) //innerloop
        {
            printf("word #%d is \'%s\'\n", w_counter++, word);
            word = strtok(NULL, " "); //function searches for a separator string within a larger string
        }
        printf("Type a few words separated by space (q - to quit):\n");
        gets(words); //This function gets input from user
    }
    printf("*** End of Tokenizing Words Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[200]; //Declare string phrases
    char *phrase; //declar char pointer
    int p_counter; //declare variable int type
    printf("Type a few phrases seperated by comma(q - to quit):\n");
    gets(phrases);  //This function gets input from user
    while (strcmp(phrases, "q") != 0)
    {
        phrase = strtok(phrases, ","); //function searches for a separator string within a larger string
        p_counter = 1;
        while (phrases)
        {
            printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
            phrase = strtok(NULL, ","); //function searches for a separator string within a larger string
        }
        printf("Type a few phrases seperated by comma(q - to quit):\n");
        gets(phrases); //This function gets input from user
    }
    printf("*** End of Tokenizing Phrases Demo ***\n");

    /* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[200]; //Declare string phrases
    char *sentence; //declar char pointer
    int s_counter; //declare variable int type
    printf("Type a few sentences separated by dot(q - to quit):\n");
    gets(sentences); //This function gets input from user
    while (strcmp(sentences, "q") != 0) //while compare sentences
    {
        sentence = strtok(sentences, "."); //function searches for a separator string within a larger string
        s_counter = 1;
        while (sentence) //while loop is entered
        {
            printf("sentence #%d is \'%s\'\n", s_counter++, sentence);
            sentence = strtok(NULL, "."); //function searches for a separator string within a larger string
        }
        printf("Type a few sentences separated by dot(q - to quit):\n");
        gets(sentences); //This function gets input from user
    }
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}