#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[10][10];
int ans = 10;

vector<int> v;

void cal(int k, int m, int n){
  int ans = k + m + n;
  if (ans == 3 || ans == 9) {
    v.push_back(0);
  } 
  else if (ans == 4 || ans == 8) {
    v.push_back(1);
  } 
  else if (ans == 5) {
    if(k == 3 || m == 3 || n == 3){
      v.push_back(2);
    } 
    else {
      v.push_back(1);
    }
  } 
  else if (ans == 6) {
    if(k == 2 && m == 2){
      v.push_back(0);   
    }
    else{
      v.push_back(2);
    }
  } 
  else if (ans == 7) {
    if(k == 1 || m == 1 || n == 1){
      v.push_back(2);
    } 
    else{
      v.push_back(1);
    }
  }
}

int main(int argc, char** argv){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cin >> arr[i][j];
    }
  }

  cal(arr[0][0], arr[1][0], arr[2][0]);
  cal(arr[0][1], arr[1][1], arr[2][1]);
  cal(arr[0][2], arr[1][2], arr[2][2]);
  cal(arr[0][0], arr[0][1], arr[0][2]);
  cal(arr[1][0], arr[1][1], arr[1][2]);
  cal(arr[2][0], arr[2][1], arr[2][2]);

  for (int i = 0; i < v.size(); i++){
    ans = min(ans, v[i]);
  }

  cout << ans;
}
