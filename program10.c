//Program to check whether a character is vowel or not
#include<stdio.h>
void main()
{
    char ch='A';
    printf("ENTER a character:");
    scanf("%ch" ,&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("The entered character is a vowel ");
    }
    else {
        printf("The entered chracter is not a vowel");
    }
}
