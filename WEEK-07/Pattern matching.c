#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,m,j=0;
    char text[20],ptrn[20];
    printf("Enter the Text\n");
    scanf("%s",text);
    printf("Enter the pattern to be matched\n");
    scanf("%s",ptrn);
    n=strlen(text);
    m=strlen(ptrn);
    printf("n=%d",n);
    printf("\nm=%d",m);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while(j<m && text[i+j]==ptrn[j])
        {
            j++;
            printf("\ni=%d",i);
            printf("\nj=%d",j);
        }
        if(j==m)
        {
            printf("\npattern is matched at the position %d",i+1);
            return 1;
        }
    }
    printf("\nPattern does not match");
    return 0;
}

