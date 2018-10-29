/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 27/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long repeatedString(string s, long long n) {
    long long len = s.length();
    long long nofa = 0;
    long long nofs = n/len;
    long long rem = n%len;
    long long ext = 0;

    for (long long i = 0; i < len; i++) {
        if (s[i] == 'a') {
            nofa++;
        }
    }

    for (long long i = 0; i < rem; i++) {
        if (s[i] == 'a') {
            ext++;
        }
    }
    return (nofa*nofs + ext);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
