#include<bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> arr,int n)
{
    int largest = arr[0];
    int Slargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>Slargest)
            Slargest = arr[i];
    }
    return Slargest;
}

int Secondsmallest(vector<int> arr , int n)
{
    int Smallest = arr[0];
    int Ssmallest = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<Smallest)
        {
        Ssmallest = Smallest;
        Smallest = arr[i];
        }
        else if(arr[i]>Smallest && arr[i]<Ssmallest)
            Ssmallest = arr[i];
    }
    return Ssmallest;
}


int main()
{
    vector<int> arr = { 11,3,5,1,7,8,9,2};
    int n = arr.size();
    int Slargest = SecondLargest(arr,n);
    int Ssmallest = Secondsmallest(arr,n);
    cout<<Slargest<<"  "<<Ssmallest<<endl;
    return 0;
}
