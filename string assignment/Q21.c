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
    // -->Write a c program to remove all occurance of a character from string.
    // char x[30],n;
    // int i,j;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character you want to find: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         j=i;
    //         for(j;x[j];j++){
    //             x[j]=x[j+1];
    //         }
    //     }
    // }
    // printf("%s",x);

    // ****Question 24****incomplete 
    // --Write a c program to remove all repeated charaters from a given string.
    // char x[30];
    // int i,j,t;
    // printf("Enter string: ");
    // gets(x);

    // for(i=0;x[i];i++){
    //     if(x[i]==x[i+1]){
    //         for(j=i;x[j];j++){
    //             x[j]=x[j+1];
    //         }
    //     }
    // }
    // printf("%s",x);

    // ****Question 25****
    // --Write a c program to replace first occurance of a character with another in a string.
    // char x[30],n,t;
    // int i,c=0;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character: ");
    // scanf(" %c",&n);
    // printf("Enter character to swap: ");
    // scanf(" %c",&t);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         x[i]=t;
    //         break;
    //     }
    // }  
    // printf("%s",x);

    // ****Question 26****
    // -- Write a c program to replace last occurance of a character with another in a string.
    // char x[30],n1,n2;
    // int i,l;
    // printf("Enter string:");
    // gets(x);
    // printf("Enter you want to replace:");
    // scanf(" %c",&n1);
    // printf("Enter you want to replace with:");
    // scanf(" %c",&n2);
    // l=strlen(x);
    // for(i=l;i>=0;i--){
    //     if(x[i]==n1){
    //         x[i]=n2;
    //         break;
    //     }
    // } 
    // printf("%s",x);

    // ****Question 27***
    // -- Write a c program to replace all occurance of a character with another in a string.
    // char x[30],n1,n2;
    // int i;
    // printf("Enter string:");
    // gets(x);
    // printf("Enter you want to replace:");
    // scanf(" %c",&n1);
    // printf("Enter you want to replace with:");
    // scanf(" %c",&n2);
    // for(i=0;x[i];i++){
    //     if(x[i]==n1){
    //         x[i]=n2;
    //     }
    // } 
    // printf("%s",x);

    // ****Question 28***incomplete
    // --Write a c program to find first occurance of a word in a given string.
    char x[30],y[30];
    int i,j,c,l;
    printf("Enter line: ");
    gets(x);
    printf("Enter a word: ");
    gets(y);
    l=strlen(y);
    for(i=0;x[i];i++){
        c=0;
        for(j=0;x[j];j++){
            if(y[j]==x[i]){
                c++;
            }
            if(x[i]==' '){
                break;
            }
        } 
        if(c==l){
            printf("%d",i);
        }   
    }
    
    // printf("");


}