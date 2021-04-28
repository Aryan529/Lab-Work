#include<iostream>
#include<cstdlib>

using namespace std;

void swap(int *a, int *b) 
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}


int Partition(int a[], int low, int h) 
{
   int pivot, index, i;
   index = low;
   pivot = h;
   
   for(i = low; i < h; i++) 
   {
      if(a[i] < a[pivot]) 
      {
         swap(&a[i], &a[index]);
         index++;
      }
   }
   swap(&a[pivot], &a[index]);
   return index;
}


int RandomPivotPartition(int a[], int low, int h) 
{
   int pvt, n, temp;
   n = rand();
   pvt = low + n%(h-low+1);
   swap(&a[h], &a[pvt]);
   return Partition(a, low, h);
}


int QuickSort(int a[], int low, int h) 
{
   int pindex;
   if(low < h) 
   {
      pindex = RandomPivotPartition(a, low, h);
      QuickSort(a, low, pindex-1);
      QuickSort(a, pindex+1, h);
   }
   return 0;
}


int main() 
{
   int n, i;
   cout<<"\nEnter the number elements: ";
   cin>>n;
   int arr[n];
   for(i = 0; i < n; i++) 
   {
      cout<<"Enter element "<<i+1<<": ";
      cin>>arr[i];
   }
   QuickSort(arr, 0, n-1);
   cout<<"\nSorted Data ";
   for (i = 0; i < n; i++)
      cout<<"->"<<arr[i];
   return 0;
}

