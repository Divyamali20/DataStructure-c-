#include<iostream.h>
#include<conio.h>
Void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
Int partition(int arr[],int low,int high)
{
Int pivot=arr[high];
Int i=(low-1);
For(int j=low;j<=high-1;j++)
{
If(arr[j]<pivot)
{
I++;
Swap(&arr[i],&arr[j]);
}
}
Swap(&arr[i+1],&arr[j]);
Return(i+1);
}
Void quicksort(int arr[],int low,int high)
{
If(low<high)
{
Int pi=partition(arr,low,high);
Quicksort(arr,low,pi-1);
Quicksort(arr,pi+1,high);
}
}
Void main()
{
Int a[10],n,i,j;
Cout<<”enter size of array :”<<endl;
Cin>>n;
Cout<<”Enter the array Elements :”<<endl;
For(i=0;i<n;i++)
{
Cin>>a[i];
}
Quicksort(a,0,n-1);
Cout<<”Array after sorting”<<endl;
For(i=0;i<n;i++)
{
Cout<<a[i]<<” “<<endl;
}
Getch();
Clrscr();
}

