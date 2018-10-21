/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 20/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string ma = s.substr(8,2);
    if (ma == "AM") {
        int hr = stoi(s.substr(0,2));
        string nhr;
        if (hr == 12) {
            nhr = "00";
            s.replace(0, 2, nhr);
        }
        return s.substr(0,8);
    } else {
        int hr = stoi(s.substr(0,2));
        string nhr;
        if (hr < 12) {
            hr = 12 + hr;
            nhr = to_string(hr);
            s.replace(0, 2, nhr);
        }
        return s.substr(0,8);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
