#include<stdio.h>
void main(){
    // ****Question 1***
//     int j,i;
//     for(i=1;i<=5;i++){
//     for(j=1;j<=5;j++){
//         printf("*");
//     }
//     printf("\n");
// }

    // ****Question 2***
    // int j,i;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=5;j++){
    //         if(i==1 || i==5){
    //         printf("*");
    //         }
    //         else{
    //             if(j==1 || j==5){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }

    // ****Question 3***
    // int j,i,sps=4;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=5;j++){
    //         printf("*");
    //     }
    //     sps=sps-1;
    //     printf("\n");
    // }

    // ****Question 4***
    // int j,i,sps=4;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=5;j++){
    //         if(i==1 || i==5){
    //         printf("*");
    //     }
    //     else{
    //         if(j==1 || j==5){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    // }
    //     sps=sps-1;
    //     printf("\n");
    // }

    // ****Question 5***
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=5;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ****Question 6****
    // int j,i;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=5;j++){
    //         if(i==1 || i==5){
    //         printf("*");
    //     }
    //     else{
    //         if(j==1 || j==5){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    // }
    //     printf("\n");
    // }

    // ****Question 7***
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ****Question 8****
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         if(i==1 || i==2 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==1 || j==i){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }

    // ****Question 9***
    // int i,j,sps=5;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //     sps=sps-1;
    // }

    // ****Question 10****
    int i,j,sps=5;
    for(i=1;i<=5;i++){
        for(j=1;j<=sps;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i==1 || i==2 || i==5){
                printf("*");
            }
            else{
                if(j==1 || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
        sps=sps-1;
    } 
}
