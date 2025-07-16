// 1.Given an array of int, find the count of even and odd numbers in it.

// 2. Given an array of distinct int, find the 2nd largest element in it.

// 3. Given an array of distinct int, find the 3rd largest element in it.

// 4. Given an array of integers, right rotate the array by 1 position.
// a = {4, 7, 3, 8, 5}
// op: 5, 4, 7, 3, 8


// 5. Given an array of integers, left rotate the array by 1 position.
// a = {4, 7, 3, 8, 5}
// op: 7, 3, 8 , 5, 4

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {4, 7, 3, 8, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int first = a[0];
    
    cout << "Before rotation: ";
    for(int elem : a)
    {
        cout << elem << " ";
    }
    
  for(int i=0; i<n-1 ; i++) 
  {
      a[i] = a[i+1];
  }
   
  a[n-1] = first;
   
  cout << endl;
  cout << "After rotation: ";
   
  for(int elem : a)
  {
      cout << elem << " ";
  }
}



// int main()
// {
//     int a[5] = {4, 7, 3, 8, 5};
//     int n = sizeof(a)/sizeof(a[0]);
//     int last = a[n-1];
    
//     cout << "Before rotation: ";
//     for(int elem : a)
//     {
//         cout << elem << " ";
//     }
    
//   for(int i=n-1; i>0 ; i--) 
//   {
//       a[i] = a[i-1];
//   }
   
//   a[0] = last;
   
//   cout << endl;
//   cout << "After rotation: ";
   
//   for(int elem : a)
//   {
//       cout << elem << " ";
//   }
   
   
// }




// int main()
// {
//     int a[6] = {4, 5, 2, 7, 3, 11};
//     //ans = 7
//     int mx1 = INT_MIN, mx2 = INT_MIN, mx3 = INT_MIN;
    
//     for(int elem: a)
//     {
//         if(elem > mx1)
//         {
//             mx1 = elem;
//         }
//     }
    
//     for(int elem: a)
//     {
//         if(elem > mx2 && elem <  mx1)
//         {
//             mx2 = elem;
//         }
//     }
    
//     for(int elem: a)
//     {
//         if(elem > mx3 && elem < mx2)
//         {
//             mx3 = elem;
//         }
//     }
    
//     cout << mx1 << " , " << mx2 << " , " << mx3 << endl;
// }


// int main()
// {
//     int a[6] = {4, 6, 2, 7, 3, 8};
//     //ans = 7
//     int mx1 = INT_MIN, mx2 = INT_MIN;
    
//     for(int elem: a)
//     {
//         if(elem > mx1)
//         {
//             mx1 = elem;
//         }
//     }
    
//     for(int elem: a)
//     {
//         if(elem > mx2 && elem <  mx1)
//         {
//             mx2 = elem;
//         }
//     }
    
//     cout << mx1 << " , " << mx2 << endl;
// }



// int main()
// {
//     int a[6] = {4, 6, 2, 7, 3, 8};
//     //ans = 7
//     int mx1 = INT_MIN, mx2 = INT_MIN;
    
//     for(int elem: a)
//     {
//         if(elem > mx1)
//         {
//             mx2 = mx1;
//             mx1 = elem;
//         }
//         else if(elem > mx2)
//         {
//             mx2 = elem;
//         }
//     }
    
//     cout << mx1 << " , " << mx2 << endl;
// }



// int main()
// {
//     int a[6] = {4,6,2,7,3,8};
//     //even = 4, odd = 2
    
//     int even = 0, odd = 0;
    
//     for(int elem : a)
//     {
//         if(elem % 2 == 0)
//         {
//             even += 1;      
//         }
//         else
//         {
//             odd += 1;
//         }
//     }
    
//     cout << even << " , " << odd << endl;
    
// }


// int main()
// {
//     int a[6] = {4,6,2,7,3,8};
//     //even = 4, odd = 2
    
//     int n = sizeof(a)/sizeof(a[0]);
//     int even = 0, odd = 0;
    
//     for(int elem : a)
//     {
//         if(elem % 2 == 0)
//         {
//             even += 1;      
//         }
//     }
    
//     odd = n - even;
    
//     cout << even << " , " << odd << endl;
    
// }
