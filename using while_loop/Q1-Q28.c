#include<stdio.h>
void main(){
    // ***Question 1***
    // ***printf hello 10 times.
    // int i=1;
    // while(i<=10){
    //     printf("Hello..");
    //     i++;
    // }

    // ****Question 2****
    // ***print 2,4,6,8,10
    // int i=2;
    // while(i<=10){
    //     printf("%d ",i);
    //     i=i+2;
    // }

    // ****Question 3****
    // ***print 1,3,5,7,9
    // int i=1;
    // while(i<=10){
    //     printf("%d ",i);
    //     i=i+2;
    // }

    // ****Question 4******
    // ***print 10,9,8,7,6,5,4,3,2,1
    // int i=10;
    // while(i>=1){
    //     printf("%d ",i);
    //     i=i-1;
    // }

    // ****Question 5****
    // ***print 1,10,100,1000,10000
    // int i=1;
    // while(i<=10000){
    //     printf("%d ",i);
    //     i=i*10;
    // }

    // ****Question 6****
    // printf 10000,1000,100,10,1
    // int i=10000;
    // while(i>=1){
    //     printf("%d ",i);
    //     i=i/10;
    // }

    // ***Question 7***
    // print 1 1 1 2 4 8 3 9 27 4 16 64 5 25 125
    // int i=1,s,c;
    // while(i<=5){
    //     printf("%d,",i);
    //     s=i*i;
    //     printf("%d,",s);
    //     c=i*i*i;
    //     printf("%d,",c);
    //     i=i+1;
    // }

    // *****Question 8****
    // **Q->7,10,15,18,23,26,31,34
    // int i=7;
    // while(i<=34){
    //     printf("%d,",i);
    //     i=i+3;
    //     printf("%d,",i);
    //     i=i+5;
    // }

    // ***Question 9**
    // 90,85,75,70,60,55
    // int i=90;
    // while(i>=55){
    //     printf("%d,",i);
    //     i=i-5;
    //     printf("%d,",i);
    //     i=i-10;
    // }

    // *****Question 20 ****
    // find-> 1,2,5,10,17,26
    // int i=1,d=1;
    // while(i<=26){
    //     printf("%d,",i);
    //     i=i+d;
    //     d=d+2;
    // }

    // ***Question 11***
    // enter a number and find its table.**
    // int i,n=1,t;
    // printf("Enter number: ");
    // scanf("%d",&i);

    // while(n<=10){
    //     t=i*n;
    //     printf("%d,",t);
    //     n=n+1;
    // }

    // ******Question 12****
    // find->2,8,18,32,50
    // int i=2,d=6;
    // while(i<=50){
    //     printf("%d,",i);
    //     i=i+d;
    //     d=d+4;
    // }

    // *****Question 13****
    // find-> X*1+x*3+x*5+x*7……n
    // int i=1,x,n,s;
    // printf("Enter the value of X: ");
    // scanf("%d",&x);

    // printf("Enter the value of N: ");
    // scanf("%d",&n);

    // while(i<=n){
    //     s=x*i;
    //     i=i+2;
    //     printf("%d+",s);
    // }

    // *****Question 14***
    // find-> 1,2,4,8,16,32
    // int i=1,d=1;
    // while(i<=32){
    //     printf("%d,",i);
    //     i=i+d;
    //     d=d*2;
    // }

    // *****Question 15****
    // find-> 6,11,8,13,10,15,12
    // int i=6,j=11;
    // while(i<=12){
    //     printf("%d,",i);
    //     i=i+2;
    //     printf("%d,",j);
    //     j=j+2;
    // }

    // *****Question 16****
    // **Find the sum of first 5 values
    // int i=1,s;
    // while(i<=5){
    //     s=s+i;
    //     i=i+1;
    // }
    // printf("Sum is %d",s);

    // ***Question 17***
    // **Enter a number and find the sum from zero to that number.
    // int i=1,s,n;
    // printf("Enter a number: ");
    // scanf("%d",&n);

    // while(i<=n){
    //     s=s+i;
    //     i=i+1;
    // }
    // printf("Sum is %d",s);

    // ****Question 18***
    // ***enter total item and their prices and find the bill.
    // int i,x=1,y,s=0;
    // printf("Enter total items: ");
    // scanf("%d",&i);

    // while(x<=i){
    //     printf("Enter price: ");
    //     scanf("%d",&y);

    //     s=s+y;
    //     x=x+1;
    // }
    // printf("Total price: %d",s);

    // ****Question 19***
    // ****find the factorial of first five values.
    // int i=1,n=5;
    // while(1<n){
    //     i=i*n;
    //     n=n-1;
    // }
    // printf("Factorial is %d",i);

    // ****Question 20***
    // ***find-> 1,3,7,13,21,31
    // int i=1,d=2;
    // while(i<=31){
    //     printf("%d,",i);
    //     i=i+d;
    //     d=d+2;
    // }

    // ****Question 21***
    // ***find-> 10,20,40,70,110,160
    // int i=10,d=10;
    // while(i<=160){
    //     printf("%d,",i);
    //     i=i+d;
    //     d=d+10;
    // }

    // ****Question 22***
    // ***find-> 7,14,21,28,35,42,49,56,63,70,77,84
    // int i=7,d=7;
    // while(i<=84){
    //     printf("%d,",i);
    //     i=i+d;
    // }

    // ***Question 23****
    // find all those values which can be divisible by 7 till 100.
    // int i=1;
    // while(i<=100){
    //     if(i%7==0){
            // printf("%d,",i);
    //     }
    //     i=i+1;
    // }

    // ***Question 24***
    // find the sum of all those values which can be divided by 7 till 100
    // int i=1,s;
    // while(i<=100){
    //     if(i%7==0){
    //         printf("%d+",i);

    //         s=s+i;
    //     }
    //     i=i+1;
    // }
    // printf("\b=%d",s);

    // ****Question 25***
    // find the sum of all those values which can be divided by 7 or 11 till 100
    // int i=1,s;
    // while(i<=100){
    //     if(i%7==0 || i%11==0){
    //         printf("%d+",i);
    //         s=s+i;
    //     }
    //     i=i+1;
    // }
    // printf("\b=%d",s);

    // ****Question 26****
    // Find out the sum of even and odd no. from 1 to 10
    // int i=1,o=0,s=0;
    // while(i<=10){
    //     if(i%2==0){
    //         s=s+i;
    //     }
    //     else{
    //         o=o+i;
    //     }
    //     i=i+1;
    // }
    // printf("sum of even numbers: %d\n",s);
    // printf("sum of odd numbers: %d",o);

    // ****Question 27 ****
    // Find out the total no. of even and odd no. from 1 to 10 
    // int i=1,o=0,e=0;
    // while(i<=10){
    //     if(i%2==0){
    //         e++;
    //     }
    //     else{
    //         o++;
    //     }
    //     i=i+1;
    // }
    // printf("even numbers: %d\n",e);
    // printf("odd numbers: %d",o);

    // *****Question 28*****
    // Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.
    int i=100,s=0,t=0;
    printf("Integers divisible by 7: ");
    while(i<=200){
        if(i%7==0){
            t++;
            s=s+i;
            printf("%d,",i);
        }
        i=i+1;
    }
    printf("\nTotal Numbers divisible by 7: %d\n",t);
    printf("Sum of integers divisible by 7: %d",s);
}