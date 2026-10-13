
/* string in c

   s/a/n/j/u/0
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>//mandotary when using the string handling funuctions
int main()
{
    //first chapter


    char name[]="sanju";
    printf("name is:%s\n",name);

    char place[10]={'k','o','c','h','i','\0'};
    printf("place:%s\n",place);

    place[0]='K';
    printf("place:%s\n",place);

    //second chapter

    char message[]="welcome to c programming.\n";
    //finding the length of message using strlen()
    int length=strlen(message);
    printf("length of the string is:%d\n",length);


    //third chapter

    char Name[20];
    printf("please enter the name:");
    scanf("%[^\n])",Name);
    printf("name:%s\n",Name);


    //fourth chapter

    char NAME[20];
    printf("please enter the name:");
    //reading the name using fgets()
    fgets(name,sizeof(name),stdin);

    //printing the name read using the fgets()
    printf("name of the student:%s\n",NAME);



    return 0;
}
