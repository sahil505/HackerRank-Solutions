/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 27/10/2018
  */

#include <iostream>
#include <vector>
using namespace std;

int main () {
  int n, t, col;
  cin >> n >> t;
  vector<int> width(n);

  for (int i = 0; i < n; i++) {
    cin >> width[i];
  }

  col = 2;
  vector<vector<int> > cases(t);

  for (int i = 0; i < t; i++) {
    cases[i] = vector<int> (col);
    cin >> cases[i][0];
    cin >> cases[i][1];
  }
  int in, out, min;

  for (int i = 0; i < t; i++) {
    in = cases[i][0];
    out = cases[i][1];
    min = 10e4;
    for (int j = in; j <= out; j++) {
      if (width[j] < min) min = width[j];
    }
    cout << min << endl;
  }

  return 0;
}
