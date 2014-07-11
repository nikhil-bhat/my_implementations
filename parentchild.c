#include<stdio.h>
int main()
{
int pid=fork();
if(pid==0)
{
sleep(1000);
printf("child process\n");
execlp("/bin/ls","ls",NULL);
}
else
{wait(NULL);
printf("%d\n",pid);
printf("parent process\n");
}

return 0;


}
