#include <iostream>
#include <string>

using namespace std;

int main(){
    string borze,ans;

    cin>> borze;
    int n=borze.size();
    
    int i=0;
    while(i<n)
    {
        if(borze[i]=='.')
        {
            ans=ans+"0";
            i++;
        }
        else
        {
            if(borze[i+1]=='.')
            {
                ans=ans+"1";
                i=i+2;
            }
            else
            {
                ans=ans+"2";
                i=i+2;
            }
        }
    }

    cout << ans;


return 0;
}