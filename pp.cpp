#include <iostream>
using namespace std;

int main(){
    int n, m ;
    cin >> n ;
    cin >> m;

    for(int i=2; i<m;i++){
    
        if((m%i)==0){
            cout << "NO";
            return 0;
        }
    }
    
     bool flag;
    
    for(int i=n+1; i<m; i++){
         for(int j=2; j<i;j++){
            flag=0;
                if(i%j==0){
                    flag=1;
                    break;
                }
         }
            if(flag==0){
                cout << "NO";
                return 0;
            }   
    }

    cout << "YES";
    return 0;
}