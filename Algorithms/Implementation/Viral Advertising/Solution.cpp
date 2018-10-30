/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 30/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int cumulative = 0;
    int shared = 5;
    int liked;
    for (int i = 1; i <= n; i++) {
        liked = shared/2;
        shared = liked*3;
        cumulative += liked;
    }
    return cumulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
