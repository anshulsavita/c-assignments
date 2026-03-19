#include<stdio.h>
void main(){
    // ****Question 11****
    // int i,j;
    // for(i=5;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ****Question 12****
    // int i,j;
    // for(i=5;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         if(i==5 || i==1){
    //             printf("*");
    //         }
    //         else{
    //             if(j==i || j==1){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
            
    //     }
    //     printf("\n");
    // }

    // ****Question 13***
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=5;j>=i;j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ****Question 14****
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=5;j>=i;j--){
    //         if(i==1 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==5 || j==i){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }

    // ****Question 15***
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

    // ****Question 16***
    // int i,j,sps=1;
    // for(i=1;i<=5;i++){
    //     for(j=6;j>=i;j--){
    //         printf(" ");
    //     }
    //     for(j=1;j<=sps;j++){
    //         if(i==1 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==1 || j==sps){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     sps=sps+2;
    //     printf("\n");
    // }

    // ****Question 17****
    // int i,j,sps=9;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=sps;j++){
    //             printf("*");
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }

    // ****Question 18***
    // int i,j,sps=9;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=1;j<=sps;j++){
    //         if(i==1 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==1 || j==sps){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //     }
    //     sps=sps-2;
    //     printf("\n");
    // }

    // ****Question 19***
    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(i=1;i<=4;i++){
    //     for(j=4;j>=i;j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ****Question 20****
    int i,j,t=1;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=t;j++){
            printf("*");
        }
        t=t+1;
        printf("\n");
    }
    t=4;
    for(i=1;i<=4;i++){
        for(j=1;j<=i+1;j++){
            printf(" ");
        }
        for(j=1;j<=t;j++){
            printf("*");
        }
        t=t-1;
        printf("\n");
    }
}