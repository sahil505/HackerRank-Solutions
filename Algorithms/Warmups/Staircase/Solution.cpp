/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 19/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n ; j++) {
            cout << " ";
        }
        for (int k = n; k >= n - i; k--) {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
