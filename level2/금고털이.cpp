#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int W,N;
int ans = 0;
vector<pair<int,int> > v;

int main(int argc, char** argv)
{
    cin >> W >> N;
    int a,b;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        v.push_back(make_pair(b,a)); //가격을 기준으로 정렬해야 하기 때문이다.
    }
    sort(v.begin(), v.end()); //가격을 기준으로 내림차순 정렬.
    
    for(int i=v.size() - 1; i >= 0; i--){
        if(W - v[i].second > 0){
             W = W - v[i].second;
             ans += (v[i].first * v[i].second);
        }
        else{
             ans += v[i].first * W;
             break;
        }
    }
    cout<<ans;
    
   return 0;
}
