#include <iostream>
using namespace std;
template <class T>
void show(T* a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;     
}
inline int getLeft(int i)
{
    return 2*i+1;     
}
inline int getRight(int i)
{
    return 2*(i+1);
}
template <class T>
void maxHeapify(T*a,int root,int n)
{
      int left=getLeft(root);
      int right=getRight(root);
      int largest=root;
      if(left<n&&a[root]<a[left])
      {
          largest=left;
      }
      if(right<n&&a[largest]<a[right])
      {
          largest=right;
      }
      if(largest!=root)
      {
           swap(a[root],a[largest]);
           maxHeapify(a,largest,n);
      }
}
template <class T>
void buildHeap(T* a,int n)
{
    for(int i=n/2;i>=0;i--)
    {
         maxHeapify(a,i,n);     
    }   
}
template <class T>
void heapSort(T* a,int n)
{
      buildHeap(a,n);
      for(int i=n;i>1;i--)
      {
           swap(a[0],a[i-1]);
           maxHeapify(a,0,i-1);
      }
}
int main()
{
    int a[]={2,1,5,3,4,5,6};
    int len=sizeof(a)/sizeof(a[0]);
    heapSort(a,len);
    show(a,len);
    getchar();
    return 0;
}
