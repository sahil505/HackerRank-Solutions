/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 30/10/2018
  */

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int counter = 0;
    int current;
    if (p <= n/2) {
        current = 1;
        while (current < p) {
            current += 2;
            counter++;
        }
    } else {
        if (n%2 == 0) current = n;
        else current = n - 1;
        while (current > p) {
            current -= 2;
            counter++;
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

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
