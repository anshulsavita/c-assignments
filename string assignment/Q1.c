#include<stdio.h>
#include<string.h>
void main(){
    // ****Question 1****
    // -->Write a c program to find length of a string.
    // char x[30];
    // int l;
    // printf("Enter a string:");
    // gets(x);
    // l=strlen(x);
    // printf("length: %d",l);

    // ****Question 2***
    // -->Write a c program to copy one string to another string.
    // char x[30],y[30];
    // printf("Enter a string:");
    // gets(x);
    // strcpy(y,x);
    // printf("%s",y);

    // ****Question 3****
    // -->write a c program to cocatenate two strings.
    // char x[30],y[30],z[30];
    // printf("Enter first string:");
    // gets(x);
    // printf("Enter second string:");
    // gets(y);
    // strcpy(z,x);
    // strcat(z," ");
    // strcat(z,y);
    // printf("%s",z);

    // ****Question 4****
    // -->Write a c program to compare two strings.
    // char x[30],y[30];
    // int c;
    // printf("Enter first string:");
    // gets(x);
    // printf("Enter second string:");
    // gets(y);
    // c=strcmp(x,y);
    // if(c>0){
    //     printf("%s is greater then %s",x,y);
    // }
    // else if(c<0){
    //     printf("%s is greater then %s",y,x);
    // }
    // else{
    //     printf("Both are equal...");
    // }

    // ****Question 5****
    // -->Write a c program to convert lowercase string to uppercase.
    // char x[30];
    // printf("Enter a string:");
    // gets(x);
    // strupr(x);
    // printf("%s",x);

    // ****Question 6****
    // -->Write a c program to convert uppercase string to lowercase. 
    // char x[30];
    // printf("Enter a string:");
    // gets(x);
    // strlwr(x);
    // printf("%s",x);

    // ****Question 7****
    // -->Write a c program to toggle case of each character of a string.
    // char x[30];
    // int i;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
    //         if(x[i]>='a' && x[i]<='z'){
    //             x[i]=x[i]-32;
    //         }
    //         else if(x[i]>='A' && x[i]<='Z'){
    //             x[i]=x[i]+32;
    //         }
    //     }
    // }
    // printf("%s",x);

    // ****Question 8****
    // -->Write a c program to find total number of alphabets, digit or special character in a string.
    // char x[30];
    // int i,a=0,d=0,s=0,sps=0;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
    //         a++;
    //     }
    //     else if(x[i]>='0' && x[i]<='9'){
    //         d++;
    //     }
    //     else if(x[i]==' '){
    //         sps++;
    //     }
    //     else{
    //         s++;
    //     }
    // }
    // printf("Alphabets: %d\nDigits: %d\nSpaces: %d\nSpecial char: %d",a,d,sps,s);

    // ****Question 9****
    // -->Write a c program to count total number of vowels and consonentsina string.
    // char x[30];
    // int i,v=0,c=0;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
    //         if(x[i]=='a' || x[i]=='e' || x[i]=='i'|| x[i]=='o' || x[i]=='u'|| x[i]=='A' || x[i]=='E' || x[i]=='I'|| x[i]=='O' || x[i]=='U'){
    //             v++;
    //         }
    //         else{
    //             c++;
    //         }
    //     }
    // }
    // printf("Vowels: %d\nConsonents: %d",v,c);

    // ****Question 10****
    // --> Write a c program to count total number of word in a string.
    // char x[30];
    // int i;
    // float c=1;
    // printf("Enter string:");
    // gets(x);
    // for(i=0;x[i];i++){
    //     if(x[i]==' '){
    //         c++;
    //     }
    // }
    // printf("Total words: %.1f",c);

    // ****Question 11****
    // -->Write a c program to find reverse of a string.
    // char x[30];
    // printf("Enter a string:");
    // gets(x);
    // strrev(x);
    // printf("%s",x);

    // ****Quesstion 12****
    // -->Write a c program to check whether a string is palindrome or not.
    // char x[30],y[30];
    // printf("Enter string:");
    // gets(x);
    // strcpy(y,x);
    // strrev(x);
    // if(strcmpi(x,y)==0){
    //     printf("Palindrom number...");
    // }
    // else{
    //     printf("not palindrom...");
    // }

    // ****Question 13****incomplete...
    // -->write a c program to reverse order of words in a given string.
    // char x[30];
    // int i,sps,t;
    // printf("Enter string: ");
    // gets(x);
    // // l=strlen(x);
    // // printf("%d",l);
    // for(i=0;x[i];i++){
    //     if(x[i]==' '){
    //         sps++;
    //         t=i;
    //     }
    // }
    // for(i=t;x[i];i++){
    //     printf("%c",x[i]);
    // }

    // ****Question 14****
    // -->Write a c program to find first occurrence of a character in a given string
    // char x[30],n;
    // int i;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character you want to find: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         printf("%d",i);
    //         break;
    //     }
    // }

    // ****Question 15****
    // -->Write a c program to find last occurrences of a character in a given string.
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
    // printf("%d",l);

    // ****Question 16****
    // --> Write a c program to search all occurences of a character in given string.
    // char x[30],n;
    // int i;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character you want to find: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         printf("%d,",i);
    //     }
    // }

    // ****Question 17****
    // --> Write a c program to count occurances of a character in given string.
    // char x[30],n;
    // int i,c=0;
    // printf("Enter string: ");
    // gets(x);
    // printf("Enter character you want to find: ");
    // scanf("%c",&n);
    // for(i=0;x[i];i++){
    //     if(x[i]==n){
    //         c++;
    //     }
    // } 
    // printf("Total count: %d",c);

    // ****Question 18****
    // --> Write a c program to find highest frequency character in given string.
    // char x[30],t;
    // int i,j,c,f=0;
    // printf("Enter string: ");
    // gets(x);
    // for(i=0;x[i];i++){
    //     t=x[i];
    //     c=0;
    //     for(j=0;x[j];j++){
    //         if(x[j]==t){
    //             c++;
    //         }
    //     }
    //     if(c>=f){
    //         f=c;
    //         c=t;
    //     }
    // }
    // printf("highest frequency %c: %d",c,f);

    // ****Question 19****incomplete
    // --> Write a c program to find lowest frequency character in a string.
    // char x[30],t;
    // int i,j,c,f=1;
    // printf("Enter string: ");
    // gets(x);
    // for(i=0;x[i];i++){
    //     t=x[i];
    //     c=0;
    //     for(j=0;x[j];j++){
    //         if(x[j]==t){
    //             c++;
    //         }
    //     }
    //     if(c<=f){
    //         f=c;
    //         c=t;
    //     }
    // }
    // printf("lowest frequency %c: %d",c,f);

    // ****Question 20****
    // --> Write a c program to count frequency of each character in a string.
    char x[30],t;
    int i,j,f=0;
    printf("Enter string: ");
    gets(x);
    for(i=0;x[i];i++){
        t=x[i];
        f=0;
        for(j=0;x[j];j++){
            if(x[j]==t){
                f++;
            }
        }
        printf("frequency of %c: %d",t,f);
        printf("\n");
    }
}   