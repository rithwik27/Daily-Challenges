#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,x,y;
    string n="aabb";
    cin >> t;
    x=t/4;y=t%4;
    while (x--) cout << n;
    if(y>0) cout << n.substr(0, y);
    
}
