// 1. Given an array of int, find all the pairs with the given target sum.
// a = {2, 5, 3, 8, 6, 4, 1,7 }, k = 7

// op: 2, 5
//     3, 4
//     6, 1


// 2. Given a sorted array of int, check if there exists a pair with the given sum. Return 1 if yes, else return 0.
// a = {2, 4, 5, 6, 8, 9 }, k = 13

// op: 1


// 3. Given an array of int, move all the zeros to the right end, by maintaining the relative order of the remaining elements.
// part1 - can use extra array
// part2- without using any extra array

// a = [2, 0, 5, 6, 0, 3, 1, 0]
// op: [2, 5, 6, 3, 1, 0, 0, 0]

// 4. Given an array of int, print the duplicate elements in it. (elements are between 1 to n)

// a = {2, 5, 4, 2, 6, 4, 1}
// op: 2, 4

#include<bits/stdc++.h>
using namespace std;


//using visited array concept
int main()
{
    int a[] = {2, 5, 4, 2, 6, 4, 1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int visited[n];
    
    for(int i=0; i<n ; i++)
    {
        visited[i] = -1;
    }
    
    for(int elem: a)
    {
        if(visited[elem - 1] == 0)
        {
            cout << elem << " ";
        }
        else
        {
            visited[elem - 1] = 0;
        }
    }
    
}

/*
int main()
{
    int a[] = {2, 5, 4, 2, 6, 4, 1};
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    for(int i=0; i<n-1 ; i++)
    {
        while(a[i] == a[i+1])
        {
            i++;
        }
        
        //handle few more edge cases 
        if(a[i] == a[i-1])
        {
            cout << a[i] << " ";
        }
    }
}

*/
/*
int main()
{
    int a[] = {2, 5, 4, 2, 6, 4, 1};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            if(a[i] == a[j])
            {
                cout << a[i] << " ";
            }
        }
    }
 }
 */

/*
int main()
{
    int a[] = {2, 0, 5, 6, 0, 3, 1, 0};
    int n = sizeof(a)/sizeof(a[0]);
    int i = 0;
    
    for(int elem: a)
    {
        if (elem != 0)
        {
            a[i] = elem;
            i++;
        }
    }
    
    for(int j = i; j<n;j++)
    {
        a[j] = 0;
    }
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}

*/


/*
int main()
{
    int a[] = {2, 0, 5, 6, 0, 3, 1, 0};
    int n = sizeof(a)/sizeof(a[0]);
    
    int b[n];
    
    for(int i =0; i<n; i++)
    {
        b[i] = 0;
    }
    
    int i = 0;
    
    for(int elem: a)
    {
        if(elem != 0)
        {
            b[i] = elem;
            i++;
        }
    }
    
     for(int elem: a)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    
    for(int elem: b)
    {
        cout << elem << " ";
    }
    
}

*/

/*
int main()
{
    int a[] = {2, 4, 5, 6, 8, 9 };
    int k = 53;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    int left=0, right = n-1, sum = 0;
    
    while(left < right)
    {
        sum = a[left] + a[right];
        
        if(sum == k)
        {
            cout << 1 << endl;
            return 1;
        }
        else if(sum > k)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    
    cout << 0 << endl;
    return 0;
    
}

*/
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[] = {2, 4, 5, 6, 8, 9 };
//     int k = 13;
    
//     int n = sizeof(a)/sizeof(a[0]);
    
//     for(int i =0; i<n ; i++)
//     {
//         for(int j = i+1; j<n; j++)
//         {
//             if( (a[i] + a[j]) == k)
//             {
//                 cout << 1 << endl;
//                 return 1;
//             }
//         }
//     }
//     cout << 0 << endl;
//     return 0;
    
// }

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 5, 3, 8, 6, 4, 1,7 };
    int k = 7;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i =0; i<n ; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if( (a[i] + a[j]) == k)
            {
                cout << a[i] << ", " << a[j] << endl;
            }
        }
    }
    
}
*/
