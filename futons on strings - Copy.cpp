#include <stdio.h>
#include <string.h>
#include <ctype.h>   // for tolower, toupper

// reverse string in place
void my_strrev(char s[]) {
    int i = 0, j = strlen(s) - 1;
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

// convert to lower case
void my_strlwr(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = tolower((unsigned char)s[i]);
    }
}

// convert to upper case
void my_strupr(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = toupper((unsigned char)s[i]);
    }
}

int main() {
    char s1[100], s2[100];
    int n;

    printf("\nChoose a function from below :");
    printf("\n1. string length");
    printf("\n2. string copy");
    printf("\n3. string compare");
    printf("\n4. string reverse");
    printf("\n5. string concatenation");
    printf("\n6. string lower case");
    printf("\n7. string upper case");
    printf("\n");

    printf("\nSelect a number from above : ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("\nYou selected string length");
            printf("\nEnter the string : ");
            scanf(" %[^\n]", s1);
            printf("\nLength of string is %d", (int)strlen(s1));
            break;

        case 2:
            printf("\nYou selected string copy");
            printf("\nEnter the string : ");
            scanf(" %[^\n]", s1);
            strcpy(s2, s1);
            printf("\nThe copied string : %s", s2);
            break;

        case 3:
            printf("\nYou selected string compare");
            printf("\nEnter the 1st string : ");
            scanf(" %[^\n]", s1);
            printf("\nEnter the 2nd string : ");
            scanf(" %[^\n]", s2);
            printf("\nCompare result is %d", strcmp(s1, s2));
            break;

        case 4:
            printf("\nYou selected string reverse");
            printf("\nEnter the string : ");
            scanf(" %[^\n]", s1);
            my_strrev(s1);
            printf("\nReversed string is %s", s1);
            break;

        case 5:
            printf("\nYou selected string concatenation");
            printf("\nEnter the 1st string : ");
            scanf(" %[^\n]", s1);
            printf("\nEnter the 2nd string : ");
            scanf(" %[^\n]", s2);
            strcat(s1, s2);
            printf("\nString is %s", s1);
            break;

        case 6:
            printf("\nYou selected string lower case");
            printf("\nEnter the string : ");
            scanf(" %[^\n]", s1);
            my_strlwr(s1);
            printf("\nLower case of string is %s", s1);
            break;

        case 7:
            printf("\nYou selected string upper case");
            printf("\nEnter the string : ");
            scanf(" %[^\n]", s1);
            my_strupr(s1);
            printf("\nUpper case of string is %s", s1);
            break;

        default:
            printf("\nInvalid option");
    }

    return 0;
}
