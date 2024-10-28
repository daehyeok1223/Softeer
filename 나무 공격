#include<iostream>
using namespace std;
int grid[101][101];
int n, m;
int ans = 0;

void attack(int x){
  for (int i = x; i < x + 5; i++){
    for (int j = 0; j < m; j++){
      if(grid[i][j] == 1){
        grid[i][j] = 0;
        break;
      }
    }
  }
}

int main(){
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> grid[i][j];
    }
  }
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  attack(a - 1);


  attack(c - 1);

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if(grid[i][j] == 1){
        ans++;
      }
    }
  }

  cout << ans;
}
