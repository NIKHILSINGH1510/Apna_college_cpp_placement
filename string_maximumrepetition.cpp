#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

        string str = "abcanhagapaja";
        
        int freq[26];

        for (int i = 0; i < 26; i++)
        {
            /* code */freq[i]=0;
        }
        
        for (int i = 0; i < str.length(); i++)
        {
            /* code */freq[str[i]-'a']++;
        }
        
        char ans ='a';

        int maxfreq=0;

        for (int i = 0; i < 26; i++)
        {
            /* code */if(freq[i]>maxfreq){
                maxfreq= freq[i];

                ans = i+'a';
            }
        }
        
        cout<<maxfreq<<" "<<ans;
    return 0;
}