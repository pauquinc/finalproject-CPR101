#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"

void converting() {
/* Version 1 */
printf("*** Start of Converting Strings to int Demo ***\n");
char int_string[80+1];
int int_number;
printf("Type the int numeric string (q - to quit) :\n");
gets(int_string);

while (strcmp(int_string, "q") != 0){
    int_number = atoi(int_string);
    printf("Converted number is %d\n", int_number);
    printf("Type the int numeric string (q - to quit):\n");
    gets(int_string);
}
printf("*** End of Converting Strings to int Demo ***\n\n");

/* Version 2 */

/* Version 3 */
}