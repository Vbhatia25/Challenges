#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  int x, y, z;
  int n;
  string seq;

  int min = 0;
  int mid = 0;
  int max = 0;

  cin >> x >> y >> z;

  cin >> seq;

  n = seq.length ();
  char arr[n + 1];
  strcpy (arr, seq.c_str ());

  if (x < y && x < z)
    {
      if (y > z)
    {
      max = y;
      mid = z;
    }
      else
    {
      max = z;
      mid = y;
    }
      min = x;
    }

  else if (y < x && y < z)
    {
      if (x > z)
    {
      max = x;
      mid = z;
    }
      else
    {
      max = z;
      mid = x;
    }
      min = y;
    }

  else
    {
      if (x > y)
    {
      max = x;
      mid = y;
    }
      else
    {
      max = y;
      mid = x;
    }

      min = z;
    }

  if (arr[0] == 'A' && arr[1] == 'B' && arr[2] == 'C')
    cout << min<<'\t'<< mid <<'\t'<< max;

  else if (arr[0] == 'A' && arr[1] == 'C' && arr[2] == 'B')
    cout << min <<'\t'<< max <<'\t'<< mid;

  else if (arr[0] == 'B' && arr[1] == 'A' && arr[2] == 'C')
    cout << mid <<'\t'<< min <<'\t'<< max;

  else if (arr[0] == 'B' && arr[1] == 'C' && arr[2] == 'A')
    cout << mid<<'\t'<< max <<'\t'<< min;

  else if (arr[0] == 'C' && arr[1] == 'A' && arr[2] == 'B')
    cout << max <<'\t'<< min<<'\t'<< mid;

  else if (arr[0] == 'C' && arr[1] == 'B' && arr[2] == 'A')
    cout << max <<'\t'<< mid <<'\t'<< min;

  return 0;
}
