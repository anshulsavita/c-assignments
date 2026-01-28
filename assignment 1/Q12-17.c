#include<stdio.h>
void main(){

    // // *****Question 12***
    // float x,y,z;
    // printf("Enter the first angle of triangle: ");
    // scanf("%f",&x);

    // printf("Enter the second angle of triangle: ");
    // scanf("%f",&y);

    // z=180-(x+y);
    // printf("Third angle of triangle is: %.2f",z);

    // // *****Question 13***
    // float b,h,a;
    // printf("Enter the Base of triangle: ");
    // scanf("%f",&b);

    // printf("Enter the height of triangle: ");
    // scanf("%f",&h);

    // a=(1.0/2.0)*b*h;
    // printf("Area of triangle is: %.2f",a);

    // //****Question 14 */

    // float a,A;
    // printf("Enter the length of one side of the triangle: ");
    // scanf("%f",&a);

    // A=0.433*a*a;
    // printf("Area of an equilateral triangle is: %.2f",A);

    // //****Question 15 */

    // float m,c,p,h,e,t,av,per;
    // printf("Enter Maths marks: ");
    // scanf("%f",&m);

    // printf("Enter Chemistry marks: ");
    // scanf("%f",&c);

    // printf("Enter Physics marks: ");
    // scanf("%f",&p);

    // printf("Enter Hindi marks: ");
    // scanf("%f",&h);

    // printf("Enter English marks: ");
    // scanf("%f",&e);

    // t=m+c+p+h+e;
    // printf("Total number is: %.2f\n",t);

    // av=t/5;
    // printf("Average is: %.2f\n",av);

    // per=(t/500)*100;
    // printf("Perccentage is: %.2f\n",per);

    // // ******Question 16****

    // float P,R,T,si;
    // printf("Enter the principal amount: ");
    // scanf("%f",&P);

    // printf("Enter the rate of interest: ");
    // scanf("%f",&R);

    // printf("Enter the time: ");
    // scanf("%f",&T);

    // si=P*R*T/100;
    // printf("Simple interest is: %.2f",si);

    // *****Question 17******

    float P,R,T,A,ci;
    printf("Enter the principal amount: ");
    scanf("%f",&P);

    printf("Enter the rate of interest: ");
    scanf("%f",&R);

    printf("Enter the time: ");
    scanf("%f",&T);

    A = P * pow((1 + R/100), T);
    ci=A-P;

    printf("Compound interest is: %.2f",ci);




}