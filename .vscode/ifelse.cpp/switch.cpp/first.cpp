#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter a value";
    cin>>x>>y;
    char move;
    cout<<"enter a choice";
    cin>>move;
    switch (move)
    {
    case 'L':
        x--;
        cout<<x;
        break;
        case 'R':
         x++;
         cout<<x;
         break;
         case 'U':
         y--;
         cout<<y;
         break;
         case 'D':
         y++;
         cout<<y;
         break;
    
    default:
    cout<<"enter invalid choice";
        break;
    }
}