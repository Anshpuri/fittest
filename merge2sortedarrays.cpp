//
//  recursion2.cpp
//  
//
//  Created by ANSH PURI on 12/23/16.
//
//

#include <iostream>
using namespace std;
void mergetwosortedarrays(int half1[] , int size1 , int half2[] , int size2 , int output[])
{ if (size1<=1)
  {return;
    
  }
    int i=0,j=0,k=0;
    while(i<size1 && j<size2)
    {  if(half1[i]>half2[j])
       {
          output[k]=half2[j];
           j++;
          
       }
        else
        {
            output[k]=half1[i];
            i++;
        }
        k++;
    }
    
    while (i<size1) {
        output[k]=half1[i];
        k++;
        i++;
    }
    while (j<size2) {
        output[k]=half2[j];
        k++;
        j++;
    }
    return;
}




void mergeSort(int input[] , int size)
{
    if(size<=1)
  {
    return;
  }
    int arr[100];
    int b[100];
    int i,j;
    for (i=0; i<size/2; i++)
     {
        arr[i]=input[i];
     }
    int k=i;
    for (j=0; k<size; j++,k++)
     {
        b[j]=input[k];
     }
    int mid=size/2;
    mergeSort(arr , mid);
    mergeSort(b , size-mid);
    mergetwosortedarrays(arr ,  mid,b, size-mid , input);
}

int main()
{
    int a;
    cin>>a;
    int b[100];
    for (int i=0; i<a; i++) {
        cin>>b[i];
    }
    
    int arr[100];
    int output[100];
    mergeSort(b,a);
    for (int i=0; i<a; i++) {
        cout<<b[i];
    }
}

