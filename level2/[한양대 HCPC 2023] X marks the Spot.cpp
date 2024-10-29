#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(int argc, char** argv){
  int N;
  int flag;
  int ans;
  vector<char> v;
  cin >> N;
  for (int i = 0; i < N; i++){
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
      if(a[i] == 'x' | a[i] == 'X'){
        ans = i;
        break;
      } 
    }
  
    if(b[ans] >= 97 && b[ans] <= 122){
      v.push_back(b[ans] - 32);
    } 
    else {
      v.push_back(b[ans]);
    }
  }
  for (int i = 0; i < v.size(); i++){
    cout << v[i];
  }
}

//65 = A, 97 = a
