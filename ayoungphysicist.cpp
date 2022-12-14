#include <iostream>
using namespace std;

int main(){
    int N,a=0,b=0,c=0;
    cin>> N;
    int arr[N][3];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >>arr[i][j];
        }
        
    }

    for(int i=0;i<N;i++){
        a=a+arr[i][0];
    }
    for(int i=0;i<N;i++){
        b=b+arr[i][1];
    }
    for(int i=0;i<N;i++){
        c=c+arr[i][2];
    }

    if((a==0)&&(b==0)&&(c==0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";

    }

return 0;
}