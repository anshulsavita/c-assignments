#include<stdio.h>
void main(){
    // ****Question 1****
    // int i=1,j;
    // while(i<=5){
    // j=1;
    // while(j<=5){
    //     printf("1 ");
    //     j=j+1;
    // }
    // printf("\n");
    // i=i+1;
// }

    // ****Question 2****
//     int i=1,j;
//     while(i<=5){
//     j=1;
//     while(j<=5){
//         printf("%d",i%2);
//         j=j+1;
//     }
//     printf("\n");
//     i=i+1;
// }

    // ****Question 3***
//     int i=1,j;
//     while(i<=5){
//     j=0;
//     while(j<5){
//         printf("%d",j%2);
//         j=j+1;
//     }
//     printf("\n");
//     i=i+1;
// }

    // ****Question 4****
//     int i=1,j;
//     while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==1 || i==9){
//             printf("%d",i%2);
//             j=j+1;
//         }
//         else{
//             if(j==1 || j==5){
//                 printf("%d",i%2);
//                 j=j+1;
//             }
//             else{
//             printf("%d",i%i);
//             j=j+1;
//             }
//         }
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 5****
//     int i=1,j;
//     while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==5){
//             if(j==3){
//                 printf("%d",i%i);
//                 j=j+1;
//             }
//             else{
//                 printf("%d",i%2);
//                 j=j+1;
//             }

//         }
//         else{
//             printf("%d",i%2);
//             j=j+1;
//         }      
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 6****
//     int i=1,j;
//     while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==1 || i==5 || i==9){
//         if(j==2 || j==4){
//             printf("%d",i%i);
//             j=j+1;
//         }
//         else{
//             printf("%d",i%2);
//             j=j+1;
//         }
//     }
//     else{
//         if(j==2 || j==4){
//             printf("%d",i%2);
//             j=j+1;
//         }
//         else{
//             printf("%d",i%i);
//             j=j+1;
//         }
//     }
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 7****
// int i=1,j;
// while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==5){
//             printf("%d",i%i);
//             j=j+1;
//         }
//         else{
//             if(j==3){
//                 printf("%d",i%i);
//                 j=j+1;
//             }
//             else{
//             printf("%d",i%2);
//             j=j+1;
//             }

//         }
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 8****
// int i=1,j;
// while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==1 || i==9){
//         if(j==1 || j==5){
//             printf("%d",i%2);
//             j=j+1;
//         }
//         else{
//             printf("%d",i%i);
//             j=j+1;
//         }
//     }
//     else if(i==5){
//         if(j==3){
//             printf("%d",i%2);
//             j=j+1;
//         }
//         else{
//             printf("%d",i%i);
//             j=j+1;
//         }
//     }
//     else{
//         if(j==2 || j==4){
//             printf("%d",i%2);
//             j=j+1;
//         }
//         else{
//             printf("%d",i%i);
//             j=j+1;
//         }
//     }
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 9****
//     int i=1,j;
//     while(i<=9){
//     j=1;
//     while(j<=5){
//         if(i==1 || i==9){
//             if(j==1 || j==5){
//                 printf("%d",i%i);
//                 j=j+1;
//             }
//             else{
//                 printf("%d",i%2);
//                 j=j+1;
//             }

//         }
//         else{
//             if(j==1 || j==5){
//                 printf("%d",i%2);
//                 j=j+1;
//             }
//             else{
//             printf("%d",i%i);
//             j=j+1;
//             }
//         }
//     }
//     printf("\n");
//     i=i+2;
// }

// ****Question 10***
    int i=1,j;
    while(i<=5){
        j=1;
        while(j<=5){
            printf("%d",i);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
}