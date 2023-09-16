// we write 1st program in oops
#include<iostream>

using namespace std;
class hero
{public:

//properties
    int health;
    private:
   char  level;

   void print ()
   {
       cout<<level<<endl;
   }
    };
    int main()
    {     //here we create amit as a object
        hero amit;
        amit.health =4;
        // amit.level ='g';
        cout<<amit.health<<endl;
        // cout<<amit.level<<endl;
        cout<<sizeof(amit);
        print(amit);
        return 0;
    }