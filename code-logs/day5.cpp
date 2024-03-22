// problem 1
#include <iostream>
#include <string>
using namespace std;
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}
int main() {
	// Complete the program
  string s1,s2;
  cin>>s1>>s2;
  cout<<s1.length()<<" "<<s2.length()<<"\n"<<s1+s2;
  swap(s1[0],s2[0]);
  cout<<"\n"<<s1<<" "<<s2;
    return 0;
}
