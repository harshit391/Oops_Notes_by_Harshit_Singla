//
// Created by DELL on 04/11/2023.
//

#include <bits/stdc++.h>

using namespace std;

void mapping(char * in, char * out, int i, int j) {
    if (in[i] == '\0') {
        out[j]='\0';
        cout << out << endl;
        return;
    }

    int num = in[i] - '1';
    char c = num + 'A';
    out[j] = c;
    mapping(in,out,i+1,j+1);

    if (i+1 < strlen(in)) {
        int num = (in[i]-'0')*10 + (in[i+1]-'0');
        if (num <= 26) {
            num = num-1;
            char c = num + 'A';
            out[j] = c;
            mapping(in, out, i+2, j+1);
        }
    }
}

int main() {
    char * in = new char[1000];
    char * out = new char[1000];

    cin >> in;

    mapping(in,out,0,0);
}