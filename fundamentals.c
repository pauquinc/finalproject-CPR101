#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

void fundamentals()
{
    /* Version 1 */
    //Function print is called
    printf("*** Start of Indexing Strings Demo ***\n");
    //Initializing strings and position
    char buffer1[80 + 1];
    char num_input[10 + 1];
    unsigned int position;
    printf("Type not empty string (q - to quit):\n"); //Function printf is called
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
    //This function gets input from the user
    gets(buffer1);
    while (strcmp(buffer1, "q") != 0)
    {
        printf("Type the character position within the string:\n");
        gets(num_input); //This function gets input from the user
        position = atoi(num_input);
        if (position >= strlen(buffer1))
        {
            position = strlen(buffer1) - 1;
            printf("Too big... position reduced to max. available");
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
        printf("Type not empty string (q - to quit:\n)");
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789");
        gets(buffer1);
    }
    printf("*** End of Indexing Strings Demo ***\n\n");

/* Version 2 */
printf("*** Start of Measuring Strings Demo ***\n");
char buffer2[80];
printf("Type a string (q - to quit):\n");
gets(buffer2);
while (strcmp(buffer2, "q") != 0)
{
    printf("The length is %lu\n", strlen(buffer2));
    printf("Type a string (q - to quit) :\n");
    gets(buffer2);
}
printf("*** End of Measuring Strings Demo ***\n\n");


/* Version 3 */
printf("*** Start of Copying Strings Demo ***\n");
char destination[80];
char source[80];
destination[0] = '\0';
printf("Destination string is reset to empty\n");
printf("Type a source string (q - to quit):\n");
gets(source);
while (strcmp(source, "q") != 0)
{
    strcpy(destination, source);
    printf("New destination string is \'%s\':\n", destination);
    destination[0] = '\0';
    printf("Destination string is reset to empty\n");
    printf("Type a source string (q - to quit):\n");
    gets(source);
}
printf("*** End of Copying Strings Demo ***\n\n");

}
