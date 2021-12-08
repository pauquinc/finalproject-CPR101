#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"

void converting()
{
    /* Version 1 */
    printf("*** Start of Converting Strings to int Demo ***\n");
    char int_string[80]; //Initializing strings
    int int_number; //declare variable int_number int type
    printf("Type the int numeric string (q - to quit) :\n");
    gets(int_string); // this function take input from user

    while (strcmp(int_string, "q") != 0) //while statement: while compare of int_string doesn't find q keep
    {
        int_number = atoi(int_string); //converts a character string to an integer value.
        printf("Converted number is %d\n", int_number);
        printf("Type the int numeric string (q - to quit):\n");
        gets(int_string);  // this function take input from user
    }
    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");
    char double_string[80];   //Initializing double_string
    double double_number; //declare variable double_number double type
    printf("Type the double numeric srting (q - to quit) :\n");
    gets(double_string);  // this function take input from user
    while (strcmp(double_string, "q") != 0) //while function compare is not zero stay in the loop
    {
        double_number = atof(double_string); //Converts a string to its numeric value (floating point)
        printf("Converted number is %f\n", double_number);
        printf("Type the double numeric string(q - to quit):\n");
        gets(double_string);  // this function take input from user
    }
    printf("*** End of Converting Strings to double Demo ***\n\n");

    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char long_string[80];  //Initializing long_string
    long long_number; //declare variable long_number long type
    printf("Type the long numeric string (q - to quit):\n");
    gets(long_string);  // this function take input from user
    while (strcmp(long_string, "q") != 0)
    {
        long_number = atol(long_string); //this function 
        printf("Converted number is %ld\n", long_number);
        printf("Type the long numeric string (q - to quit):\n"); //Returns the long integer representation of a string
        gets(long_string);  // this function take input from user
    }
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
