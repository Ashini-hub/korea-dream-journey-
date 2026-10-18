#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    printf("Enter string: ");
    scanf("%s", str);
    
    strcpy(rev, str);
    strrev(rev); // note: some compiler la work aagathu, manual loop better
    
    printf("Reversed: %s\n", rev);
    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

// Manual reverse (without strrev) - safe method
/*
int len = strlen(str);
for(int i=0; i<len; i++) rev[i] = str[len-1-i];
rev[len] = '\0';
*/
