// 1. Given an array of int, find the maximum product of 3 elements in it.
// a -> brute force - n^3
// b-optimised1 - nlogn
// c - optimised2 - n

// 2. Given an array of distinct integers, find the 2nd maximum element in the given array.
// a- Brute force -> nlogn
// b- optimised -> n

// 3. Given an array of distinct integers, find the 1st, 2nd and 3rd maximum element in the given array.
// a-> brute force -> nlogn
// b-> optimised -> n


// 4. Given an array of distinct integers, find the 1st min and 2nd min element in the given array.
// a- Brute force -> nlogn
// b- optimised -> n

// 5- Given a positive integer, keep finding the sum of its digits, until that sum becomes a single digit.

// n = 5472
// 18  
// final ans = 9


#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n = 172;
    int sum = 0;
    
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        
        sum += n%10;
        n = n/10;
    }
    
    cout << sum ;
}


/*


int main()
{
    int n = 2;
    int sum = 0;
    
    
    while(n >= 10)
    {
        sum = 0;
        while(n>0)
        {
            int rem = n%10;
            sum += rem;
            n = n/10;
        }
        
        n = sum;
    }
    
    cout << n ;
}





#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[] ={3,-6,9,1,4,5};
    
    int n = sizeof(ar)/sizeof(ar[0]);
    
    int max1 = ar[0], sMax = INT_MIN,thMax = INT_MIN , min1 = ar[0],sMin = INT_MAX;
    
    int pro =1;
    
    
    for(int i =1;i<n;i++)
    {
        if(ar[i] >max1)
        {
            thMax = sMax;
            sMax = max1;
            max1 = ar[i];
            
        }
        else if(ar[i]<max1 &&  ar[i]>sMax)
        {
            thMax = sMax;
            sMax = ar[i];
        }
        else if(ar[i]<max1 && ar[i] < sMax && ar[i]>thMax)
        {
            thMax =ar[i];
        }
    }
    
    for(int i =1;i<n;i++)
    {
        if(ar[i] <min1)
        {
            
            sMin = min1;
            min1 = ar[i];
            
        }
        else if(ar[i]>min1 &&  ar[i]<sMin)
        {
            sMin = ar[i];
        }
        
    }
    
    pro = max(pro,max1*sMax*thMax);
    pro = max(pro,min1*max1*sMin);
    
    cout<<pro;
    
    //cout<<max<<" "<<sMax<<" "<<thMax;

    return 0;
}




int main()
{
    int ar[] ={3,6,9,1,4,5};
    int n = sizeof(ar)/sizeof(ar[0]);
    int min = ar[0], sMin = INT_MAX;
    
    
    for(int i =1;i<n;i++)
    {
        if(ar[i] <min)
        {
            sMin = min;
            min = ar[i];
        }
        else if(ar[i]>min &&  ar[i]<sMin)
        {
            sMin = ar[i];
        }
    }
    cout<<min<<" "<<sMin;

    return 0;
}


int main()
{
    int ar[] ={3,6,9,1,4,5};
    //9,6,5
    
    int n = sizeof(ar)/sizeof(ar[0]);
    
    int max = ar[0], sMax = INT_MIN,thMax = INT_MIN;
    
    
    for(int i =1;i<n;i++)
    {
        if(ar[i] >max)
        {
            thMax = sMax;
            sMax = max;
            max = ar[i];
            
        }
        else if(ar[i]<max &&  ar[i]>sMax)
        {
            thMax = sMax;
            sMax = ar[i];
        }
        else if(ar[i]<max && ar[i] < sMax && ar[i]>thMax)
        {
            thMax =ar[i];
        }
    }
    cout<<max<<" "<<sMax<<" "<<thMax;

    return 0;
}



int main()
{
    int ar[] ={-3,-6,-9,-1,-4,5};
    
    int n = sizeof(ar)/sizeof(ar[0]);
    
    int max = ar[0], sMax = INT_MIN;
    
    
    for(int i =1;i<n;i++)
    {
        if(ar[i] >max)
        {
            sMax = max;
            max = ar[i];
        }
        else if(ar[i]<max &&  ar[i]>sMax)
        {
            sMax = ar[i];
        }
    }
    cout<<max<<" "<<sMax;

    return 0;
}


// m - 10
// sm - 5
// ai = 15





#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {4,2,7,6,1,9,3};
    //7
    
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    cout << a[n-2] << endl;
}




int main()
{
    int a[] = {3,-6,-1,-9,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int pro = INT_MIN;
    
    sort(a, a+n);
    
    pro = max(pro, a[n-1]*a[n-2]*a[n-3]);
    pro = max(pro, a[0]*a[1]*a[n-1]);
    
    cout << pro;
    
}



int main()
{
    int a[] = {3,6,-1,-9,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int pro = INT_MIN;
    
    for(int i =0; i<n ; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n ; k++)
            {
               pro  = max(pro, a[i]*a[j]*a[k]);
            }
        }
    }
    
    cout << pro << endl;
    
}
*/
