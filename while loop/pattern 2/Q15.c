#include<stdio.h>
void main(){
    // ****Question 15***-->Pyramid(Equilateral triangle).
    // int i=5,j,sps=1;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=sps){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    //     sps=sps+2;
    // }

    // ****Question 16***-->Pyramid(Equilateral triangle).
    // int i=5,j,sps=1;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=sps){
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
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    //     sps=sps+2;
    // }

    // ****Question 17***-->Inverted Pyramid.
    // int i=1,j,sps=9;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=sps){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    //     sps=sps-2;
    // }

    // ****Question 18***-->Hollow inverted pyramid.
    // int i=1,j,sps=9;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=sps){
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
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    //     sps=sps-2;
    // }

    // ****Question 19***-->Half diamond.
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }
    // i=4;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    // }

    // ****Question 20***-->Mirrored half diamond.
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=5;
    //     while(j>=i){
    //         printf("*");
    //         j--;
    //     }
    //     printf("\n");
    //     i--;
    // }
    // i=1;
    // while(i<=4){
    //     j=0;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=4;
    //     while(j>=i){
    //         printf("*");
    //         j--;
    //     }
    //     printf("\n");
    //     i++;
    // }

    // ****Question 21***-->Diamond.
    int i=5,j,sps=1;
    while(i>=1){
        j=1;
        while(j<=i){
            printf(" ");
            j++;
        }
        j=1;
        while(j<=sps){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
        sps=sps+2;
    }
    i=1;
    sps=7;
    while(i<=4){
        j=0;
        while(j<=i){
            printf(" ");
            j++;
        }
        j=1;
        
        while(j<=sps){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
        sps=sps-2; 
    }
}