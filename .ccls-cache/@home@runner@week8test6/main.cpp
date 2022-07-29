#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  string str;
  double a, b;
  char c;
  int l;
  // step 1: accept user input
  cin>>c>>l>>n;
string output;
  for (int i = 0; i < n.length(); i+=3) {
    string s = n.substr(i, i+3);
    int n_s = stoi(s);
    //c=l, c = 900, c = B;
    //n_s = 65
    //A+900-65?
    //66+900-65 = 901;
    //900 to 65?
    //835+65 = 900
    //900-65-c+ch?
    //c=A, l = 900, ch = 65;
    //900-65-65+65;
    //900-'A'-c=pattern; 
    //var = 900-66+65 = 835;
    //var+ch=x
    //835+'B' = x;
    //901 = x;
    //var = 300-66+65 = 299
    //299+'B' = x;
    //365 = x;
    //use 299 and add by ch!
    //x = 299+'B'-'A'!!! no
    //x = 300!!! no
    // char ch = 'A' + (n_s-65);
    char pat = l-c+'A';
    char ch = n_s-pat+'A';
    //pat = 299, n_s = 300 - 65;
    //n_s-pat+'A';
    //300-299+'A';
    //1+'A';
    //1+65;
    //66
    //66 = 'B'
    //ch = 65; 100-65+65 = 35+65 = 90 = Z
    //100-65+90 = 35+90 = 125
    //35 + x = 65
    //x = 30
    //200-65+30 = 135
    output.push_back(ch);

  }
  // for(int i = 0; i<output.length(); i++){
  //   out;put
  // }
  cout<<output;
}