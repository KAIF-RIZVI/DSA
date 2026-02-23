//without kadanes Algorithm brute force approach  O(N3)
#include <iostream>
using namespace std;
#define n 5
int main()
{
    int array[n];
    int k = (n * (n + 1)) / 2;
    int sum[k];

    // input array
    cout << "Enter the members of an array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    // logic for finding sum of all sub array in a sum array
    int j = 0;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int s = 0;
            cout<<"[";
            for (int i = st; i <= end; i++)
            {
                s = s + array[i];
                cout << array[i];
            }
            cout<<"]"<<"sum:"<<s;

            sum[j] = s;
            j++;
            cout << "\t";
        }
        cout << endl;
    }

    // to get maximum
    int max = sum[0];
    for (int i = 0; i < k; i++)
    {
        if (max < sum[i])
        {
            max = sum[i];
        }
    }

    // cout
    cout << "THE maximum subarray sum :" << max << endl;

    return 0;
}

    // logic part    o(n2)
    
    // for(int s=0;s<n;s++){
    //    cs=0;
    //     for(int e=s;e<n;e++){
    //          cs=cs+a[e];
    //                 ms=max(cs,ms);
    //     }
      
    // }


//Now kadane's Algorithm

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int current_sum=0;
//         int max_sum=INT_MIN;

//         for(int value:nums){
//             current_sum=current_sum+value;
//             max_sum=max(current_sum,max_sum);
//             if(current_sum<0){
//                 current_sum=0;
//             }
//         }

//       return max_sum;  
//     }

// };