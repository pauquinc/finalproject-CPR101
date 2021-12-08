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


/* Version 3 */

}
