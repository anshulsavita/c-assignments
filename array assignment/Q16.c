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
    int x[6],y[6],z[6],i,o=0,e=0,j,t;
    for(i=0;i<=5;i++){
        printf("Enter value @ %d ",i);
        scanf("%d",&x[i]);
    }
    e=0;
    o=0;
    for(i=0;i<=5;i++){
        if(x[i]%2==0){
            y[e]=x[i];
            e++;
        }
        else{
            z[o]=x[i];
            o++;
        }
    }
    for(i=0;i<=4;i++){
        for(j=0;j<e-i;j++){
            if(y[j]>y[j+1]){
                t=y[j];
                y[j]=y[j+1];
                y[j+1]=t;
            }
        }
    }
    for(i=0;i<=4;i++){
        for(j=0;j<o-i;j++){
            if(z[j]>z[j+1]){
                t=z[j];
                z[j]=z[j+1];
                z[j+1]=t;
            }
        }
    }
    printf("even elements:\n");
    for(i=0;i<e;i++){
        printf("%d,",y[i]);
    }

    printf("\nOdd elements:\n");
    for(i=0;i<o;i++){
        printf("%d,",z[i]);
    }

}