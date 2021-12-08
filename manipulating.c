#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
/* Version 1 */
printf("*** Start of Concatenating Strings Demo ***\n");
char string1[80];
char string2[80];
printf("Type the 1st string (q - to quit) :\n)");
gets(string1);
while (strcmp (string1, "q") != 0){
printf("Type the 2nd string: \n");
gets(string2);
strcat(string1, string2);
printf("Concatenated string is \'%s\'\n", string1);
printf("Type the 1st string (q - to quit) :\n");
gets(string1);
}
printf("*** End of Concatenating Strings Demo ***\n\n");

/* Version 2 */



/* Version 3 */

}