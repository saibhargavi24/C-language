// Checking whether the character is vowel or consonant or non-alphabet

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("%c is Vowel",ch);
        }
        else
        {
            printf("%c is Consonant",ch);
        }
    }
    else
    {
        printf("Non-alphabet");
    }
    return 0;
}
