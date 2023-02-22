#include<iostream>
using namespace std;
int main()
{
   int s;
   cout <<"Enter the size of array:";
   cin >> s;
   int arr[s];
   for(int i=0;i<s;i++)
   {
    cin >> arr[i];
   }
   for(int i=0;i<s-1;i++){
    for(int j=i+1;j<s;j++){
        int temp;
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
   }
   for(int i=0;i<s;i++)
   {
    cout <<arr[i];
   }

}