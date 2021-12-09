/*/Member names:
Kush Patel
Rupinderjit Kaur
Satneet Kaur
Paula Quintero
*/
#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

void fundamentals()
{
    /* Version 1 */
   
    printf("*** Start of Indexing Strings Demo ***\n");  //Function print is called
    char buffer1[80]; //Initializing string buffer1
    char num_input[10]; //Initializing string num_input
    unsigned int position; //declare variable
    printf("Type not empty string (q - to quit):\n"); //Function printf is called
    printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
    gets(buffer1); //This function gets input from the user
    while (strcmp(buffer1, "q") != 0) //while loop initialized. strcmp function compare 
    {
        printf("Type the character position within the string:\n");
        gets(num_input); //This function gets input from the user
        position = atoi(num_input);
        if (position >= strlen(buffer1)) //if statement. If position is greater or iqual to lenght of buffer1 go to the loop
        {
            position = strlen(buffer1) - 1;
            printf("Too big... position reduced to max. available");
        }
        printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
        printf("Type not empty string (q - to quit:\n)");
        printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789");
        gets(buffer1); //function get input
    }
    printf("*** End of Indexing Strings Demo ***\n\n");

/* Version 2 */
printf("*** Start of Measuring Strings Demo ***\n");
char buffer2[80]; //declare and initialize buffer2
printf("Type a string (q - to quit):\n");
gets(buffer2); //function get input
while (strcmp(buffer2, "q") != 0) //while loop initialized. strcmp function compare
{
    printf("The length is %lu\n", strlen(buffer2));
    printf("Type a string (q - to quit) :\n");
    gets(buffer2);
}
printf("*** End of Measuring Strings Demo ***\n\n");


/* Version 3 */
printf("*** Start of Copying Strings Demo ***\n");
char destination[80]; //declare and initialize destination
char source[80]; //declare and initialize source
destination[0] = '\0';
printf("Destination string is reset to empty\n");
printf("Type a source string (q - to quit):\n");
gets(source); //this function gets input from user
 while (strcmp(source, "q") != 0)
{
    strcpy(destination, source); //this function copy source in destination
    printf("New destination string is \'%s\':\n", destination);
    destination[0] = '\0';
    printf("Destination string is reset to empty\n");
    printf("Type a source string (q - to quit):\n");
    gets(source);
}
printf("*** End of Copying Strings Demo ***\n\n");

}
