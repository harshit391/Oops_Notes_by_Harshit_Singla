//
// Created by DELL on 29/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    try{
        if (b == 0) {
            throw ("e");
        }
        cout << "a/b :- " << a/b << endl;
    } catch (int e) {
        cout << "Division by 0 exception Integer" << endl;
    } catch (double e) {
        cout << "Division by 0 exception Double" << endl;
    } catch (const char * e) {
        cout << "Division by 0 exception String" << endl;
    }

    return 0;

}