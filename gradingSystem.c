#include <stdio.h>
int main(){

     int marks;

    scanf("%d", &marks);

    if (80<=marks && marks <=100)
    {
        printf("A+");
    }
    
    else if (70<=marks && marks <80)
    {
        printf("A");
    }

    else if (60<=marks && marks <70)
    {
        printf("A-");
    }
    
    else if (50<=marks && marks <60)
    {
        printf("B");
    }
    
    else if (40<=marks && marks <50)
    {
        printf("C");
    }
    
    else if (33<=marks && marks <40)
    {
        printf("D");
    }

    else if(0<=marks && marks <33)
    {
        printf("F");
    }
    else
    {
        printf("Invalied Number");
    }




    return 0;
}