// 1. Find the missing number in the range 1 to n.
// a[n-1] ==> {1 --> n}
// Find the missing number.
// eg: a[] = {5, 3, 2, 4, 6}
// op: 1


// 2. Check if the given array is Palindrome or not?

// a[] = {2, 4, 3, 3, 4, 2}
// a[] = {5, 6, 2, 1, 2, 6, 5}


// 3. Check if the given array is sorted (asc order) or not.

// 4. Print all the leaders in the given array.
// leader: an element that is strictly greater than all the elments on its right

// Note: last element is always a leader.

// a[] = {4, 7, 5, 2, 3}
// leaders: 7, 5, 3

// 5. Replace each element with the maximum element on its right including it.
// a[] = {4, 7, 5, 2, 3}
// a[] = {7, 7, 5, 3, 3}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {4, 7, 5, 2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mx = a[n-1];
    
    for(int i = n-2; i>=0; i--)
    {
        mx = max(a[i], mx);
        a[i] = mx;
    }
    
    for(int elem: a)
    {
        cout << elem << endl;
    }
    
}

// int main()
// {
//     int a[] = {4, 7, 5, 2, 3};
//     int n = sizeof(a)/sizeof(a[0]);
//     bool leader;
//     for(int i=0; i<n; i++)
//     {
//         leader = true;
        
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[j] > a[i])
//             {
//                 leader = false;
//                 break;
//             }
//         }
        
//         if(leader)
//         {
//             cout << a[i] << endl;
//         }
//     }
// }

// int main()
// {
//     int a[] = {3, 5, 7, 4, 9};
//     int n = sizeof(a)/sizeof(a[0]);
//     string ans = "Sorted";
    
//     for(int i = 1; i<n; i++)
//     {
//         if(a[i] < a[i-1])
//         {
//             ans = "Not Sorted";
//             break;
//         }
//     }
    
//     cout << ans << endl;
// }

// int main()
// {
//     int a[] = {3, 5, 7, 4, 9};
//     int n = sizeof(a)/sizeof(a[0]);
//     string ans = "Sorted";
    
//     for(int i =0; i< n-1; i++)
//     {
//         if(a[i] > a[i+1])
//         {
//             ans = "Not Sorted";
//             break;
//         }
//     }
    
//     cout << ans << endl;
// }

// int main()
// {
//     int a[] = {2, 4, 3, 3, 4, 2};
//     int n = sizeof(a)/sizeof(a[0]);
//     string ans = "Yes";
    
//     for(int i = 0 ; i<n/2; i++)
//     {
//         if(a[i] != a[n-i-1])
//         {
//             ans = "No";
//             break;
//         }
//     }
    
//     cout << ans << endl;
// }


// int main()
// {
//     int a[] = {2, 4, 3, 1, 3, 4, 2};
//     int n = sizeof(a)/sizeof(a[0]);
    
//     int left = 0, right = n-1;
//     string ans = "Yes";
    
//     while(left < right)
//     {
//         if(a[left] != a[right])
//         {
//             ans = "No";
//             break;
//         }
        
//         left++, right--;
//     }
    
//     cout << ans << endl;
    
// }


/*
int main()
{
    int a[] = {5, 1, 2, 4, 6};
    int s = sizeof(a)/sizeof(a[0]);
    int n = s+1;
    int ideal_sum = (n*(n+1))/2;
    int actual_sum = 0;
    
    for(int elem: a)
    {
        actual_sum += elem;
    }
    
    int missing_elem = ideal_sum - actual_sum;
    
    cout << missing_elem;
    
}

*/
