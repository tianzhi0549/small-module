#include <stdio.h>
#include <string.h>
const char* getFileName(const char* path)
{
     int i=strlen(path)-1;
     for(;i>=0;i--)
     {
         if(path[i]=='\\') break;
     }
     return path+i+1;
}
int main()
{
     printf(getFileName("C:\\c\\123.txt"));
     getchar();
}
