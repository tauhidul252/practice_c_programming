#include <stdio.h>

int main(){
   
   int N;
   scanf("%d", &N);


  


   for (int i = 1; i <=N ; i++)
   {
       for (int j = 1; j <=10; j++)
       {
         printf("%d x %3d = %d\n", j, i, j*i);
       }

       printf("\n\n");
         
   }
   


    return 0;
}