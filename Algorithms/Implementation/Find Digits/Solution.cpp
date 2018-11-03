/*
  Author: Sahil Khokhar
  Github: sahil505
  Created on: 02/10/2018
  */

  #include <bits/stdc++.h>

  using namespace std;

  // Complete the findDigits function below.
  int findDigits(int n) {
      int rem;
      int num = n;
      int counter = 0;
      while (num != 0) {
          rem = num%10;
          if (rem != 0 && n%rem == 0) counter++;
          num = num/10;
      }
      return counter;
  }

  int main()
  {
      ofstream fout(getenv("OUTPUT_PATH"));

      int t;
      cin >> t;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      for (int t_itr = 0; t_itr < t; t_itr++) {
          int n;
          cin >> n;
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

          int result = findDigits(n);

          fout << result << "\n";
      }

      fout.close();

      return 0;
  }
