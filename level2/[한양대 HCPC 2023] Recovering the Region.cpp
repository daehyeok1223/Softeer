#include <iostream>
#include <string>
using namespace std;

int arr[100][100];

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    int k = 1;
    for (int i = 0; i < n; i++) {
      cout << k << " ";
      k++;
    }
    cout << '\n';
  }

}
