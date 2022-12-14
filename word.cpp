#include <iostream>
#include <string>

using namespace std;


int main(){
    int n,cap=0,small=0;
    string s;

    cin >> s;
    n=s.size();

    int t[n];

    for(int i=0 ;i<n;i++)
    {
        if(s[i]>=97 && s[i]<=122)
            {
                small++;
                t[i]=0;
            }
        else
        {
            cap++;
            t[i]=1;
        }
        }

        if(cap>small){
            for(int i=0 ;i<n;i++)
            {
                if(t[i]==0)
                {
                    s[i]=s[i]-32;
                }
            }  
        }
        else{
            for(int i=0 ;i<n;i++)
            {
                if(t[i]==1)
                {
                    s[i]=s[i]+32;
                }
            }  
        }

        cout << s;
}
    

