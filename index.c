#include <stdio.h>
int main()

    // QUESTION-1


{
//    for(int i=0; i<=5; i++){
//     for(int j=0; j<=10; j++){
//         if(i==0|| j==0||i==5||j==10){
//             printf("* ");
//         }
//         else{
//             printf("  ");
//         }
//     }
//      printf("\n");
//    }
  


    //   QUESTION-2

// int hrs[3][3]={{8,20,30},
//                 {13,35,9},
//                 {2,7,6}};
//     int i;
//     int j;
//     int sum=0,avg;
//     for(int i=0; i<=2; i++){
//         for(int j=0; j<=2; j++){
//             sum+=hrs[i][j];
//         }
//     }
//     avg=sum/9;
//     printf("average %d",avg);
      

    // QUESTION-3

    int hrs[3][3]={{8,20,30},
                    {13,35,9},
                    {2,7,6}};
    int sum=0;
    int sum2=0;
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(i==j){
                sum+=hrs[i][j];
            }
            else if(i==1 && j==1 || i==0 && j==2 || i==2 && j==0){
                sum2+=hrs[i][j];
            }
        }
    }
 
printf("%d ",sum+sum2);

   return 0;
}