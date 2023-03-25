//program to find mode of a number

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a[50],n;
    cout<<"How much element you want to enter? ::";
    cin>>n;
    int modeValue = 1;
    int unique[n];
    int mode[n];
    int u = 0;
    int k = 0;

    //accepting the vale for an array
    for(int i=0;i<n;i++){
        cout<<"Enter the value for "<<i+1<<"th element :: ";
        cin>>a[i];
    }


    unique[0] = a[0];
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < u+1; j++)
        {
            if (a[i] == unique[j])
            {
                flag = 1;
                continue;
            }
        }
        if (flag != 1){
            unique[++u] = a[i];
        }
    }

    for(int i=0;i<u+1;i++){
        cout<<"unique "<<unique[i]<<"\n";
    }

   for(int i=0;i<u+1;i++){
    
        int val=1;
        for(int j=0;j<n;j++){
            
            if(a[j]==unique[i]){
                val++;
            }
        }

        if((val-1) > modeValue){
            modeValue = val-1;
            mode[0]=a[i];
            k=0;
        }

        if(modeValue == (val-1)){
            modeValue = val-1;
             mode[k++] = unique[i];
        }
   }

    for (int i = 0; i < k; i++)
    {
        cout << mode[i] << " , ";
    }
    cout << "is mode : which has repeated " << modeValue << " time.";
}