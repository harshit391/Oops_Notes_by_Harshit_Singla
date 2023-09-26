//
// Created by DELL on 26/09/2023.
//

#include <iostream>

using namespace std;

void subsequences(char *in, char* out, int i, int j){
    if (in[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }


    subsequences(in,out,i+1,j);
    out[j] = in[i];
    subsequences(in,out,i+1,j+1);
}

int main() {

    char in[100];
    cin >> in;
    char out[100];

    subsequences(in,out,0,0);
    return 0;

}

