#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int jumpflag=1;
    char compile[100];
    int z=0;
    char ins;

    for(z=0; z<1000; z++)
        a[z]=(int)0;

    scanf("%s",compile);

    int i=0;
    int counter=0;
    int pointer=0;
    for(;;) //Read eval loop
    {

        switch(compile[i])
        {
        case '+': //increment
        {   a[pointer]++;
            break;
        }
        case '-': //decrement
        {   a[pointer]--;
            break;
        }

        case '>':  //goahead
        {   pointer++;
            break;
        }

        case '<': //goback
        {   pointer--;
            break;
        }

        case '.': //print
        {   printf("%c",a[pointer]);
            break;
        }

        case '[': //if a[pointer]is zero jump ahead

        {   if(a[pointer]==0)
            {
                counter=1;

                while(counter>0)
                {   ins=compile[++i];
                    if(ins=='[')
                        counter++;
                    else if(ins==']')
                        counter--;


                }
                jumpflag=0;
                i++;
            }
            break;
        }

        case ']': //return back to first matching brace
        {

            counter=1;

            while(counter>0)
            {   ins=compile[--i];
                if(ins=='[')
                    counter--;
                else if(ins==']')
                    counter++;


            }
            jumpflag=0;



            break;
        }

        }
        if(i>=strlen(compile))
            break;
        else
        {   if(jumpflag) //if jumplag is set
                i++;
            else
                jumpflag=1; //ipointer has been set by instruction
        }



    }

    return 0;

}












