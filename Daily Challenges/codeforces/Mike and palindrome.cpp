#include<string.h> 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int n =str.size();
	int l=n/2;
	int c=0;
	for(int i=0;i<l;i++){
		if(str[i]!=str[n-i-1]){
			c++;
		}
	}
	if(c==1) cout << "YES";
	else if(n%2!=0&&c==0) cout << "YES";
	else cout << "NO";
}