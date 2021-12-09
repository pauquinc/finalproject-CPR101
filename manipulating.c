/*/Member names:
Kush Patel
Rupinderjit Kaur
Satneet Kaur
Paula Quintero
*/
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating()
{
    /* Version 1 */

    printf("*** Start of Concatenating Strings Demo ***\n"); //print header
    char string1[80];                                        //Initializing string "string 1"
    char string2[80];                                        //Initializing string "string 2"
    printf("Type the 1st string (q - to quit) :\n)");        //print the request of first string
    gets(string1);                                           //get input from the user
    while (strcmp(string1, "q") != 0)
    {                                                       //while user doesn't type "q" it will run the loop
        printf("Type the 2nd string: \n");                  //print the request of second string
        gets(string2);                                      //get the input from the user
        strcat(string1, string2);                           //function to concatenated strings
        printf("Concatenated string is \'%s\'\n", string1); //show strings concatenated
        printf("Type the 1st string (q - to quit) :\n");    //instruction to the user to type the first string
        gets(string1);                                      //get the input from the user
    }
    printf("*** End of Concatenating Strings Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n"); // printf print the data between quotes
    char compare1[80];                                   //Initializing string compare 1 and position
    char compare2[80];                                   //Initializing string compare 2 and position
    int result;                                          //define variable result type int
    printf("Type the 1st string to compare (q - to quit) :\n");
    gets(compare1); //get the input from the user
    while (strcmp(compare1, "q") != 0)
    {
        printf("Type the 2nd string to compare:\n");
        gets(compare2); //get the input from the user
        result = strcmp(compare1, compare2);
        if (result < 0) //if statement
            printf("1st string is less than 2nd\n");
        else if (result == 0) //otherwise if result == o, print the following statement
            printf("1st string is equal to 2nd\n");
        else                                                       //else statement
            printf("1st string is greater than 2nd\n");            //
        printf("Type the 1st string to compare (q - to quit):\n"); //print user instruction
        gets(compare1);                                            //get the input from the user
    }
    printf("*** End of Comparing Strings Demo ***\n\n");

    /* Version 3 */
    printf("*** Start of Searching Strings Demo ***\n");
    char big_string[80]; //Initializing string "big_string"
    char sub_string[80]; //Initializing string "sub_string"
    char *address;
    printf("Type a big string (q - to quit):\n");
    gets(big_string); //get input of "big_string" from the user
    while (strcmp(big_string, "q") != 0)
    {
        printf("Type the substring :\n");
        gets(sub_string);                         //get input of "sub_string" from the user
        address = strstr(big_string, sub_string); //Searches for a certain substring within a text string
        if (address != NULL)                      //if statement
            printf("Found at %ld position\n", (long)address - (long)big_string);
        else
            printf("Not found\n");                    //printf if it's not found in the position
        printf("Type a big string (q - to quit):\n"); //instruction to type
        gets(big_string);                             //get input of "big_string" from the user
    }

    printf("*** End of Searching Strings Demo ***\n\n");
}