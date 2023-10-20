//
// Created by DELL on 28/09/2023.
//

#include <iostream>

using namespace std;

void permutations(char*in, int i) {
    if (in[i]=='\0'){
        cout << in << endl;
        return;
    }
    for (int j=i;in[j]!='\0';j++){
        swap(in[j],in[i]);
        permutations(in,i+1);
        swap(in[j],in[i]);
    }
}

int main() {
    char in[1000];
    cin >> in;

    permutations(in,1);

    return 0;
}
