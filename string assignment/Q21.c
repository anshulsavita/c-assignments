#include<stdio.h>
#include<string.h>
void main(){
    // ****Question 21****
    // -->Write a c program to remove first occurance of a character from string.
    // char x[30],n;
    // int i,c=0;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         c=i;
    //         break;
    //     }
    // }
    // for(i=c;x[i];i++){
    //     x[i]=x[i+1];
    // }
    // printf("%s",x);

    // ****Question 22****
    // -->Write a c program to remove last occurance of a character from string.
    // char x[30],n;
    // int i,l;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character you want to find: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         l=i;
    //     }
    // }
    // for(i=l;x[i];i++){
    //     x[i]=x[i+1];
    // }
    // printf("%s",x);

    // ****Question 23****
    // -->Write a c program to remove all occurance f a character from string.
    char x[30],n;
    int i,j;
    printf("Enter string: ");
    gets(x);
    printf("Enter character you want to find: ");
    scanf("%c",&n);
    for(i=0;x[i];i++){
        if(x[i]==n){
            j=i;
            for(j;x[j];j++){
                x[j]=x[j+1];
            }
        }
    }
    printf("%s",x);
}