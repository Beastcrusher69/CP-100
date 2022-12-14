#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int a,b,sum,flag=0;
    int arr[5][5];

    for(int i=0;i<5;i++)
    {
     for(int j=0;j<5;j++)
     {
        cin >> arr[i][j];
     }
    }

    for(int i=0;i<5;i++)
    {
     for(int j=0;j<5;j++)
     {
        if(arr[i][j]==1)
        {
            a=i;
            b=j;
            flag=1;
            break;
        }
     }
     if(flag==1)
        {
            break;
        }
    }

    sum=abs(2-a)+abs(2-b);

    cout << sum;

return 0;
}