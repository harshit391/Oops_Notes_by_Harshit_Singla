//
// Created by DELL on 23/11/2023.
//
#include <bits/stdc++.h>

using namespace std;

class A{
public:
    int x;
    int y;
    A(int x,int y){
        this->x = x;
        this->y = y;
    }
    void display(){
        cout<<"A: "<<x<<" "<<y<<endl;
    }
};


class B{
    int m;
    int n;
public:
    B(int m,int n){
        this->m = m;
        this->n = n;
    }
    void display(){
        cout<<"B: "<<m<<" "<<n<<endl;
    }

    void operator = (A a){
        m=a.x;
        n=a.y;
    }
};

int main()
{
    A a1(2,3);
    A a2(6,7);

    B b(4,5);

    b=a1;
    b.display();

    a1=a2;
    a1.display();
}
