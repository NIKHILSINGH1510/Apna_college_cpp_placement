#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

  /*  string str="abcdefghij";
    //convert to upper case

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z'){
            str[i]-= 32;

        }
    }
    
    cout<<str;
    */

   string str= "abcdefghij";
   transform(str.begin(),str.end(),str.begin(), ::toupper);
   cout<<str;
}