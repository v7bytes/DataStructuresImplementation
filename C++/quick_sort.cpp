#include <iostream>
using namespace std;

void printArray(int A[],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<A[i]<<" ";
 }
}

int Partition(int A[],int low,int high)
{
 int pivot=A[low];
 int i=low+1;
 int j=high;
 int temp;

 do
 {
  while(A[i]<=pivot && i!=high)
  {
   i++;
  }
 
  while(A[j]>=pivot && j!=low)
  {
   j--;
  }

  if(i<j)
  {
   temp=A[i];
   A[i]=A[j];
   A[j]=temp;
  }
 
 } while(i<j);

 
 temp=A[low];
 A[low]=A[j];
 A[j]=temp;

 return j;

}

void quicksort(int A[],int low,int high)
{
 if(low<high)
 {
  int partition_index;

  partition_index=Partition(A,low,high);
  quicksort(A,partition_index + 1,high);
  quicksort(A,low,partition_index - 1);
 }
}

int main()
{
 int A[]={9,4,5,1,2,3,7,40,30,20};
 quicksort(A,0,9);
 printArray(A,10);

 return 0;
}
