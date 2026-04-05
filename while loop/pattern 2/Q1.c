#include<stdio.h>
void main(){
    // ****Question 1***-->Square
//     int i=1,j;
//     while(i<=5){
//     j=1;
//     while(j<=5){
//         printf("*");
//         j++;
//     }
//     i++;
//     printf("\n");
// }

// ****Question 2***-->Hollow Square.
//     int i=1,j;
//     while(i<=5){
//     j=1;
//     while(j<=5){
//         if(i==1 || i==5){
//             printf("*");
//         }
//         else{
//             if(j==1 || j==5){
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
// }

//  ****Question 3***-->Rhombus
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=5){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    // }

    // ****question 4***-->Hollow rhombus.
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=5){
    //         if(i==1 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==1 || j==5){
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
    // }

    // ****Question 5***-->Mirrored rhombus.
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=5){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    // ****Question 6***-->Hollow mirroed rhombus.
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=1;
    //     while(j<=5){
    //         if(i==1 || i==5){
    //             printf("*");
    //         }
    //         else{
    //             if(j==1 || j==5){
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
    // }

    // ****Question 7***-->Right triangle.
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

    // ****Question 8***--> Hollow right triangle.
    // int i=1,j;
    // while(i<=5){
    //     j=1;
    //     while(j<=i){
    //         if(i==3 || i==4){
    //             if(j==1 || j==i){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //         else{
    //             printf("*");
    //         }
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    // ****Question 9***-->Mirrored right triangle.
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

    // ****Question 10****--> Hollow mirrored right triangle.
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf(" ");
    //         j++;
    //     }
    //     j=5;
    //     while(j>=i){
    //         if(i==3 || i==2){
    //             if(j==5 || j==i){
    //                 printf("*");
    //             }
    //             else{
    //                 printf(" ");
    //             }
    //         }
    //         else{
    //             printf("*");
    //         }
    //         j--;
    //     }
    //     printf("\n");
    //     i--;
    // }

    // ****Question 11***-->inverted right triangle.
    // int i=5,j;
    // while(i>=1){
    //     j=1;
    //     while(j<=i){
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");
    //     i--;
    // }

    // ****Question 12****-->Hollow inverted right triangle
    int i=5,j;
    while(i>=1){
        j=1;
        while(j<=i){
            if(i==4 || i==3){
                if(j==1 || j==i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf("*");
            }
            j++;
        }
        printf("\n");
        i--;
    }
}