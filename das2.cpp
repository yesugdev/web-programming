#include<iostream>
#include<cmath>
using namespace std;
void solve1(float a, float b, float c){
  float p,s;
p = (a+b+c)/2;
s = sqrt(p*(p-a)*(p-b)*(p-c));
  cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
  cout<<"p:"<<p<<" s:"<<s<<endl;
  cout<<"----------------------------\n";
}
int main(){

cout<<"2-r bodlogo a. \n";
solve1(3,3,3);
solve1(3,4,5);
solve1(2,2,3);
solve1(5,7,8);
}
