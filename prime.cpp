#include<bits/stdc++.h>
using namespace std ;
bool check_prime(int n) ;
int main()
{
    int n ;
    cout << "Enter An Integer : " ;
    cin >> n ;
    if(check_prime(n))
    {
        cout << "\nThe Number " << n << " Is Prime...!!!\n" ;
    }
    else
    {
        cout << "\nThe Number " << n << " Is Not Prime...!!!\n" ;
    }
    return 0 ;
}
bool check_prime(int n)
{
    bool flag = true ;
    if(n==2)
    {
        return true ;
    }
    if(n==1 || n%2==0)
    {
        return false ;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
        {
            flag = false ;
            break ;
        }
    }
    return flag ;
}
