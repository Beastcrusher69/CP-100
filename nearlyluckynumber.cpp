#include <iostream>
using namespace std;

int main(){
    long long int n;
    int count=0,ld;
    cin >> n;

    if(n==0){
        cout << "NO";
        return 0;
    }
    else{

    while(n>0){

        ld=n%10;

        if(ld==4 || ld==7){
            count++;
        }
        n=n/10;

    }

    if(count==4 || count==7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
 
return 0;
}
}