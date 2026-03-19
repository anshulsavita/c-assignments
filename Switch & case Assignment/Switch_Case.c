#include<stdio.h>
#include<math.h>
void main(){
    // ****Question 2****
    // **Write a c program to print day of week name using switch case.
//     int n;
//     do{
//     printf("Main menu:\n");
//     printf("1:Monday\n2:Tuesday\n3:Wednesday\n4:Thursday\n5:Friday\n6:Saturday\n7:Sunday\n8:Exit\n");

//     printf("Enter your choice: ");
//     scanf("%d",&n);

//     switch(n){
//         case 1:
//         printf("Monday..");
//         break;

//         case 2:
//         printf("Tuesday..");
//         break;

//         case 3:
//         printf("Wednesday..");
//         break;

//         case 4:
//         printf("Thursday..");
//         break;

//         case 5:
//         printf("Friday..");
//         break;

//         case 6:
//         printf("Saturday..");
//         break;

//         case 7:
//         printf("Sunday..");
//         break;

//         case 8:
//         printf("Good bye!..");
//         break;

//         default:
//         printf("Wrong number..");
//         break;
//     }
//     printf("\n\n");
// }while(n!=8);

//  ****Question 3****
// Write a c program to print total number of days ina month using switch and case. 
//     int n;
//     do{
//     printf("Main menu\n");
//     printf("1:January\n2:February\n3:March\n4:April\n5:May\n6:June\n7:July\n8:August\n9:September\n10:October\n11:November\n12:December\n13:Exit\n");

//     printf("Enter month number: ");
//     scanf("%d",&n);

//     switch(n){
//         case 1: 
//         printf("It's have 31 days...");
//         break;

//         case 2:
//         printf("It's have 28 days...");
//         break;

//         case 3:
//         printf("It's have 31 days...");
//         break;

//         case 4:
//         printf("It's have 30 days...");
//         break;

//         case 5:
//         printf("It's have 31 days...");
//         break;

//         case 6:
//         printf("It's have 30 days...");
//         break;

//         case 7:
//         printf("It's have 31 days...");
//         break;

//         case 8:
//         printf("It's have 31 days...");
//         break;

//         case 9:
//         printf("It's have 30 days...");
//         break;

//         case 10:
//         printf("It's have 31 days...");
//         break;

//         case 11:
//         printf("It's have 30 days...");
//         break;

//         case 12:
//         printf("It's have 31 days...");
//         break;

//         case 13:
//         printf("Good bye!..");
//         break;

//         default:
//         printf("Wronge number..");
//         break;
//     }
//     printf("\n\n");
// }while(n!=13);

// ****Question 4***
// Write a c program to find maximum between two numbers using switch case.
//     int n1,n2,ch;
//     do{
//     printf("Enter first number: ");
//     scanf("%d",&n1);
//     printf("Enter second number: ");
//     scanf("%d",&n2);

//     printf("Main menu\n");
//     printf("1:Maximum\n2:Minimum\n3:Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d",&ch);

//     switch(ch){
//         case 1:
//         if(n1>n2){
//             printf("Maximum number: %d",n1);
//         }
//         else{
//             printf("Maximum number: %d",n2);
//         }
//         break;

//         case 2:
//         if(n1<n2){
//             printf("Minimum number: %d",n1);
//         }
//         else{
//             printf("Minimum number: %d",n2);            
//         }
//         break;

//         case 3:
//         printf("Good bye!...");
//         break;

//         default:
//         printf("Wrong number...");
//         break;
//     }
//     printf("\n");
// }while(ch!=3);

// ****Questionn 5****
// Write a c program to check whether a number is even or odd using switch and case.
//     int n,ch;
//     do{
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     printf("Menu\n");
//     printf("1:Even\n2:Odd\n3:Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d",&ch);

//     switch(ch){
//         case 1:
//         if(n%2==0){
//             printf("%d is a Even number.",n);
//         }
//         else{
//             printf("it's not a even number..");
//         }
//         break;

//         case 2:
//         if(n%2!=0){
//             printf("%d is a Odd number.",n);
//         }
//         else{
//             printf("it's not a odd number..");
//         }
//         break;

//         case 3:
//         printf("Good bye!...");
//         break;

//         default:
//         printf("Wrong number..");
//         break;
//     }
//     printf("\n\n");
// }while(ch!=3);

// ****Question 6****
// Write a c program to find roots of aquadratic equation using switch case.
//     int a,b,c,ch,r1,r2;
//     do{
//     printf("Enter first,second and third number:");
//     scanf("%d %d %d",&a,&b,&c);

//     printf("Menu\n");
//     printf("1:For Positive value\n2:For negative value\n3:Exit\n");
//     printf("Enter your choice:");
//     scanf("%d",&ch);

//     switch(ch){
//         case 1:
//         r1=(-b+sqrt(b*b-4*a*c))/2*a;
//         printf("%d",r1);
//         break;

//         case 2:
//         r2=(-b-sqrt(b*b-4*a*c))/2*a;
//         printf("%d",r2);
//         break;

//         case 3:
//         printf("Good bye...");
//         break;

//         default:
//         printf("Wrong number!");
//         break;
//     }
//     printf("\n");
// }while(ch!=3);

    // ****Question 7***
    // Write a c program to create simple Calculator using switch case.
    int n1,n2,x,ch;
    do{
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Menu\n");
    printf("1:Addition\n2:Substraction\n3:Multiplication\n4:Division\n5:Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
        x=n1+n2;
        printf("%d",x);
        break;

        case 2:
        x=n1-n2;
        printf("%d",x);
        break;

        case 3:
        x=n1*n2;
        printf("%d",x);
        break;

        case 4:
        x=n1/n2;
        printf("%d",x);
        break;

        case 5:
        printf("Good bye..");
        break;

        default:
        printf("Wrong number...");
        break;
    }
    printf("\n\n");
    }while(ch!=5);
}