#include<stdio.h>
#include<string.h>

int main(void)
{
    int c;
    printf("enter the choice:1 or 2");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
    char mystrg[60];
    int leng, g;
    scanf( "%s", mystrg );
    leng = strlen(mystrg);
    for(g = leng - 1; g >= 0; g--) {
        printf("%c", mystrg[g]);        
     }
        }
        case 2:
        {
        int n;
        int s=0;
        scanf( "%d", &n );    
        while(n!=0)
        {
        int a=n%10;
        s=s*10+a;
        n=n/10;
        }
        printf("%d",s);
        }
    }
}
