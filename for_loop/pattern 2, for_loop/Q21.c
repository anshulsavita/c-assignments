#include<stdio.h>
void main(){
    // ****Question 21***
    // int i,j,sps=1;
    // for(i=1;i<=5;i++){
    //     for(j=6;j>=i;j--){
    //         printf(" ");
    //     }
    //     for(j=1;j<=sps;j++){
    //         printf("*");
    //     }
    //     sps=sps+2;
    //     printf("\n");
    // }
    // sps=7;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i+2;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=sps;j++){
    //             printf("*");
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }

    // ****Question 22****
    // int i,j,sps=1;
    // for(i=5;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     for(j=1;j<sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     sps=sps+2;
    //     printf("\n");
    // }

    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     for(j=4;j<=sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }

    // ****Question 23****
    // int i,j,sps=1;
    // for(i=5;i>=1;i--){
    //     for(j=1;j<=sps;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     sps=sps+2;
    //     printf("\n");
    // }
    // for(i=4;i>=1;i--){
    //     for(j=2;j<=sps-3;j++){
    //         printf(" ");
    //     }
    //     for(j=5;j>=i;j--){
    //         printf("*");
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }

    // ****Question 24****
    // int i,j,sps=1;
    // for(i=5;i>=1;i--){
    //     for(j=5;j>=sps;j--){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     sps=sps+1;
    //     printf("\n");
    // }
    // for(i=4;i>=1;i--){
    //     for(j=6;j>=sps-1;j--){
    //         printf(" ");
    //     }
    //     for(j=5;j>=i;j--){
    //         printf("*");
    //     }
    //     sps=sps-1;
    //     printf("\n");
    // }

    // ****Question 25****
    // int i,j;
    // for(i=1;i<=9;i++){
    //     for(j=1;j<=9;j++){
    //         if(i==5){
    //             printf("+");
    //         }
    //         else{
    //             if(j==5){
    //                 printf("+");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }

    // ****Question 26****
    // int i,j,sps=7;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         if(j==i){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     for(j=1;j<=sps;j++){
    //         printf(" ");
    //     }
    //     if(i!=5){
    //         printf("*");
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }
    // for(i=4;i>=1;i--){
    //     for(j=1;j<i;j++){
    //         printf(" ");
    //     }
    //     printf("*");
    //     for(j=1;j<=sps+4;j++){
    //         printf(" ");
    //     }
    //     printf("*");
    //     sps=sps+2;
    //     printf("\n");
    // }

    // ****Question 27***
    int i,j,t=5,sps=5;
    for(i=3;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=t;j++){
            printf("*");
        }  
        for(j=1;j<=sps;j++){
            printf(" ");
        }
        for(j=1;j<=t;j++){
            printf("*");
        }
        t=t+2;
        sps=sps-2;
        printf("\n");
    }
    sps=19;
    for(i=1;i<=10;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=sps;j++){
                printf("*");
        }
        sps=sps-2;
        printf("\n");
    }
}