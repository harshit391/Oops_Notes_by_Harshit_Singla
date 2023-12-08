#include <bits/stdc++.h>
using namespace std;

class A{
public:
    void showA(){
        cout<<"method in class A"<<endl;
    }
};
class B: public A{
    /* protected then accessibility to class B and C only not to int main */
public:
    void showB(){
        cout<<"method in class B"<<endl;
    }
};
class C: public B{  
public:
    void showC(){
        cout<<"method in class C"<<endl;
    }
};

int main()
{
    C c1;
    c1.showC();
    c1.showB();
    c1.showA();
}