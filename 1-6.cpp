// 1. Reverse the array of integers.
// a - with using another array.
// b - without using any other array.

// 2. Remove duplicates in a sorted array by only storing 1 occurance of each of the number. Maintain the relative order in the output array.
// a = {4, 6, 6, 8, 9, 9, 9, 10}
// b = {4, 6, 8, 9, 10}

// 3. Given a sorted array, print the frequency of each element.

// a = {4, 6, 6, 8, 9, 9, 9, 10}
// op:
// 4 : 1
// 6 : 2
// 8 : 1
// 9 : 3
// 10 : 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {4, 6, 6, 8, 9, 9, 9, 10};
  int n = sizeof(a)/sizeof(a[0]);
  int count = 1, i;
  for(i = 0; i< n-1; i++)
  {
      if(a[i] == a[i+1])
      {
          count++;
      }
      else
      {
          cout << a[i] << " : " << count << endl;
          count = 1;
      }
  }
  cout << a[i] << " : " << count << endl;
}


// int main()
// {
//     int a[] = {4, 6, 6, 8, 9, 9, 9, 10, 10};
//     int n = sizeof(a)/sizeof(a[0]);
//     int j = 0;
    
//     for(int i=0; i<n-1; i++)
//     {
//         if(a[i] != a[i+1])
//         {
//             a[j++] = a[i];
//         }
//     }
    
//     a[j] = a[n-1];
    
//     for(int i =0; i<=j ; i++)
//     {
//         cout << a[i] << endl;
//     }
// }



// int main()
// {
//     int a[] = {4, 6, 6, 8, 9, 9, 9, 10};
//     vector<int> ans;
//     int n = sizeof(a)/sizeof(a[0]);
    
//     for(int i=0; i<n-1; i++)
//     {
//         if(a[i] != a[i+1])
//         {
//             ans.push_back(a[i]);
//         }
//     }
    
//     ans.push_back(a[n-1]);
    
//     // for(int elem : ans)
//     // {
//     //     cout << elem << endl;
//     // }
    
//     int s = ans.size();
//     int b[s];
//     int j =0;
//     for(int elem: ans)
//     {
//         b[j++] = elem;
//     }
    
//     for(int elem: b)
//     {
//         cout << elem << endl;
//     }
    
    
// }








// int main()
// {
//     int a[6] = {4,7,5,2,8,10};
//     //op = {10, 8, 2, 5, 7, 4}
    
//     int n = sizeof(a)/sizeof(a[0]);
    
//     // 0-4
//     // 1-3
//     int temp;
//     for(int i =0; i<n/2; i++)
//     {
//         temp = a[i];
//         a[i] = a[n-i-1];
//         a[n-i-1] = temp;
//     }
    
//     for(int elem : a)
//     {
//         cout << elem << endl;
//     }
    
// }


// int main()
// {
//     int a[5] = {4,7,5,2,8};
//     //b = {8, 2, 5, 7, 4}
    
//     int n = sizeof(a)/sizeof(a[0]);
//     int b[n];
    
//     for(int i = n-1; i>=0; i--)
//     {
//         b[n-i-1] = a[i];
//     }
    
//     for(int elem: b)
//     {
//         cout << elem << endl;
//     }
// }
