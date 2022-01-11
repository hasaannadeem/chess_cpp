#include <iostream>

using namespace std;

int main()
{
const char BLACK = 219;
const char WHITE = 32;
int LENGTH;
const int BLOCK = 3;
cout<<"Enter the length of the CHESS board U wanna Print"<<endl;
cin>>LENGTH;
  for(int i = 0;i < LENGTH;i++){
  for(int u = 0;u < BLOCK;u++){
  for(int j = 0;j < LENGTH;j++){
      int c = (i + j) & 1;
      for(int k = 0;k < BLOCK;k++){
          if(c == 1){
              cout<< BLACK;
          }
          else{
              cout<< WHITE;
          }
      }
  }
  cout<<endl;
  }
  }
  return 0;
}

