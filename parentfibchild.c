#include<stdio.h>
int main(int argv,char *argvc[])
{   int number;
    int pid;
    if(argv==2)
    {
        number=atoi(argvc[1]);
        if(number <0)
            exit(4);
        else
        {
            pid=fork();
            if(pid==0)
            {
                int i=0;
                int j=1;
                int k;
                int num=0;
                printf("%d\n",i);
                printf("%d\n",j);
                for(num=2; num<number; num++)
                {   k=i+j;
                    printf("%d\n",k);
                    i=j;
                    j=k;

                }



            }
            else
            {
                wait(NULL);

            }



        }
    }
    else
    {
        exit(3);
    }


    return 0;




}
