#include <bits/stdc++.h>
using namespace std;

class Mammals{
public:
    void mam(){
        cout<<"I am Mammal"<<endl;
    }
};
class Marine{
public:
    void mar(){
        cout<<"I am Marine animal"<<endl;
    }
};
class Whale: public Mammals,public Marine{
public:
    void wha(){
        cout<<"I am Whale. I belong to mammals as well as marine animal"<<endl;
    }
};
int main()
{
    Mammals mam1;
    Marine mar2;
    Whale whal;
    mam1.mam();
    mar2.mar();
    whal.mam();
    whal.mar();
    whal.wha();

    return 0;
}