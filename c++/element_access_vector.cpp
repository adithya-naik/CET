// #include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> g1;
    
    for (int i = 0; i <= 10; i++) {
        g1.push_back(i*10);
    }
    cout<<"\nat : g1.at(4) = "<<g1.at(4);
    cout<<"\nfront() : g1.front() = "<<g1.front();
    cout<<"\nback() : g1.back() = "<<g1.back();
    return 0;
}
