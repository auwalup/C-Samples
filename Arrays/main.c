#include <stdio.h>
#include "Array2.c"

int main(){
    //jumpStatement();
    sortArray();
    //swapVarriables();
    exit(0);
    printf("Enter the size of the matrix\n");
    int size;
    scanf("%d",&size);
    int matrixa[size][size];
    int matrixb[size][size];
    int i=0,j=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrixa[i][j]=rand();
            matrixb[i][j]=rand();
        }
    }

    //print matrix
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d",matrixa[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d",matrixb[i][j]);
        }
        printf("\n");
    }
    int sumMatrix[size][size];
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            sumMatrix[i][j] = matrixa[i][j]+matrixb[i][j];
        }
    }
    printf("-----------------------------------\n the sum matrix is\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf(" %d",sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int mainee()
{
    char ch;
    do{

        int n=0;
        printf("Enter the number of matches\n");
        scanf("%i", &n);
        float scoresArray[n];
        printf("Enter the scores for %i matches\n", n);
        int i=0;
        for(i=0;i<n;i++){
            printf("Enter the score for match %d \n",i+1);
            scanf("%f", &scoresArray[i]);
        }
        float total = 0, max, min, avg=0;
        max=min=scoresArray[0];
        for(i=0;i<n;i++){
            total += scoresArray[i];
            if(scoresArray[i]>max)
                max = scoresArray[i];
            if(scoresArray[i]<min)
                min = scoresArray[i];
        }
        avg = total/n;
        printf("The total score is %.0f: ", total);
        printf("\nThe highest is %.0f", max);
        printf("\nThe lowest is %.0f", min);
        printf("\nThe average is %.1f", avg);
        printf("\ndo you want to continue with the match\n");
        scanf("\n%c",&ch);

    }while(ch == 'y' || ch == 'Y');
    return 0;
}*/
