#include<stdio.h>
#include<math.h>
void main(){
    // ****Question 26***
    // Write a c program to check whether a number is prime number or not.
    // int n,i=2;
    // printf("Enter number:");
    // scanf("%d",&n);

    // while(i<n){
    //     if(n%i==0){
    //         break;
    //     }
    //     i=i+1;
    // }
    // if(i==n){
    //     printf("It's a prime number..");
    // }
    // else{
    //     printf("not a prime number..");
    // }

    // ****Question 27***
    // Write a c program to check wheather a number is a Armstrong number or not.
    // int n,t,i=0,s=0,r,y;
    // float x;
    // printf("Enter number:");
    // scanf("%d",&n);
    // t=n;
    // y=t;
    // while(n>0){
    //     n=n/10;
    //     i++;
    // }
    // while(t>0){
    //     r=t%10;
    //     t=t/10;
    //     x=pow(r,i);
    //     s=s+x;
    // }
    // if(s==y){
    //     printf("Armstrong number..");
    // }
    // else{
    //     printf("Not an Armstrong number...");
    // }

    // ****Question 28***
    // Write a c program to check whether a number is perfect number or not.
    // int n,i=1,s=0,t;
    // printf("Enter number:");
    // scanf("%d",&n);

    // t=n;
    // while(i<n){
    //    if(n%i==0){
    //        s=s+i;
    //    }
    //    i=i+1;
    // }
    // if(t==s){
    //    printf("It's a Perfect number..");
    // }
    // else{
    //    printf("Not a Perfect number..");
    // }

    // ****Question 29****
    // Write a c program to check whether a number is Strong number or not.
    // int n,r,p=1,s=0,t;
    // printf("Enter number:");
    // scanf("%d",&n);
    // t=n;
    // while(n>0){
    //     r=n%10;
    //     p=1;
    //     while(r>1){
    //         p=p*r;
    //         r=r-1;
    //     }
    //     s=s+p;
    //     n=n/10;
    // }
    // if(s==t){
    //     printf("It's a Strong number..");
    // }
    // else{
    //     printf("Not a Strong number..");
    // }

    // ****Question 30****
    // write a c program to print all Prime numbers between 1 to n.
    // int n=1,i=2,x;
    // printf("Enter number:");
    // scanf("%d",&x);

    // while(n<=x){
    //     i=2;
    //     while(i<n){
    //         if(n%i==0){
    //             break;
    //         }
    //         i=i+1;
    //     }
    //     if(n==i){
    //         printf("%d,",n);
    //     }
    //     n=n+1; 
    // }

    // ****Question 31****
    // Write a c program to print all Armstrong numbers between 1 to n.
    // int n,r,i,y,t,s,z=1;
    // float x;
    // printf("Enter number:");
    // scanf("%d",&n);
    
    // while(z<=n){
    //     s=0;
    //     i=0;
    //     t=z;
    //     y=t;
    //     while(t>0){
    //         t=t/10;
    //         i++;
    //     }
    //     t=z;
    //     while(t>0){
    //         r=t%10;
    //         t=t/10;
    //         x=pow(r,i);
    //         s=s+x;
    //     }
    //     if(y==s){
    //         printf("%d ",s);
    //     }
    //     z=z+1;
    // }

    // ****Question 32****
    // Write a c program to print all perfect numbers between 1 to n.
    // int n,i,s,t,x=1;
    // printf("Enter number:");
    // scanf("%d",&n);

    // while(x<=n){
    // t=x;
    // s=0;
    // i=1;
    // while(i<x){
    //    if(x%i==0){
    //        s=s+i;
    //    }
    //    i=i+1;
    // }
    // if(t==s){
    //    printf("%d,",s);
    // }
    // x=x+1;
    // }

    // ****Question 33****
    // Write a c program to print all strong numbers between 1 to n.
    // int n,r,p=1,s,t,x=1;
    // printf("Enter number:");
    // scanf("%d",&n);

    // while(x<=n){
    // t=x;
    // s=0;
    // while(x>0){
    //     r=x%10;
    //     p=1;
    //     while(r>1){
    //         p=p*r;
    //         r=r-1;
    //     }
    //     s=s+p;
    //     x=x/10;
    // }
    // x=t;
    // if(s==t){
    //     printf("%d,",s);
    // }
    // x=x+1;
    // }

    // ****Question 34****
    // Write a c program to enter any number and print its prime factors.
    // int n,i=2;
    // printf("Enter number:");
    // scanf("%d",&n);

    // while(i<=n){
    //     if(n%i==0){
    //         n=n/i;
    //         printf("%d,",i);
    //     }
    //     else{
    //         i=i+1;
    //     }        
    // }


    // ****Question 35***
    // Write a c program to find sum of all prime numbers between 1 to n.
    // int n=1,i=2,x,s=0;
    // printf("Enter number:");
    // scanf("%d",&x);

    // while(n<=x){
    //     i=2;
    //     while(i<n){
    //         if(n%i==0){
    //             break;
    //         }
    //         i=i+1;
    //     }
    //     if(n==i){
    //         s=s+n;
    //     }
        
    //     n=n+1; 
    // }
    // printf("%d",s);

    // ****Question 36****
    // Write a c program to print Fibonacci series up to n terms.
    // ***not done***

    // ****Question 37*** not don**
    // Write a c program to find one's complement of a binary number.
    // int n,p=1,s=0,r;
    // printf("Enter a binary number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     s=s+(r*p);
    //     p=p*10;
    //     // s++;
    //     n=n/10;
    // }
    // printf("%d",s);
    
    // ****Question 38****
    // Write a c program to find two's complement of a binary number.
    // not done****

    // ****Question 39***
    // Write a c program to convert binary to octal number system.
    // int n;
    // printf("Enter a binary number:");
    // scanf("%d",&n);
    // npt done***

    // ****Question 40***
    // Write a c program to convert binary to decimal number system.
    // int r,n,p=1,s=0;
    // printf("Enter a binary number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     s=s+(r*p);
    //     p=p*2;
    //     n=n/10;
    // }
    // printf("%d",s); 

    // ****Question 41***
    // Write a c program to convert binary number to hexadecimal number system.
    // not done***

    // ****Question 42***
    // Write a c program to convert octal to binary number system.
    // **not done***

    // ****Question 43***
    // write a c program to convert octal to decimal number system.
    // int r,n,p=1,s=0;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     s=s+(r*p);
    //     p=p*8;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****Question 44****
    // Write a c program to convert octal to hexadecimal number system.  
    // **not done**

    // ****Question 45****
    // write a c program to convert decimal to binary number system.
    // int n,s=0,p=1,r;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%2;
    //     s=s+(r*p);
    //     p=p*10;
    //     n=n/2;
    // }
    // printf("%d",s);

    // ****Question 46***
    // write a c program to convert decimal to octal number system.
    // int n,s=0,p=1,r;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%8;
    //     s=s+(r*p);
    //     p=p*10;
    //     n=n/8;
    // }
    // printf("%d",s);

    // ****Question 47****incomplete**
    // Write a c program to convert decimal to hexadecimal number system.
    // int n,r,s=0,p=1;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%16;
    //     s=s+(r*p);
    //     p=p*10;
    //     n=n/16;
    //     if(s>=0 && s<=9){
    //         printf("%d",s);
    //     }
    //     else if(s==10){
    //         printf("A");
    //     }
    //     else if(s==11){
    //         printf("B");
    //     }
    //     else if(s==12){
    //         printf("c");
    //     }
    //     else if(s==13){
    //         printf("D");
    //     }
    //     else if(s==14){
    //         printf("E");
    //     }
    //     else{
    //         printf("F");
    //     } 
    // }

    // ****Questin 48****
    // Write a c program to convert hexadecimal to binary number system.
    // ***incomplete***

    // ****Question 49****
    // Write a c program to convert hexadecimal to octal number system.
    // ***incomplete***

    // ****Question 50****
    // Write a c program to convert hexadecimal to decimal number system.
    // incomplete****

    // ****Question 51****
    // Write a c program to print pascal triangle upto n rows.
    // ****incommplete**
       
}

