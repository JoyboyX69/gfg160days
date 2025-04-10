// PROBLEM STATEMENT (DAY 1)
// Given an array arr Return the second largest distinct element from an array if the second largest element does not exist then return -1.

// SAMPLE TEST CASE:

// INPUT :ARR[]={12,35,1,10,34,1}
// OUTPUT:34

// INPUT :ARR[]={10,5,10}
// OUTPUT:5

// INPUT :ARR[]={10,10,10}
// OUTPUT:-1

#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,5,10};
    int i,j;
    int temp;
    
    cout<<"\nElement of Array: ";
    for(i=0;i<3;i++)
    {
        cout<<"\t"<<arr[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }    

        cout<<"\nElement of Array In Sorted Array: ";
    for(i=0;i<3;i++)
    {
        cout<<"\t"<<arr[i];
    }

    // cout<<"\nSecond Largest Number Is "<<arr[2];

}