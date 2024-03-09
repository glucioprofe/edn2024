#include <iostream>
using namespace std;

int x[5], y;
int *apuntador;
int main(){

  //x = 2147483647;// Bytes
  //cout<<x<<endl;
/*
  cout<<&x[0]<<endl;
  cout<<&x[1]<<endl;
  cout<<&y<<endl;
  cout<<sizeof(x)<<endl;

  for(int i =0; i<100; i++){
    cout<<&x[i]<<endl;
  }
*/
    cout<<apuntador<<endl;
    x[0] = 5;
    x[1] = 10;
    apuntador = &x[0];
    cout<<x[0]<<endl;
    cout<<&x[0]<<endl;
    cout<<apuntador<<endl;
    *apuntador = 7;
    cout<<&x[0]<<endl;
    cout<<x[0]<<endl;
}