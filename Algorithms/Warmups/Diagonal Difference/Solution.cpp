/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 19/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    int ltr = 0;
    int rtl = 0;
    for (int i = 0; i < arr.size(); i++) {
        ltr += arr[i][i];
        rtl += arr[i][(arr.size() - 1) - i];
    }
    return abs(ltr - rtl);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
