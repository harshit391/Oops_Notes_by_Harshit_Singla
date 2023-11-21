//
// Created by DELL on 17/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Vector{
private:
    T * arr;
    int size1;
    int idx;
public:
    Vector() {
        idx = 0;
        size1 = 1000;
        arr = new T[1000];
    }
    Vector(int s) {
        idx = 0;
        size1 = s;
        arr = new T[size1];
    }
    void increase() {
        T * arr2 = new T[size1];
        for (int i=0; i<size1; i++) {
            arr2[i] = arr[i];
        }
        arr = new T[size1*2];

        for (int i=0; i<size1; i++) {
            arr[i] = arr2[i];
        }
        size1*=2;
        arr2 = nullptr;
    }
    void push_back(T val) {
        arr[idx++] = val;
        if (idx == size1) {
            increase();
        }
        size1++;
    }

    T pop_back() {
        size1--;
        return arr[--idx];
    }

    [[nodiscard]] int size() const {
        return idx;
    }

    T operator[](int i) {
        return arr[i];
    }
};


int main() {
    Vector<int> v1(2);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);

    cout << v1.pop_back() << endl;

    for (int i=0; i<v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl;

    Vector<char> v2(3);
    v2.push_back('a');
    v2.push_back('b');
    v2.push_back('c');
    v2.push_back('d');

    cout << v2.pop_back() << endl;

    for (int i=0; i<v2.size(); i++) {
        cout << v2[i] << " ";
    }


    return 0;
}