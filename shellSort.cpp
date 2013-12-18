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
template <class T>
void shellSort(T* a,size_t n)
{
     for(int gap=n/2;gap>0;gap--)
     {
         for(int i=gap;i<n;i+=gap)
         {
              int j=i;
              while(j>0&&a[j-gap]>a[j])
              {
                  swap(a[j-gap],a[j]);
                  j-=gap;
              }
         }
     }
}
int main()
{
    int a[]={2,1,2,3,5,1};
    int len=sizeof(a)/sizeof(a[0]);
    shellSort(a,len);
    show(a,len);
    getchar();
}
