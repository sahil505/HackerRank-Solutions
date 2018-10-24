/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 22/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    int jan, mar, may, jul, aug;
    int apr, jun;
    jan = mar = may = jul = aug = 31;
    apr = jun = 30;
    int sum = jan*5 + apr*2;
    string day, month;
    if ((year >= 1919 &&
        ((year%4 == 0 && year%100 != 0) || year%400 == 0)) ||
        (year < 1919 && year%4 == 0)) {
        sum += 29;
        day = to_string(256 - sum);
        month = "0" + to_string(9);
    } else {
        if (year == 1918) sum += 15;
        else sum += 28;
        day = to_string(256 - sum);
        month = "0" + to_string(9);
    }
    return (day + "." + month + "." + to_string(year));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
