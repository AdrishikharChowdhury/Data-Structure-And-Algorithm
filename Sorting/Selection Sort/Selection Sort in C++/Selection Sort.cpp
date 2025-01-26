#include<vector>
#include<iostream>
using namespace std;
void selectionSort(vector<int> &,int);
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
    selectionSort(nums,n);
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
void selectionSort(vector<int> &nums,int n)
{
    int i,j,smallestIdx;
    for(i=0;i<n-1;i++)
    {
        smallestIdx=i;
        for(j=i+1;j<n;j++)
        {
            if(nums[j]<nums[smallestIdx])
            {
                smallestIdx=j;                
            }
        }
        if(smallestIdx!=i)
        {
            swap(nums[i],nums[smallestIdx]);
        }
    }
}