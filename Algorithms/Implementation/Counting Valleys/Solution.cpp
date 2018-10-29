/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 27/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int count = 0;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'D') {
           count = count - 1;
        }
        if (s[i] == 'U') {
            count = count + 1;
        }
        if (count == 0 && s[i] == 'U') {
            counter = counter + 1;
        }
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
