#include <iostream>
using namespace std;

int main(){
    int y,z;
    cin>> y;
    int a[4];
    
    while(true){
        
        y++;
        z=y;

        for(int i=3; i>=0;i--){

            a[i]=z%10;
            z=z/10;

        } 

        if((a[0]==a[1]) || (a[0]==a[2]) || (a[0]==a[3]))
        {
            continue;
        }
       
        else if((a[1]==a[2]) || (a[1]==a[3]))
        {
            continue;
        }
         else if((a[2]==a[3]))
        {
            continue;
            
        }
        else{
            cout << y;
            return 0;
        }


    }
}