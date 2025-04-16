/*PROBLEM STATEMENT (DAY 2)
MOVE ALL ZEROES TO END

You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.

Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.
*/

// APPROACH 1 : USING A TEMPORARY ARRAY

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 0, 4, 3, 0, 5, 0};
    int temp[8],i,j=0;

    // start a loop to check each an every element
    for(i=0;i<8;i++)
    {
        // this condition only check number except 0
        if(arr[i]!=0)
        {
            // it will help to store a element in an temporary array.
            temp[j++]=arr[i];
        }
    }

    // this condition helps to print 0 in the end.
    while(j<8)
    {
        temp[j++]=0;
    }

    // this loop helps to store in a real array.
    for(i=0;i<8;i++)
    {
        arr[i]=temp[i];
    }

    // it helps to print an array.
    for(i=0;i<8;i++)
    {
     cout<<"\t"<<arr[i];
    }
}

/*COMPLEXCITY ANALYSIS

TIME  COMPLEXCITY: O(n).
SPACE COMPLEXCITY: O(n).*/


// APPROACH 2: IN THIS APPROACH WE USE EXTRA VARIABLE AS COUNT.

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 0, 4, 3, 0, 5, 0};
    int count=0,i;

    for(i=0;i<8;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }

    while(count<8)
    {
        arr[count]=0;
    }

    for(i=0;i<8;i++)
    {
        cout<<"\t"<<arr[i];
    }
}

/*COMPLEXITY ANALYSIS:
TIME  COMPLEXCITY : O(n)
SPACE COMPLEXCITY : O(1)*/


//APPROACH 3: WITH THE HELP OF SWAP VALUE AND TAKE A COUNT VARIABLE.

