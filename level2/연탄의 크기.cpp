#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int arr[101];
int ans[101];

int main(int argc, char** argv){
  int N;
  int cnt = 0;
  int k;
  priority_queue<int> pq;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
    pq.push(arr[i]);
  }
  for (int i = 2; i <= pq.top(); i++) {
    k = 0;
    for (int j = 0; j < N; j++) {
      if (arr[j] % i == 0) {
        k++;
      }
    }
    cnt = max(cnt, k);
  }

  cout << cnt << '\n';
}
