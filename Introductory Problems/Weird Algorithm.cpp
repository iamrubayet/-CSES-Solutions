#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    long long n;
    cin >> n;
    while(n!=1){
        cout << n <<endl;
        if(n%2==1){
            n = 3*n+1;



        }else{
            n = n/2;
        }

    }
    cout << 1 <<endl;
    return 0;
}
