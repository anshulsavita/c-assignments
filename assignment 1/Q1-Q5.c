#include<stdio.h>

void main(){

    //// *****Question 1*****
    // int a,b,sum;

    // printf("Enter your first number: ");
    // scanf("%d",&a);

    // printf("Enter your second number: ");
    // scanf("%d",&b);

    // sum=a+b;
    // printf("Sum is: %d",sum);

    // // ******Question 2*****

    // int a,b,c;

    // printf("Enter your first number: ");
    // scanf("%d",&a);

    // printf("Enter your second number: ");
    // scanf("%d",&b);

    // c=a+b;
    // printf("Sum is: %d\n",c);

    // c=a-b;
    // printf("Subtraction is: %d\n",c);

    // c=a*b;
    // printf("Multiplication is: %d\n",c);

    // c=a/b;
    // printf("division is: %d\n",c);

    // c=a%b;
    // printf("Remainder is: %d\n",c);

    // // ******Question 3 */

    // int a,b,per;

    // printf("Enter the length  of a rectangle: ");
    // scanf("%d",&a);

    // printf("Enter the breadth of a rectangle: ");
    // scanf("%d",&b);

    // per= 2*(a+b);
    // printf("Perimeter of rectangle is: %d",per);

    //******Question 4 */

    int a,b,A;

    printf("Enter the length  of a rectangle: ");
    scanf("%d",&a);

    printf("Enter the breadth of a rectangle: ");
    scanf("%d",&b);

    A= a*b;
    printf("Area of a rectangle is: %d",A);

    //*******Question 5 */

    int r,d,c,a;

    printf("Enter the radius of a circle: ");
    scanf("%d",&r);

    d=2*r;
    printf("Diameter of a circle is: %d\n",d);

    c=3.14*d;
    printf("Circumference of a circle is: %d\n",c);

    a=3.14*r*r;
    printf("Area of a circle is: %d\n",a);
}