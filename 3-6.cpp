// 1. Given an array of 1s, 2s and 0s in random order, you have to modify the array to store all 0s followed by all 1s followed by all 2s.

// a -> u can use sorting --> O(nlogn)
// b-> u cannot use sorting --> O(n)


// 2. Given an array of int, replace each element by the product of all the remaining  elements except that element.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {4, 2, 3, 1, 5};
    int n = sizeof(a)/sizeof(a[0]);
    
    int prefix_pro[n];
    int suffix_pro[n];
    
    for(int i=0 ; i<n ; i++)
    {
        suffix_pro[i] = 1;
        prefix_pro[i] = 1;
    }
    
    for(int i=1; i<n ; i++)
    {
        prefix_pro[i] = prefix_pro[i-1]*a[i-1];
        
    }
    
    for(int elem: prefix_pro)
    {
        cout << elem << " ";
    }
    cout << endl;
    
    
    for(int i=n-2; i>=0 ; i--)
    {
        suffix_pro[i] = suffix_pro[i+1]*a[i+1];
        
    }
    
    for(int elem: suffix_pro)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    
    
    for(int i=0 ;i<n; i++)
    {
        a[i] = prefix_pro[i]*suffix_pro[i];
    }
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}




/*



int main()
{
    int a[] = {4, 0, 3, 0, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int pro_all = 1;
    int c0 = 0;
    
    for(int elem: a)
    {
        if(elem == 0)
        {
            c0++;    
        }
    }
    
    if(c0 > 1)
    {
       for(int i=0; i<n; i++)
       {
           a[i] = 0;
       }
    }
    else if(c0 == 0 )
    {
        for(int elem: a)
        {
            pro_all *= elem;
        }
    
    // 4*6*3*5*1/4
    
        for(int i=0; i<n ; i++)
        {
            a[i] = pro_all/a[i];
        }
    }
    else // c0 == 1
    {
        for(int elem: a)
        {
            if(elem != 0)
            {
                pro_all *= elem;
            }
        }
    
        for(int i=0; i<n ; i++)
        {
            if(a[i] != 0)
            {
                a[i] = 0;
            }
            else
            {
                a[i] = pro_all;
            }
        }
    }
    
    
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}



int main()
{
    int a[] = {4, 6, 3, 5, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int pro_all = 1;
    int res[n];
    
    for(int i=0 ; i<n ; i++)
    {
        pro_all = 1;
        
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                pro_all *= a[j];
            }
        }
        
        res[i] = pro_all;
    }
    
    for(int elem: res)
    {
        cout << elem << " ";
    }
}



int main()
{
    int a[] = {4, 6, 3, 5, 0};
    int n = sizeof(a)/sizeof(a[0]);
    int pro_all = 1;
    
    for(int elem: a)
    {
        pro_all *= elem;
    }
    
    // 4*6*3*5*1/4
    
    for(int i=0; i<n ; i++)
    {
        a[i] = pro_all/a[i];
    }
    
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}



int main()
{
    int a[] = {1,2,1,1,0,0,1,0,2,2,0,1};
    // [0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2]
    
    int c0 = 0, c1 = 0, c2 = 0;
    
    for(int elem: a)
    {
        if(elem == 0)
        {
            c0++;
        }
        else if(elem == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    cout << c0 << " " << c1 << " " << c2 << endl;
     
    int n = sizeof(a)/sizeof(a[0]);
    
    int i=0;
    while(i<c0)
    {
        a[i] = 0;
        i++;
    }
    
    
    i=0;
    while(i<c1)
    {
        a[i+c0] = 1;
        i++;
    }
    
    
    i=0;
    while(i<c2)
    {
        a[i+c0+c1] = 2;
        i++;
    }
    
    
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}


int main()
{
    int a[] = {1,2,1,1,0,0,1,0,2,2,0,1};
    // [0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2]
    
    int c0 = 0, c1 = 0, c2 = 0;
    
    for(int elem: a)
    {
        if(elem == 0)
        {
            c0++;
        }
        else if(elem == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    
    cout << c0 << " " << c1 << " " << c2 << endl;
     
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i =0; i<n ; i++)
    {
        if(i < c0)
        {
            a[i] = 0;
        }
        else if(i < c0+c1)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 2;
        }
    }
    
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}




int main()
{
    int a[] = {1,2,1,1,0,0,1,0,2,2,0,1};
    // [0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2]
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    for(int elem: a)
    {
        cout << elem << " ";
    }
}
*/
