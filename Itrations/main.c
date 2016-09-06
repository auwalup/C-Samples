#include <stdio.h>
int main()
{
        int i=0,j=0;
        for(i=0;i<5;i++){
            printf("outer loop %d\n", i);
            for(j=0;j<5;j++)
                printf("\tInner Loop %d\n", j);
        }
    //beginArray();
    return 0;
    printf("********************************\n\t\tWelcome To The Game\n***************************************\n");
    do{
        int guess;
        while(guess = rand()>100){};
        printf("Guess A number and i will tell you if its same as mine\npress -1 to give up\n");
        float input = 0.0;
        do{
            scanf("%f", &input);
            if(input <0){
                printf("Opps my guess was %d\n", guess);
                break;
            }
            else if(input == guess)
                printf("You got it right\n");
            else if(input < guess)
                printf("no my guess is greater than yours\n");
            else if(input > guess)
                printf("no my guess is less than yours\n");
        }while(input != guess);
        printf("Do you want to try again!\n");
        char ans = getchar();
        ans = getchar();
        if(ans == 'y' || ans == 'Y')
            continue;
        else
            break;
    }while(1);
    printf("Good Bye");
    return 0;
}

void beginArray(){
    //array declaration
    char charArray[5];
    //assigning values to arrays using indexes
    charArray[0] = 'a';
    charArray[1] = 'b';
    charArray[2] = 'c';
    charArray[3] = 'd';
    charArray[4] = 'e';
    printf("%c\n", charArray);//should not work normally
    printf("%c\n", charArray[0]);
    printf("%c\n", charArray[1]);
    printf("%c\n", charArray[2]);
    printf("%c\n", charArray[3]);
    printf("%c\n", charArray[4]);

    int intArray[5] = {1,2,3,4,5};
    int i;
    //printf("\n----> %d <-----\n",sizeof(__int));
    int count = (sizeof(intArray)/4);
    for(i = 0;i<count;i++){
        printf("\nEnter NUmber %d: ", i);
        scanf("%d",&intArray[i]);
    }
    for(i = 0;i<count;i++){
        printf("%d\n", intArray[i]);
    }


}
