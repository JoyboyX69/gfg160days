// PROBLEM STATEMENT (DAY 1)
// Given an array arr Return the second largest distinct element from an array if the second largest element does not exist then return -1.

// SAMPLE TEST CASE:

// INPUT :ARR[]={12,35,1,10,34,1}
// OUTPUT:34

// INPUT :ARR[]={10,5,10}
// OUTPUT:5

// INPUT :ARR[]={10,10,10}
// OUTPUT:-1


// APPROACH 1: USING SORTING
#include<iostream>
using namespace std;

int main()
{
    // Take a given values
    int arr[]={12,35,1,10,34,1};
    int i,j,count=0;
    int temp; /*temp helps to swap the values of an array*/
    
    // I do fist sorting an array
    cout<<"\nElement of Array: ";
    for(i=0;i<6;i++)
    {
        cout<<"\t"<<arr[i];
    }
    for(i=0;i<6;i++)
    {
        for(j=i;j<6;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }    

    // And then print the sorted array
        cout<<"\nElement of Array In Sorted Array: ";
    for(i=0;i<6;i++)
    {
        cout<<"\t"<<arr[i];
    }
    // checking only n-1 element of an array
    for(i=0;i<5;i++)
    {
        // checking each element of an array to find out the 2nd largest number
        if(arr[i]!=arr[i+1])
        {
            cout<<"\n2nd Largest No is "<<arr[i+1];
            break;
        }
        else
        {
            count++;
        }

    }
    
    // if all element of an array are same then print -1
    if(count==5)
cout<<"\nAll element are same -1";
    

}