/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 31/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {
    if (n == m) {
        if (s==1) return m;
        else return s-1;
    }
    else if (n>m) {
        if ((m+s-1) > n) return (m+s-1)%n;
        else return m+s-1;
    } else {
        if (s==1 && m%n == 0) return n;
        else if ((m%n)+s-1 > n) return ((m%n)+s-1)%n;
        else return (m%n)+s-1;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nms_temp;
        getline(cin, nms_temp);

        vector<string> nms = split_string(nms_temp);

        int n = stoi(nms[0]);

        int m = stoi(nms[1]);

        int s = stoi(nms[2]);

        int result = saveThePrisoner(n, m, s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
