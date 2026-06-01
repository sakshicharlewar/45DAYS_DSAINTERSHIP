#include<iostream>
using namespace std;
int main()
{
     int arr[5] = {1, 2, 3, 4, 5};
    int num;
 int counteven=0, countodd=0;
    for(int i=0; i<5; i++){
        if(arr[i]%2==0)
        {
            counteven++;
        }
        else{
            countodd++;
        }
        

    }
    cout<<"counteven "<<counteven<<endl;
        cout<<"countodd "<<countodd;
    return 0;
}