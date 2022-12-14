#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    cin>>t;

    string s,a;
    char temp;

    cin >> s;
    a=s;

    if(t==0){
        cout << a;
        return 0;
    }
    else{

        for(int i=1;i<=t;i++)
        {
            for(int j=0;j<(n-1);j++)
            {

                if(s[j]=='B' && s[j+1]=='G')
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            s=a;
        }
    }-

    cout << a;
    
return 0;
}