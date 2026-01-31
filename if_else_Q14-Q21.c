#include<stdio.h>
void main(){
    // *****Question 14******
    // int a,b,c;
    // printf("Enter angle 1:");
    // scanf("%d",&a);
    // printf("Enter angle 2:");
    // scanf("%d",&b);
    // printf("Enter angle 3:");
    // scanf("%d",&c);

    // if(a+b+c==180){
    //     printf("It is a valid triangle..");
    // }
    // else{
    //     printf("It is not a valid..");
    // }

    // // ******Question 15*****
    // int a,b,c;
    // printf("Enter side 1:");
    // scanf("%d",&a);
    // printf("Enter side 2:");
    // scanf("%d",&b);
    // printf("Enter side 3:");
    // scanf("%d",&c);

    // if(a+b>c && a+c>b && b+c>a){
    //     printf("It is a valid triangle..");
    // }
    // else{
    //     printf("It is not a valid..");
    // }

    // *****Question 16****
    // int a,b,c;
    // printf("Enter side 1:");
    // scanf("%d",&a);
    // printf("Enter side 2:");
    // scanf("%d",&b);
    // printf("Enter side 3:");
    // scanf("%d",&c);

    // if(a==b==c){
    //     printf("It is an Equilateral Triangle..");
    // }
    // else if(a==b || b==c || a==c){
    //     printf("It is an Isosceles Triangle..");
    // }
    // else if(a!=b!=c){
    //     printf("It ia an Scalene Triangle..");
    // }

    // ****Question 17*****
    // float a,b,c,d,e;
    // printf("Enter value of a: ");
    // scanf("%f",&a);

    // printf("Enter value of b: ");
    // scanf("%f",&b);

    // printf("Enter value of c: ");
    // scanf("%f",&c);

    // d=(-b+sqrt(b*b-4*a*c))/(2*a);
    // e=(-b-sqrt(b*b-4*a*c))/(2*a);
    // printf("Root1 = %.2f\nRoot2 = %.2f",d,e);

    // ****Question 18*****
    // float a,b,c,d,p,l;
    // printf("Enter Cost price in Rs: ");
    // scanf("%f",&a);
    // printf("Enter Selling price in Rs: ");
    // scanf("%f",&b);

    // if(a>b){
    //     c=a-b;
    //     l=(c/a)*100;
    //     printsqrtf("You are in loss..\nLoss= %.2f Rs\nLoss percentage: %.2f%%",c,l);
    // }
    // else if(a<b){
    //     d=b-a;
    //     p=(d/a)*100;
    //     printf("You are in profit..\nProfit= %.2f Rs\nProfit percentage: %.2f%%",d,p);
    // }

    // // *****Question 19******
    // float p,h,b,m,c,t,per;
    // printf("Enter Physics marks: ");
    // scanf("%f",&p);
    // printf("Enter Chemistry marks: ");
    // scanf("%f",&h);
    // printf("Enter Biology marks: ");
    // scanf("%f",&b);
    // printf("Enter Mathematics marks: ");
    // scanf("%f",&m);
    // printf("Enter Computer marks: ");
    // scanf("%f",&c);

    // t=p+c+b+m+h;
    // per=t/5;

    // if(per>=90 && per<=100){
    //     printf("percentage: %.2f%%\nGrade A",per);
    // }
    // if(per>=80){
    //     printf("percentage: %.2f%%\nGrade B",per);
    // }
    // if(per>=70){
    //     printf("percentage: %.2f%%\nGrade C",per);
    // }
    // if(per>=60){
    //     printf("percentage: %.2f%%\nGrade D",per);
    // }
    // if(per>=40){
    //     printf("percentage: %.2f%%\nGrade E",per);
    // }
    // else{
    //     printf("percentage: %.2f%%\nGrade F",per);
    // }

    // // *****Question 20******
    // float i,da,hra,gs;
    // printf("Enter the basic salary: ");
    // scanf("%f",&i);

    // if(i>=100000){
    //     da=i*80/100;
    //     hra=i*20/100;
    //     gs=i+da+hra;
    //     printf("da: %.2f\n",da);
    //     printf("hra: %.2f\n",hra);
    //     printf("gross salary: %.2f\n",gs);
    // }
    // else if(i>=20000 && i<100000){
    //     da=i*90/100;
    //     hra=i*25/100;
    //     gs=i+da+hra;
    //     printf("da: %.2f\n",da);
    //     printf("hra: %.2f\n",hra);
    //     printf("gross salary: %.2f\n",gs);
    // }
    // else if(i>=30000 && i<20000){
    //     da=i*95/100;
    //     hra=i*30/100;
    //     gs=i+da+hra;
    //     printf("da: %.2f\n",da);
    //     printf("hra: %.2f\n",hra);
    //     printf("gross salary: %.2f\n",gs);
    // }
    // else{
    //     printf("invalid salary: %.2f",gs);
    // }

    // // *****Question 21******
    float i, a=0.50,e,b;
    printf("Enter electricity unit: ");
    scanf("%f",&i);

    if(i>=0 && i<=50){
        i=i*a;
        printf("Unit charges is: %.2f",i);
    }
    else if(i>50 && i<=150){
        i=i*0.75;
        printf("Unit charge is: %.2f",i);
    }
    else if(i>150 && i<=250){
        i=i*1.20;
        printf("Unit charge is: %.2f",i);
    }
    else{
        i=i*1.50;
        printf("unit charge is: %.2f",i);
    }

    e=i*20/100;
    e=e+i;
    printf("\nTotal charges: %.2f",e);
}