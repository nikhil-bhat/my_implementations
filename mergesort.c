#include<stdio.h>
int a[8]= {9,6,2,4,1,81,24,4};
void mergesort(int *a,int low,int high);
void merge(int *a,int left1,int left2,int right1,int right2);
void merge(int *a,int left1,int left2,int right1,int right2)
{
    int low=left1;
    int high=right2;
    int leftpoint=left1;
    int rightpoint=right1;
    int i=0;
    int temp[right2-left1+1];
    while((leftpoint<=left2)&&(rightpoint<=right2))
    {
        if(a[leftpoint]<a[rightpoint])
        {   temp[i]=a[leftpoint];
            leftpoint++;
            i++;
        }
        else
        {   temp[i]=a[rightpoint];
            rightpoint++;
            i++;
        }

    }
    while((leftpoint<=left2))
    {
        temp[i]=a[leftpoint];
        leftpoint++;
        i++;

    }

    while((rightpoint<=right2))
    {
        temp[i]=a[rightpoint];
        rightpoint++;
        i++;

    }
int d=0;
for(i=low;i<=high;i++)
a[i]=temp[d++];


}

void mergesort(int *a,int low,int high)
{
if(high>low)
{
printf("mergesorta,%d,%d\n",low,high);
mergesort(a,low,(low+high)/2);
mergesort(a,(low+high)/2+1,high);
merge(a,low,(low+high)/2,(low+high)/2+1,high);

}





}


int main()
{
int i=0;
for(i=0;i<=7;i++)
printf("%d\n",a[i]);


mergesort(a,0,7);
for(i=0;i<=7;i++)
printf("%d\n",a[i]);



}
