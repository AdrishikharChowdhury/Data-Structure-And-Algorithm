#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& nums,int,int,int);
void bubblesort(vector<int>& nums);
int main()
{
    vector<int> nums;
    int n,val,k;
    int found;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    bubblesort(nums);
    cout<<"This is your sorted elements: "<<endl;
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Enter the value you want to search: ";
    cin>>k;
    found=binary_search(nums,0,nums.size()-1,k);
    if(found!=-1)
    {
        cout<<"Element found at pos "<<found+1<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
void bubblesort(vector<int>& nums)
{
    int temp,i,j,n=nums.size();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                if (nums[j]>nums[j+1])
                {
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
}
int binary_search(vector<int>& nums,int low,int high,int k)
{
    int mid;
    if(low<=high)
    {
        mid=low+(high-low)/2;
        if(nums[mid]==k)
        {
            return mid;
        }
        else if(nums[mid]<k)
        {
            return binary_search(nums,mid+1,high,k);
        }
        else{
            return binary_search(nums,low,mid-1,k);
        }
    }
    return -1;
}