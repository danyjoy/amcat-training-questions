#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    //Variables and Arrays
    char a[20];
    int len,i;
    
    printf("\nEnter the string =>");
    scanf("%s",a);

    for(i=0;i<strlen(a);i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            ;
        }else
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
