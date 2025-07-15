// 1. Given an array of integers, find the sum of all the elements in it.

// 2. Given an array of integers, find the sum of all the even elements in it.

// 3. Given an array of integers, find the sum of all the elements that are present at even index.

// 4. Given an array of integers, find the maximum element in it.

// 5. Given an array of integers, find the minimum element in it.

// 6. Given an array of integers, print the index of the given element, print -1 if it is not present.
// ip: a[], key

#include<iostream>
using namespace std;

int main()
{
    int a[5] = {2,4,1,5,3};
    //expected op: 1
    
    int mn = a[0];
    
    for(auto elem: a)
    {
        if(elem < mn)
        {
            mn = elem;
        }
    }
    
    cout << mn;
}


// int main()
// {
//     int a[5] = {-2,-4,1,-5,-3};
//     //expected op: 5
    
//     int mx = a[0];
    
//     for(auto elem: a)
//     {
//         if(elem > mx)
//         {
//             mx = elem;
//         }
//     }
    
//     cout << mx;
// }

// int main()
// {
//     int a[5] = {2, 4, 6, 1, 3};
//     //expected op: 11
//     int sum = 0;
//     int n = sizeof(a)/sizeof(a[0]);
    
//     for(int i = 0; i<n ;i+= 2)
//     {
//         sum += a[i];
//     }
//     cout << sum;
// }


// int main()
// {
//     int a[5] = {2,4,6,1,3};
//     //expected soln: 12
//     int sum = 0;
    
//     for(auto elem: a)
//     {
//         if(elem % 2 == 0)
//         {
//             sum += elem;
//         }
//     }
    
//     cout << sum << endl;
// }

// int main()
// {
//     int a[5] = {4,2,1,0,3};
//     //expected output: 15
//     int sum = 0;
//     int n = sizeof(a)/sizeof(a[0]);
//     cout << n << endl;
    
//     for(int i =0; i<n; i++)
//     {
//         sum += a[i];
//     }
    
//     cout << sum << endl;
// }


// int main()
// {
//     int a[5] = {2,4,6,1,3};
//     int sum = 0;
    
//     for(auto elem: a)
//     {
//         sum += elem;
//     }
    
//     cout << sum << endl;
// }
