#include<string.h> 
#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n;cin >>m;
        char a[n][m];
        int c=0;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<m;j++){
                a[i][j]=s[j];
                if(s[j]=='1')c=1;
            }
        }
        if(c==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout << "-1 ";
                }
            cout << endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(a[i][j]=='1'){cout << "0 ";continue;}
                    int z=0;
                    for(int k=0;k<n;k++){
                        if(a[k][j]=='1'){z=1;break;}
                    }
                    if(z==0){
                        for(int k=0;k<m;k++){
                            if(a[i][k]=='1'){z=1;break;}
                        }
                    }
                    if(z==1)cout << "1 ";
                    else cout << "2 ";
                }
            cout << endl;
            }
        }

    }
    
}