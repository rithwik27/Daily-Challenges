#include<string.h> 
#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	string n,m;
	long long a,b,z;
	cin >> t;
	while(t--){
		long long s1=0,s2=0;
		cin >> n;cin >> m;
		a=n.size();b=m.size();
		for(int i = 0 ; i<a ; i++){
			s1+=n[i]-48;
		}
		for(int i = 0 ; i<b ; i++){
			s2+=m[i]-48;
		}
		z=((s1%3)*(s2%3))%3;
		cout << z << endl;
	}
}