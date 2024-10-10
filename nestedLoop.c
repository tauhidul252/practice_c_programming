#include <stdio.h>

int main(){

    //test cases 1

   /* int n;
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Even \n");

        if (n<0)
        {
            printf("Negative \n");
        }
        else
        {
            printf("Positive \n");
        }
        
           
        
    }
    else
    {
        printf("Odd \n");

        if (n<0)
        {
            printf("Negative \n");
        }
        else if(n > 0)
        {
            printf("Positive \n");
        }
    }*/
    
//test cases 2

    int n, n2;
    scanf("%d %d", &n, &n2);


    for (int i = 0; i < n; i=i+1)
    {
      for (int j = 0; j < n2; j++)
      {
         printf("%d", j);
      }
      printf("\n");
    }

    return 0;
}