#include<iostream>

using namespace std;


int adiff(int a, int b){
  int c, d;
  if(a<b){
    c=b-a;
    d=c%360;
    if(d>180){
      return d=360-d;
    }else{
      return d;
    }
  }else{
    c=a-b;
    d=c%360;
    if(d>180){
      return d=360-d;
    }else{
      return d;
    }
  }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}