#include<stdio.h>
void main(){
    // ****Question 16***
    // -->Write a c program to find reverse of an array.
    // int x[5],y[5],i;
    // for(i=0;i<=4;i++){
    //     printf("Enter value:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     y[i]=x[4-i];
    // }
    // for(i=0;i<=4;i++){
    //     printf("%d,",y[i]);
    // }

    // ****Question 17****
    // -->Write a c program to put even and odd elements of array in two separate array.
    // int x[6],y[6],z[6],i,o=0,e=0;
    // for(i=0;i<=5;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // e=0;
    // o=0;
    // for(i=0;i<=5;i++){
    //     if(x[i]%2==0){
    //         y[e]=x[i];
    //         e++;
    //     }
    //     else{
    //         z[o]=x[i];
    //         o++;
    //     }
    // }
    // printf("even elements:\n");
    // for(i=0;i<e;i++){
    //     printf("%d,",y[i]);
    // }

    // printf("\nOdd elements:\n");
    // for(i=0;i<o;i++){
    //     printf("%d,",z[i]);
    // }

    // ****Question 18****
    // -->write a c program to search an element in an array.
    // int x[5],i,n;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter number u want to search: ");
    // scanf("%d",&n);
    // for(i=0;i<=4;i++){
    //     if(n==x[i]){
    //         printf("\nposition: %d",i);
    //     }
    // }

    // ****Question 19****
    // -->Write a c program to sort array elements in ascending order.
    // int x[5],i,t,j;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<4;i++){
    //     for(j=0;j<4-i;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // printf("\nSorted elements in asc order:\n");
    // for(i=0;i<=4;i++){
    //     printf("%d,",x[i]);
    // }

    // ****Question 20****
    // --> Write a c program to sort array elements in descending order.
    // int x[5],i,t,j;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<4;i++){
    //     for(j=0;j<4-i;j++){
    //         if(x[j]<x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // printf("\nSorted elements in des order:\n");
    // for(i=0;i<=4;i++){
    //     printf("%d,",x[i]);
    // }
    
    // ****Question 21***
    // -->Write a c program to sort even and odd elements of array separately.
    // int x[6],y[6],z[6],i,o=0,e=0,j,t;
    // for(i=0;i<=5;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // e=0;
    // o=0;
    // for(i=0;i<=5;i++){
    //     if(x[i]%2==0){
    //         y[e]=x[i];
    //         e++;
    //     }
    //     else{
    //         z[o]=x[i];
    //         o++;
    //     }
    // }
    // for(i=0;i<=4;i++){
    //     for(j=0;j<e-i;j++){
    //         if(y[j]>y[j+1]){
    //             t=y[j];
    //             y[j]=y[j+1];
    //             y[j+1]=t;
    //         }
    //     }
    // }
    // for(i=0;i<=4;i++){
    //     for(j=0;j<o-i;j++){
    //         if(z[j]>z[j+1]){
    //             t=z[j];
    //             z[j]=z[j+1];
    //             z[j+1]=t;
    //         }
    //     }
    // }
    // printf("even elements:\n");
    // for(i=0;i<e;i++){
    //     printf("%d,",y[i]);
    // }

    // printf("\nOdd elements:\n");
    // for(i=0;i<o;i++){
    //     printf("%d,",z[i]);
    // }

    // ****Question 22****
    // --Write a c program to add two matrices.
    // int x[3][3],y[3][3],z[3][3];
    // int i,j;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 1 @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 2 @ %d,%d:",i,j);
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         z[i][j]=x[i][j]+y[i][j];
    //         printf("%d ",z[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 23****
    // --Write a c program to subtract two matrices.
    // int x[3][3],y[3][3],z[3][3];
    // int i,j;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 1 @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 2 @ %d,%d:",i,j);
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         z[i][j]=x[i][j]-y[i][j];
    //         printf("%d ",z[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 24****
    // --Write a c program to perform scalar matrix multiplication.
    // int x[3][3],y[3][3],z[3][3],i,j,k,s;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 1 @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 2 @ %d,%d:",i,j);
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         z[i][j]=x[i][j]*y[i][j];
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("%d ",z[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 25***
    // --Write a c program to multiply two matrix.
    // int x[3][3],y[3][3],z[3][3],i,j;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 1 @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 2 @ %d,%d:",i,j);
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         s=0;
    //         for(k=0;k<=2;k++){
    //             s=s+(x[i][k]*y[k][j]);
    //         }
    //         z[i][j]=s;
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf(" %d",z[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 26****
    // --Write a cprogram to check whether two matrix are equal or not.
    // int x[3][3],y[3][3],z[3][3],i,j,c=0,t=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 1 @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value of string 2 @ %d,%d:",i,j);
    //         scanf("%d",&y[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         t++;
    //         if(x[i][j]==y[i][j]){
    //             c++;
    //         }
    //     }
    // }
    // if(c==t){
    //     printf("Both are equal..");
    // }
    // else{
    //     printf("not equal..");
    // }
    
    // ****Question 27****
    // ---Write a c program to find sum of main diagonal element of a matrix.
    // int x[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         if(i==j){
    //             s=s+x[i][j];
    //         }
    //     }
    // }
    // printf("%d",s);

    // ****Question 28****
    // ---Write a c program to find sum of minor diagonal elements of a matrix.
    // int x[3][3];
    // int i,j,s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values");
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     s=s+x[i][2-i];
    // }
    // printf("%d",s);

    // ****Question 29****
    // ---Write a c program to find sum of each row and column of a matrix.
    // int x[3][3];
    // int i,j,r=0,c=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     s=0;
    //     for(j=0;j<=2;j++){
    //         printf("%d ",x[i][j]);
    //         r=r+x[i][j];
    //     }
    //     printf("%d \n",r);
    // }
    // for(i=0;i<=2;i++){
    //     s=0;
    //     for(j=0;j<=2;j++){
    //         printf("%d ",x[i][j]);
    //         c=c+x[j][i];
    //     }
    //     printf("%d",c);
    //     printf("\n");
    // }

    // ****Question 30***
    // ---Write a c program to interchange diagonals of a matrix.
    // int x[3][3];
    // int i,j,t;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter value @ %d,%d:",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         if(i==0 || i==2){
    //             if(j==0){
    //                 t=x[i][j];
    //                 x[i][j]=x[i][j+2];
    //                 x[i][j+2]=t;
    //             }
    //         }
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("%d ",x[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 31****
    // ---Write a c program to find upper triangular matrix.
    // int i,j,x[3][3];
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d: ",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=i;j++){
    //         printf("  ");
    //     }
    //     for(j=i;j<=2;j++){
    //         printf("%d ",x[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 32***
    // --Write a c program to find lower triangular matrix.
    // int i,j,x[3][3];
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d: ",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=i;j++){
    //         printf("%d ",x[i][j]);
    //     }
    //     printf("\n");
    // }

    // ****Question 33****
    // --Write a c program to sum of upper triangle matrix.
    // int i,j,x[3][3],s=0;
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=2;j++){
    //         printf("Enter values @ %d,%d: ",i,j);
    //         scanf("%d",&x[i][j]);
    //     }
    // }
    // for(i=0;i<=2;i++){
    //     for(j=0;j<=i;j++){
    //         printf("  ");
    //     }
    //     for(j=i;j<=2;j++){
    //         s=s+x[i][j];
    //     }
    // }
    // printf("sum: %d",s);

    // ****Question 34****
    // ---Write a c program to find transpose of a matrix.
}