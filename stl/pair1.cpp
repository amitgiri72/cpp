// we write a code for student marks and name in increasing order
#include  "bits/stdc++.h"
using namespace std;
int main()
{
    vector<pair<int ,string>>s;
    s.push_back({99,"aman"});
    s.push_back({45,"dk"});
    s.push_back({33,"sk"});
    s.push_back({99,"amit"});
    s.push_back({100,"ankit"});
    s.push_back({78,"pt"});
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i].first <<" "<<s[i].second<<endl;
    }
   
    return 0;
}