#include<vector>
#include<iostream>
using namespace std;
void bubbleSort(vector<int> &,int);
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
    bubbleSort(nums,n);
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
void bubbleSort(vector<int> &nums,int n)
{
    int i,j;
    bool isSwap=false;
    for(i=0;i<n-1;i++)
    {
        isSwap=false;
        for(j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                swap(nums[j],nums[j+1]);
                isSwap=true;                
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
}