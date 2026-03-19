#include<stdio.h>
void main(){
    // 19,20,21,24,3
    // ****Question 11*****
    // write a C program to count number of digits in any number.
    // int i=0,n;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     n=n/10;
    //     i++;
    // }
    // printf("%d",i);

    // ****Question 12****
    // write a c program to calculate sum of digits of any number.
    // int n,r,s=0;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     s=s+r;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****Question 13****
    // Write a c program to calculate product of digits of any number.
    // int n,r,p=1;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>1){
    //     r=n%10;
    //     p=p*r;
    //     n=n/10;
    // }
    // printf("%d",p);

    // ****Question 14****
    // write a c program to swap first and last digits of any number.
    // int n,r,s=0,t,p=1,a;
    // printf("Enter a number:");
    // scanf("%d",&n);
    // t=n;
    // r=n%10;
    // while(n>10){  
    //     n=n/10;
    //     p=p*10;
    // }
    // a=r*p;
    // a=a+(t%p);
    // a=a-r;
    // a=a+n;
    // printf("%d",a);

    // ****Question 15****
    // write a c program to find the sum of first and last digit of any number.
    // int n,r,s;
    // printf("Enter a number:");
    // scanf("%d",&n);
    // r=n%10;
    // while(n>10){
    //     n=n/10;  
    // }
    // s=n+r;
    // printf("%d",s);

    // ****Question 16****
    // write a c program to enter any number and print its reverse.
    // int n,r,s=0;
    // printf("Enter number:");
    // scanf("%d",&n);

    // while(n>0){
    //     r=n%10;
    //     s=s*10+r;
    //     n=n/10;
    // }
    // printf("%d",s);

    // ****Question 17****
    // Write a c program to enter any number and check whether the number is palindrome or not.
    // int n,r,s=0,t;
    // printf("Enter number:");
    // scanf("%d",&n);
    // t=n;
    // while(n>0){
    //     r=n%10;
    //     s=s*10+r;
    //     n=n/10;
    // }
    // if(t==s){
    //     printf("Palindrome number...");
    // }
    // else{
    //     printf("It's not a Palindrome number...");
    // }

    // ****Question 18****
    // write a c program to find frequency of each digit in a given integer.
    int n,r,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    printf("Enter number:");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        if(r==1){
            a++;
        }
        else if(r==2){
            b++;
        }
        else if(r==3){
            c++;
        }
        else if(r==4){
            d++;
        }
        else if(r==5){
            e++;
        }
        else if(r==6){
            f++;
        }
        else if(r==7){
            g++;
        }
        else if(r==8){
            h++;
        }
        else if(r==9){
            i++;
        }
        else{
            j++;
        }
        n=n/10;
    }
    printf("0=%d\n1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n7=%d\n8=%d\n9=%d\n",j,a,b,c,d,e,f,g,h,i);

    // ****Question 19**
    // Write a c program to enter any number and print it in words.
    // **incomplete...

    // ****Question 20***
    // Write a c program to print all ASCII character with their values.
    // ***incomplete...

    // ****Question 21****
    // Write a c program to find power of any number using for loop.
    // ***incomplete...

    // ****Question 22****
    // Write a c program to enter any number and print all factors of the number.
    // int n,i=1;
    // printf("Enter number:");
    // scanf("%d",&n); 

    // while(i<=n){
    //     if(n%i==0){
    //         printf("%d,",i);
    //     }
    //     i=i+1;
    // }

    // ****Question 23****
    // Write a c program to enter any number and calculate its factorial.
    // int n,p=1;
    // printf("Enter a number:");
    // scanf("%d",&n);

    // while(n>0){
    //     p=p*n;
    //     n=n-1;
    // }
    // printf("%d",p); 

    // ****Question 24***incomplete..
    // Write a c program to find HCF (GCD) of two numbers.
    // int n1,n2,i=1;
    // printf("Enter first number:");
    // scanf("%d",&n1);

    // printf("Enter second number:");
    // scanf("%d",&n2);

    // while(i<=n1){
    //     if(n1%i==0){
    //         printf("%d,",i);
    //         n1=n1/i;
    //     }
    //     i=i+1;
    // }
    // printf("\n");
    // i=1;
    // while(i<=n2){
    //     if(n2%i==0){
    //         printf("%d,",i);
    //         n2=n2/i;
    //     }
    //     i=i+1;
    // }

    // ****Question 25****
    // Write a c program to find LCM of two numbers.
    // int n1,n2,i=1,p=1;
    // printf("Enter first number:");
    // scanf("%d",&n1);

    // printf("Enter second number:");
    // scanf("%d",&n2);

    // while(i<=n1 || i<=n2){
    //     if(n1%i==0 && n2%i==0){
    //         printf("%d,",i);
    //         n1=n1/i;
    //         n2=n2/i;
    //         p=p*i;
    //         i=i+1;
    //     }
    //     else if(n1%i==0){
    //         printf("%d,",i);
    //         n1=n1/i;
    //         p=p*i;
    //         i=i+1;
    //     }
    //     else if(n2%i==0){
    //         printf("%d,",i);
    //         n2=n2/i;
    //         p=p*i;
    //         i=i+1;
    //     }
    //     else{
    //         i=i+1;
    //     }
    // }
    // printf("\n%d",p);
}