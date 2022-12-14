#include <iostream>
using namespace std;

int main(){
    int a[3][3];
    int b[3][3]={1,1,1,1,1,1,1,1,1};

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<3; i++)
    {   

        for (int j=0; j<3; j++){
            int sum=0;

            sum=a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1];

            a[i][j]=sum;
           
        }
    }

     for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++){
            if((a[i][j]%2)== 0)
            {
                continue;
            }
            else{
                b[i][j]=0;
            }
        }
    }

     for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }

    
return 0;
}