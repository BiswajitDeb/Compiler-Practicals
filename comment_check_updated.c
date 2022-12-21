#include<stdio.h>
#include<stdbool.h>
int main()
{
    int size=200;
    bool comment=false;
    char str[size];
    printf("Enter a string : ");
    gets(str);
    printf("The given string is : ");
    printf("%s",str);

    for(int i=0;i<size;i++)
    {
    if(str[i]=='/' && str[i+1]=='/')
        comment=true;

    else if(str[i]=='/' && str[i+1]=='*')
        {
            for(int i=2;i<size;i++)
            {
                if(str[i]=='*' && str[i+1]=='/')
                    comment=true;
            }
        }
    }


    if(comment==false)  printf("\nThe input doesn't have any comment");
    else printf("\nThe input has a comment");
}
