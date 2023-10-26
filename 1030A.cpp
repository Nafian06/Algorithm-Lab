#include<iostream>
using namespace std;
int main() {
  int a, c, d= 0,i;
  cin>>a;
  for(i = 0; i < a; i++) {
    cin>>c;
    d = c;
    if(d == 1) {
      cout<<"HARD";
      return 0;
    }
  }
  cout<<"EASY";
  return 0;
}
