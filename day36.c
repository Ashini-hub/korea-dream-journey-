#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int vowels=0, cons=0, space=0;
    printf("Enter string: ");
    gets(str); // or fgets(str, sizeof(str), stdin);
    
    for(int i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            vowels++;
        else if(ch>='a' && ch<='z')
            cons++;
        else if(ch==' ')
            space++;
    }
    printf("Vowels: %d\nConsonants: %d\nSpaces: %d", vowels, cons, space);
    return 0;
}
