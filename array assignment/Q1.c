#include<stdio.h>
void main(){
    // ****Question 1***
    // Write a c program to read and print elements of array.
    // int x[5],i;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     printf("%d,",x[i]);
    // }

    // ****Question 2***
    // Write a c program to find sum of all array elements.
    // int x[5],i,s=0;
    // for(i=0;i<=4;i++){
    //     printf("enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     s=s+x[i];
    // }
    // printf("sum of all elements: %d",s);

    // ****Question 3***
    // Write a c program to find maximum and minimum element in an array.
    // int x[5],i,max,min;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d ",i);
    //     scanf("%d",&x[i]);
    // }
    // max=x[0];
    // min=x[0];
    // for(i=1;i<=4;i++){
    //     if(x[i]>max){
    //         max=x[i];
    //     }
    //     if(x[i]<min){
    //         min=x[i];
    //     }
    // }
    // printf("maximun: %d",max);
    // printf("\nminimum: %d",min);

    
    // ****Question 4***
    // --> Write a c program to find second largest element in an array.
    // int x[5],i,j,t;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d:",i);
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
    // printf("second largest element: %d",x[i-2]);

    // ****Question 5****
    // -->Write a c program to copy all element from an array to another array.
    // int x[4],y[4],i;
    // for(i=0;i<=3;i++){
    //     printf("Enter value:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=3;i++){
    //     y[i]=x[i];
    //     printf("%d,",y[i]);
    // }

    // ****Question 6****
    // -->Write a c program to insert an element in an array.
    // int x[5],i,po,n;
    // for(i=0;i<=3;i++){
    //     printf("Enter values @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter number u want to insert: ");
    // scanf("%d",&n);
    // printf("Enter position: ");
    // scanf("%d",&po);
    // for(i=3;i>=po;i--){
    //     x[i+1]=x[i];
    // }
    // x[po]=n;

    // for(i=0;i<=4;i++){
    //     printf("%d,",x[i]);
    // }

    // ****Question 7****
    // -->Write a c program to delete an element from an array at specified position.
    // int x[5],i,po;
    // for(i=0;i<=4;i++){
    //     printf("Enter values @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // printf("Enter position of deletion: ");
    // scanf("%d",&po);
    // for(i=po;i<=3;i++){
    //     x[i]=x[i+1];
    // }
    // for(i=0;i<=3;i++){
    //     printf("%d,",x[i]);
    // }

    // ****Question 8***
    // -->Write a c program to print all unique element in the array.
    // int x[5],i,j,t,c=4;
    // for(i=0;i<=4;i++){
    //     printf("Enter value @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=3;i++){
    //     for(j=0;j<=3-i;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // for(j=0;j<=3;j++){
    //         if(x[j]==x[j+1]){
    //             x[j]=x[j+1];
    //             x[j+1]=x[j+2];
    //             c--;
    //         }
    //     }
    // for(i=0;i<=c;i++){
    //     printf("%d,",x[i]);
    // }

    // ***or****
    // int c,i,t,x[10],j;
    // for(i=0;i<=9;i++){
    //     printf("Enter value @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=8;i++){
    //     for(j=0;j<=8-i;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // for(i=0;i<=9;)
    // {
    //     c=0;
    //     t=x[i];
    //     while(i<=9 && x[i]==t){
    //         c++;
    //         i++;
    //     }
    //     if(c==1){
    //         printf("%d,",t);
    //     }
    // }


    // ****Question 9***
    // -->Write a c program to print all negative elements in an array.
    // int x[4],i;
    // for(i=0;i<=3;i++){
    //     printf("Enter value:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=3;i++){
    //     if(x[i]<0){
    //         printf("%d,",x[i]);
    //     }
    // } 

    // ****Question 10***
    // -->Write a c program to count total number of even and odd elements in an array.
    // int x[5],i,o=0,e=0;
    // for(i=0;i<=4;i++){
    //     printf("Enter values:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=4;i++){
    //     if(x[i]%2==0){
    //         e++;
    //     }
    //     else{
    //         o++;
    //     }
    // }
    // printf("Total even elements: %d",e);
    // printf("\nTotal odd elements: %d",o);

    // ****Question 11***
    // -->Write a c program to count total numbers of negative elements in an array.
    // int x[10],i,n=0;
    // for(i=0;i<=9;i++){
    //     printf("Enter number:");
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=9;i++){
    //     if(x[i]<0){
    //         n++;
    //     }
    // }
    // printf("Total negative elements: %d",n);

    // ****Question 12***
    // -->Write a c program to count total number of duplicate elements in an array.
    // int x[]={34,67,67,80,98,98,98,102,107,120};
    // int c,i,t,d=0;
    // for(i=0;i<=9;)
    // {
    //     c=0;
    //     t=x[i];
    //     while(i<=9 && x[i]==t){
    //         c++;
    //         i++;
    //     }
    //     if(c>1){
    //         printf("%d,",t);
    //         d++;
    //     }
    // }
    // printf("\nTotal duplicate elements: %d",d);
    

    // ****Question 13***
    // --->Write a c program to delete all duplicate elements from an array.
    // int c,i,t,x[10],j;
    // for(i=0;i<=9;i++){
    //     printf("Enter value @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=8;i++){
    //     for(j=0;j<=8-i;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // for(i=0;i<=9;)
    // {
    //     c=0;
    //     t=x[i];
    //     while(i<=9 && x[i]==t){
    //         c++;
    //         i++;
    //     }
    //     if(c==1){
    //         printf("%d,",t);
    //     }
    // }


    // ****Question 14***
    // Write a c program to count frequency of each element in an array.
    // int i,t,x[10],j,f;
    // for(i=0;i<=9;i++){
    //     printf("Enter value @ %d: ",i);
    //     scanf("%d",&x[i]);
    // }
    // for(i=0;i<=8;i++){
    //     for(j=0;j<=8-i;j++){
    //         if(x[j]>x[j+1]){
    //             t=x[j];
    //             x[j]=x[j+1];
    //             x[j+1]=t;
    //         }
    //     }
    // }
    // for(i=0;i<=9;i++){
    //     f=0;
    //     for(j=0;j<=9;j++){
    //         if(x[i]==x[j]){
    //             f++;
    //         }
    //     }
    //     printf("%d=%d\n",x[i],f);
    // }

    // ****Question 15****
    // --> Write a c program to merge two arrae to third array.
    int x[10],y[10],z[10],i;
    for(i=0;i<=9;i++){
        printf("Enter value:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++){
        printf("Enter value:");
        scanf("%d",&y[i]);
    }
    for(i=0;i<=9;i++){
        z[i]=x[i]+y[i];
    }
    for(i=0;i<=9;i++){
        printf("%d,",z[i]);
    }
}