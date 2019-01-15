#include<stdio.h>
#include<stdlib.h>
int main(){
char firstname[256];
char lastname[256];
printf("What is your name?\n");
scanf("%s", firstname);
scanf("%s", lastname);
printf("Hello %s %s!\n", firstname, lastname);
return 0;
}
