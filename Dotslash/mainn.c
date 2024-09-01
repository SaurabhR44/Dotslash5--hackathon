// int main()
// {
//     char a[100] = "Hello";
//     char b[100] = {'H','e','l','l','o','\0'};
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         printf("%s\n",a);
//         printf("%d",sizeof(a));
//     }
    
    
//     return 0;
// }
#include <stdio.h>
int stri(char *ptr,int *ptr2);
int main()
{
    char *ptr;
    int *count;
    char s[1000] = {'S','H','R','A','V','A','N','\0'};
    stri(s,count);
    printf("%d",*count);
    return 0;
}

int stri(char *ptr,int *count){
    while (*ptr!='\0')
    {
        *count++;
    }
    return *count;

}