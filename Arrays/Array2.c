void golang(){
    printf("Go lang");
}
void swapVarriables(){
    int x=0,y=200;
    printf("X = %i, Y = %i \n", x, y);
    x= 45*y;
    printf("X = %i, Y = %i \n", x, y);
    int temp;
    temp=x;
    x=y;
    y = temp;
    printf("X = %i, Y = %i \n", x, y);
}

void jumpStatement(){
    int i = 10;
    point1:
        printf("%d\n", i);
        i--;
        if(i>0)
        goto point1;
    printf("done");
}

void sortArray(){
    int intArray[10] ={43,54,768,5,3,467,7898,56,45,34};
    int i = 0;
    for(i=0;i<10;i++)
        printf("%d\t", intArray[i]);
    printf("\n");
    int j=0, temp=0;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(intArray[j]<intArray[i]){
                temp = intArray[i];
                intArray[i] = intArray[j];
                intArray[j] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d\t", intArray[i]);
    printf("\n");
}
