/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 27/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    unsigned long numSquare;
    int numlength;
    string numStr, strSquare;
    int strLen, l ,r, diff;
    string strl, strr;
    l = r = 0;
    bool counter = false;
    for (unsigned long i = p; i <= q; i++) {
        numStr = to_string(i);
        numlength = numStr.length();
        numSquare = i*i;
        strSquare = to_string(numSquare);
        strLen = strSquare.length();
        diff = strLen - numlength;
        strl = strSquare.substr(0, diff);
        strr = strSquare.substr(diff, numlength);
        stringstream geekl(strl);
        stringstream geekr(strr);
        geekl >> l;
        geekr >> r;
        if (l + r == i) {
            cout << i << " ";
            counter = true;
        }
    }
    if (counter == false) {
        cout << "INVALID RANGE";
    }
}

int main() {
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
