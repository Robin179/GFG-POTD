#include <bits/stdc++.h>
using namespace std;

int minSubset(vector<int> &Arr, int N)
{ 
    sort(Arr.begin(),Arr.end());
    
    int sum = 0;
    int sub_sum = Arr[N-1];
    
    for(int i = 0 ; i < N-1 ; i++)
    {
        sum+=Arr[i];
    }

    int j = N-2;

    int count = 1;

    while(sum>=sub_sum)
    {
        sub_sum+=Arr[j];
        sum-=Arr[j];
        j--;
        count++;

    }

    return count;


}

int main()
{
    int N;
    cin>>N;
    vector<int>Arr;
    

    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        Arr.push_back(x);
    }

    cout<<minSubset(Arr,N);
    

    return 0;
}