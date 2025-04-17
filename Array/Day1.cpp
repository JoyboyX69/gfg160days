// PROBLEM STATEMENT (DAY 1)
// FIND THE SECOND LARGEST NUMBER
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

/*COMPLEXITY ANALYSIS:
TIME  COMPLEXCITY : O(n*log(n))
SPACE COMPLEXCITY : O(1)*/

// APPROACH 2: USING TWO ITERATION

#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={35,35,35,35,35,35};
    int i;  //i for loop

    // Taking a larget and second_largest variable as a integers  
    int largest=-1,second_largest=-1;

    // first step to find a highest value in an array
    for(i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    /*then check each and every element which is second largest number and compare with largest to check this is 
    second largest number.*/
   for(i=0;i<6;i++)
   {
    if(arr[i]>second_largest && arr[i]!=largest)
    second_largest=arr[i];
   }

//    print the second largest number.
   cout<<second_largest;
}

/*COMPLEXITY ANALYSIS:
TIME  COMPLEXCITY : O(n)
SPACE COMPLEXCITY : O(1)*/

APPROACH 3: EXPECTED 

#include<iostream>
using namespace std;

int main()
{   
    // taking a array
    int arr[]={12,35,1,10,1,34};
    // do same step just like 2 approach.
    int largest=-1,second_largest=-1;

    /*In this step we are compare the largest number with an iteration or loop 
    if array is greater then largest number then largest value store in second largest number
    & an array will store in largest number & this is continue until loop is complete*/ 
    for(int i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {second_largest=largest;
        largest=arr[i];
        }

        /*otherwise largest is greater then & array is greater than second largest so array will be store in second largest number*/
        else if
        (arr[i]<largest && arr[i]>second_largest)
        second_largest=arr[i];
    }

    // print the value of second largest value
    cout<<"Your Second Largest Number is "<<second_largest;


}

/*COMPLEXITY ANALYSIS:
TIME  COMPLEXCITY : O(n)
SPACE COMPLEXCITY : O(1)*/