#include <bits/stdc++.h>
using namespace std;
//itrative
int binarySearchIt(int arr[] , int n , int target)
{
    int l = 0;
    int r = n - 1;
    while (l<=r)
    {
        int m = l + (r-l)/2;
        if(arr[m] == target)
            return m;
        else if (target < arr[m])
            r = m -1;
        else 
            l = m +1;
    }
    return -1;
}
//recurtion
int binarySearchRec(int arr[] , int l , int r , int target)
{
        if(l>r){
            return -1;
        }else {
        int m = l + (r-l)/2;
        if(arr[m] == target)
        return m;
        else if (arr[m]>target)
        binarySearchRec(arr,l,m-1,target);
        else binarySearchRec(arr,m+1,r,target);
        }
        
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int target;
    cout << "Enter Target : ";
    cin >> target;

    int posIt =  binarySearchIt(arr,n,target);
    int posRec =  binarySearchRec(arr, 0 , n -1 ,target);
    cout << posRec << "\n";
    cout <<  posIt << "\n";
    
}