#include <stdio.h>
int isCapitalLetter(char parameter);
int isSmallLetter(char parameter);
int main()
{
    char ch;
    scanf("%c",&ch);
    if (isCapitalLetter(ch)){
        printf("this is a capital letter\n" );
        printf("the small letter is %c\n",'z'-('Z'-ch));
    }
    if(isSmallLetter(ch)){
        printf("this is a small letter\n");
    }
    printf("the ascii value for this character is %d",ch);

    return 0;
}
int isCapitalLetter(char parameter)
{
    if(parameter>='A' && parameter<='Z')
    {
        return 1;

    }
    else{
        return 0;
    }
}
int isSmallLetter(char parameter)
{
    if(parameter>='a' && parameter<='z')
        {return 1;}
    else
    {return 0;}
}

