#include<vector>
#include<iostream>
using namespace std;
void insertionSort(vector<int> &,int);
void display(vector<int> &);
int main()
{
    vector<int> nums;
    int i,n,val;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Before sorting the elements"<<endl;
    display(nums);
    insertionSort(nums,n);
    cout<<"After sorting the elements"<<endl;
    display(nums);
    return 0;
}
void display(vector<int> &arr)
{
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
void insertionSort(vector<int> &nums,int n)
{
    int prev,i,curr;
    for(i=1;i<n;i++)
    {
        curr=nums[i];
        prev=i-1;
        while (prev>=0 && nums[prev]>curr)
        {
            nums[prev+1]=nums[prev];
            prev-=1;
        }
        nums[prev+1]=curr;
    }
}