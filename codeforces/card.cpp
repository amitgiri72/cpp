#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string a,b,c,d,e;
    cin>>s>>a>>b>>c>>d>>e;
      bool flag =0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        { 
             flag=0;
            if(s[i]==a[j] or b[j] or c[j] or d[j] or e[j]){
            flag =1;
        }
            else{
                flag =0;
                
            }
        }}
        if(flag =1)
        cout<<"YES";
        else
        cout<<"NO";
    
}