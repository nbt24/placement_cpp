// 1. Given an array of int, print the duplicate elements in it. (elements are between 1 to n)

// a = {2, 5, 4, 2, 6, 4, 1}
// op: 2, 4


// 2. Given an array of int, find the length of the longest subarray with all elements equal.
// a[] = {2,4,3,3,3,3,5,5,1}
// op: 4

// 3. Given an array of int, find the maximum product of 2 elements in it.
// 1- brute force
// 2- optimal

// int a[] = {3,6,2,-10, 9,1,-12, 4};

// 4. Rearrange the array in the alternative high-low fashion.
// a[] = {2,5,4,8,9,1,7}
// op: b[] = {1,9,2,8,4,7,5}


5. Given an array of int, find the maximum difference among 2 elements int it such that j > i and a[j]-a[i] is max.

#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int a[] = {2,5,4,8,9,1,7};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    int b[n];
    
    int left = 0, right = n-1;
    
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            b[i] = a[left];
            left++;
        }
        else
        {
            b[i] = a[right];
            right--;
        }
        
    }
    
    for(int elem: b)
    {
        cout << elem << " ";
    }
}
*/
/*

int main()
{
    // int a[] = {3,6,2,9,1,4};
    int a[] = {3,6,2,-10, 9,1,-12, 4};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    int mx = max( a[0]*a[1] , a[n-1]*a[n-2]);
    
    cout << mx << endl;
}

*/
/*
int main()
{
    int a[] = {3,6,2,9,1,4};
    int n = sizeof(a)/sizeof(a[0]);
    // op: 54
    int mx = INT_MIN;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            mx = max(mx , a[i]*a[j]);
        }
    }
    cout << mx << endl;
}
*/

/*
int main()
{
    int a[] = {2,4,3,3,3,3,5,5,1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int ans = 1, count = 1;
    
    for(int i=0;i<n;i++)
    {
        if(a[i] == a[i+1])
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    
    cout << ans << endl;
}
*/

/*
//using visited array concept
int main()
{
    int a[] = {2, 5, 4, 2, 6, 4, 1,2};
    int n = sizeof(a)/sizeof(a[0]);
    
    int freq[n];
    
    for(int i=0; i<n ; i++)
    {
        freq[i] = 0;
    }
    
    for(int elem: a)
    {
        freq[elem - 1]++;
        if(freq[elem - 1] == 2)
        {
            cout << elem << endl;
        }
    }
    
}
*/


/*

//using visited array concept - array elems not necessarily 1-n.
int main()
{
    int a[] = {2, 5, 40, 2, 60, 40, 1,2};
    int n = sizeof(a)/sizeof(a[0]);
    
    int mx = a[0];
    for(int elem: a)
    {
        mx = max(mx, elem);
    }
    
    int freq[mx];
    
    
    for(int i=0; i<mx ; i++)
    {
        freq[i] = 0;
    }
    
    for(int elem: a)
    {
        freq[elem - 1]++;
        if(freq[elem - 1] == 2)
        {
            cout << elem << endl;
        }
    }
    
}
*/
