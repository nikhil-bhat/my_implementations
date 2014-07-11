#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *strrev(char *str)
{
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}


void add(char *a, char *b)
{   int size_a=strlen(a);
    int size_b=strlen(b);
    char c[100]="";
    int max=size_a>size_b?size_a+1:size_b+1;

    size_a--;
    size_b--;
    int p;
    int q;
    int carry=0;
    int sum=0;

    if(size_a>size_b)
    {   p=size_a;
        q=size_b;

        for (p=size_a; p>=0; p--)
        {
            if(q>=0)
            {
                sum=((int)(a[p]-48)+(int)(b[q]-48)+carry)%10;
                carry=((int)(a[p]-48)+(int)(b[q]-48)+carry)-sum;
                carry/=10;

                q--;
            }
            else
            {

                sum=((int)(a[p]-48)+carry)%10;
                carry=((int)(a[p]-48)+carry)-sum;
                carry/=10;



            }




            sprintf(c+strlen(c),"%d",sum);



        }


        if(carry==1)
            sprintf(c+strlen(c),"%d",carry);
        strrev(c);
        printf("%s\n",c);

    }
    else
    {

        p=size_a;
        q=size_b;

        for (q=size_b; q>=0; q--)
        {
            if(p>=0)
            {
                sum=((int)(b[q]-48)+(int)(a[p]-48)+carry)%10;
                carry=((int)(b[q]-48)+(int)(a[p]-48)+carry)-sum;
                carry/=10;

                p--;
            }
            else
            {

                sum=((int)(b[q]-48)+carry)%10;
                carry=((int)(b[q]-48)+carry)-sum;
                carry/=10;



            }




            sprintf(c+strlen(c),"%d",sum);



        }


        if(carry==1)
            sprintf(c+strlen(c),"%d",carry);
        strrev(c);
        printf("%s\n",c);
















    }
}
int main()
{   char *a=(char *)malloc(50*sizeof(char));
    char *b=(char *)malloc(50*sizeof(char));

    scanf("%s",a);
    scanf("%s",b);
    printf("\n");
    add(a,b);
    return 0;
}
