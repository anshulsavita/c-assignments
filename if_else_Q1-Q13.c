#include<stdio.h>
void main(){

    // ******Question 1****
    // int a,b;
    // printf("Enter first number: ");
    // scanf("%d",&a);
    // printf("Enter second number: ");
    // scanf("%d",&b);

    // if(a>b){
    //     printf("%d is bigger then %d",a,b);
    // }
    // else{
    //     printf("%d is bigger then %d",b,a);
    // }

    // *******Question 2*****
    // int a,b,c;
    // printf("Enter first number: ");
    // scanf("%d",&a);
    // printf("Enter second number: ");
    // scanf("%d",&b);
    // printf("Enter third number: ");
    // scanf("%d",&c);

    // if(a>b && a>c){
    //     printf("Maximun number: %d",a);
    // }
    // else if(b>c && b>a){
    //     printf("Maximun number: %d",b);
    // }
    // else{
    //     printf("Maximun number: %d",c);
    // }

    // *****Question 3******
    // int a;
    // printf("Enter a number:");
    // scanf("%d",&a);

    // if(a%2==0){
    //     printf("It is a even number..");
    // }
    // else{
    //     printf("It is a odd number..");
    // }

    // *******Question 4*****
    // int i;
    // printf("Enter a Year:");
    // scanf("%d",&i);

    // if(i%4==0 && i%100!=0){
    //     printf("It is a Leap year..");
    // }
    // else{
    //     printf("It is not a Leap year..");
    // }

    // ******Question 5****
    // int a;
    // printf("Enter a number:");
    // scanf("%d",&a);

    // if(a>0){
    //     printf("It is a positive number..");
    // }
    // else if(a<0){
    //     printf("It is a negative number..");
    // }
    // else{
    //     printf("It is zero..");
    // }

    // *****Question 6*****
    // int a;
    // printf("Enter a number:");
    // scanf("%d",&a);

    // if(a%5==0 && a%11==0){
    //     printf("It is divisible by 5 and 11..");
    // }
    // else{
    //     printf("No, It is not divisible by 5 and 11..");
    // }

    // ******Question 7****
    // int i,a,r;
    // printf("Enter a amount: ");
    // scanf("%d",&i);

    // if(i>=2000){
    //     a=i/2000;
    //     r=i%2000;
    //     printf("2000Rs notes: %d\n",a);
    //     a=r/500;
    //     r=i%500;
    //     printf("500Rs notes: %d\n",a);
    //     a=r/100;
    //     r=i%100;
    //     printf("100Rs notes: %d\n",a);
    //     a=r/50;
    //     r=i%50;
    //     printf("50Rs notes: %d\n",a);
    //     a=r/10;
    //     r=i%10;
    //     printf("10Rs notes: %d\n",a);
    //     a=r/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }
    // else if(i>=500 && i<2000){
    //     a=i/500;
    //     r=i%500;
    //     printf("500Rs notes: %d\n",a);
    //     a=r/100;
    //     r=i%100;
    //     printf("100Rs notes: %d\n",a);
    //     a=r/50;
    //     r=i%50;
    //     printf("50Rs notes: %d\n",a);
    //     a=r/10;
    //     r=i%10;
    //     printf("10Rs notes: %d\n",a);
    //     a=r/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }
    // else if(i>=100 && i<500){
    //     a=i/100;
    //     r=i%100;
    //     printf("100Rs notes: %d\n",a);
    //     a=r/50;
    //     r=i%50;
    //     printf("50Rs notes: %d\n",a);
    //     a=r/10;
    //     r=i%10;
    //     printf("10Rs notes: %d\n",a);
    //     a=r/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }
    // else if(i>=50 && i<100){
    //     a=i/50;
    //     r=i%50;
    //     printf("50Rs notes: %d\n",a);
    //     a=r/10;
    //     r=i%10;
    //     printf("10Rs notes: %d\n",a);
    //     a=r/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }
    // else if(i>=10 && i<1){
    //     a=i/10;
    //     r=i%10;
    //     printf("10Rs notes: %d\n",a);
    //     a=r/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }
    // else{
    //     a=i/1;
    //     r=i%1;
    //     printf("1Rs notes: %d\n",a);
    // }

    // ******Question 12*****
    // int a;
    // printf("Enter a week number:");
    // scanf("%d",&a);

    // if(a>0 && a<2){
    //     printf("Sunday...");
    // }
    // else if(a>1 && a<3){
    //     printf("Monday...");
    // }
    // else if(a>2 && a<4){
    //     printf("Tuesday...");
    // }
    // else if(a>3 && a<5){
    //     printf("Wednesday...");
    // }
    // else if(a>4 && a<6){
    //     printf("Thursday...");
    // }
    // else if(a>5 && a<7){
    //     printf("Friday...");
    // }
    // else if(a>6 && a<8){
    //     printf("Saturday...");
    // }
    // else{
    //     printf("Invalid number...");
    // }

    // ****Question 13*****
    int a;
    printf("Enter month number:");
    scanf("%d",&a);

    if(a>0 && a<2){
        printf("It is January...\nIt has 31 days");
    }
    else if(a>1 && a<3){
        printf("It is February...\nIt has 28 days");
    }
    else if(a>2 && a<4){
        printf("It is March...\nIt has 31 days");
    }
    else if(a>3 && a<5){
        printf("It is April...\nIt has 30 days");
    }
    else if(a>4 && a<6){
        printf("It is May...\nIt has 31 days");
    }
    else if(a>5 && a<7){
        printf("It is June...\nIt has 30 days");
    }
    else if(a>6 && a<8){
        printf("It is July...\nIt has 31 days");
    }
    else if(a>7 && a<9){
        printf("It is August...\nIt has 30 days");
    }
    else if(a>8 && a<10){
        printf("It is September...\nIt has 31 days");
    }
    else if(a>9 && a<11){
        printf("It is October...\nIt has 30 days");
    }
    else if(a>10 && a<12){
        printf("It is November...\nIt has 31 days");
    }
    else if(a>11 && a<13){
        printf("It is December...\nIt has 30 days");
    }
    else{
        printf("Invalid number...");
    }
}