#include<stdio.h>
int process();
int main()
{
    int option;
    int exit = 0; 
    /* code */

    exit = process(option);
    if (exit != 5)
    {   
        while (exit !=5)
        {
        printf("\n to exit the file: Press 5 or press 4 to continue \n");
        scanf("%d", &exit);
            process(0);
        }
    }else{
        printf("exit");
    }
    

    return 0;
}

int process(int i){

    printf("\n \n ------FILE READING & OVERWRITING---------");
    printf("\n \n please choose an option to continue");
    printf("\n to read the file: Press 1");
    printf("\n to change the file: Press 2");
    printf("\n to summarize the file: Press 3 \n");
   // printf("\n to exit the file: Press 5 \n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        /* code */
        printf("case1 \n");
        return 1;
        break;
    case 2:
        printf("case2 \n");
        return 2;
        break;
    case 3:
        printf("case3 \n");
        return 3;
        break;
    default:
        return i;
        break;      
    }
 
}