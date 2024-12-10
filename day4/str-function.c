#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20], name[58] ;
    printf("enter your first name:");
    scanf("%s", f_name);
    printf("enter your last name:");
    scanf("%s", l_name);
    //strcpy=>stringcopy->strcpy(resultstring, orgsytring)
    strcpy(name, f_name);
    strcat(name, l_name);
    printf("full name: %s\n",name); //using string handling functions
    printf("full name: %s %s",f_name, l_name);
}