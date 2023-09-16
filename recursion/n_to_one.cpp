#include<iostream>
using namespace std;
int n_to_one(int n){
if(n<1)
return false;
cout<<n<<"\n";
return n_to_one(n-1);

}
int main(){
    n_to_one(5);
    return 0;
}