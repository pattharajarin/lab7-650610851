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
