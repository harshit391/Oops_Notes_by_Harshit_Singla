#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    /* begin provides address front gives element*/
    cout << "a.begin() :- " << *(a.begin()) << " and a.front() :- " << a.front() << endl;

    /* similarly end provides address and back gives element*/
    cout << "a.end() :- " << *(a.end()-1) << " and a.back() :- " << a.back() << endl;

    /* To check vector is empty or not */
    cout << a.empty() /* return 0 if false */<< endl;

    vector<int> :: iterator it = a.begin();

    for (int i=0; i<a.size(); i++) {
        cout << *(it+i) << " ";
    }
    cout << endl;

    for (auto /* Auto-detect which type of iterator we want */
    it2 = a.begin(); it2!=a.end(); it2++) {
        cout << *it2 << " ";
    }

    cout << endl;

    a.clear();/* Clear the vectors */
    cout << a.empty() /* return 1 if true */ << endl;
    return 0;

}
