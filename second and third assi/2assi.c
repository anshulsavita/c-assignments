#include<stdio.h>
void main(){
    //******Question 1*******
    // float i=250,a=1.25,b,c=100,d,e,t;
    // printf("Enter the number of calls:");
    // scanf("%f",&b);

    // if(b<=100){
    //     printf("Service charges: %.2f",i);
    // }
    // else if(b>100){
    //     d=b-100;
    //     e=d*1.25;
    //     t=250+e;
    //     printf("Extra charges: %.2f\n",e);
    //     printf("Total service charge: %.2f",t);
    // }

    //*******Question 2*******
    // int a;
    // printf("Enter a number: ");
    // scanf("%d",&a);

    // if(a%2==0){
    //     printf("Number = %d, it is a Even number",a);
    // }
    // else{
    //     printf("Number = %d, it is a Odd number",a);
    // }

    //*******Question 3*******
    // int i=100,a=0,s=0;
    // printf("Integers divisible by 7: ");
    // abc:
    // if(i%7==0){
    //     s=s+i;
    //     printf("%d,",i);
    //     a++;
    // }
    // i=i+1;
    // if(i<=200){
    //     goto abc;
    // }
    // printf("\nSum is: %d",s);
    // printf("\nTotal numbers: %d",a);

    //*******Question 4*********
    // int x;
    // printf("Enter a number: ");
    // scanf("%d",&x);

    // if(x>=1000){
    //     printf("Hugely positive...");
    // }
    // else if(x>=100 && x<=999){
    //     printf("Very positive...");
    // }
    // else if(x==0){
    //     printf("Zero...");
    // }
    // else if(x<0 && x>-100){
    //     printf("Negative...");
    // }
    // else if(x<=-100 && x>=-999){
    //     printf("Very negative...");
    // }
    // else if(x<=-1000){
    //     printf("Hugely negative... ");
    // }

    // ******Question 5*******
    // float m,h,bmi;
    // printf("Enter weight in kg: ");
    // scanf("%f",&m);
    // printf("Enter height in m: ");
    // scanf("%f",&h);

    // bmi=m/(h*h);
    // printf("your BMi is: %f\n",bmi);
    // if(bmi<15){
    //     printf("Very severely underweight..");
    // }
    // else if(bmi>=15.0 && bmi<16.0){
    //     printf("Severely underweight..");
    // }
    // else if(bmi>=16.0 && bmi<18.5){
    //     printf("Underweight..");
    // }
    // else if(bmi>=18.5 && bmi<25){
    //     printf("Normal(healthy weight)..");
    // }
    // else if(bmi>=25 && bmi<30){
    //     printf("Overweight..");
    // }
    // else if(bmi>=30 && bmi<35){
    //     printf("Obese Class 1st(Moderately obese)..");
    // }
    // else if(bmi>=35 && bmi<40){
    //     printf("Obese Class 2nd(Severely obese)..");
    // }
    // else{
    //     printf("Obese Class 3rd(Very severely obese)");
    // }

    // *******Question 6******
    float i,a,r,p;
    printf("Enter energy consumption: ");
    scanf("%f",&i);

    if(i>=0 && i<=200){
        p=i*0.50;
        printf("%.2f",p);
    }
    else if(i>=201 && i<=400){
        p=100+(i*0.65);
        printf("%.2f",p);
    }
    else if(i>=401 && i<=600){
        p=230+(i*0.80);
        printf("%.2f",p);
    }
}