#include<bits/stdc++.h>
using namespace std;
int main(){

freopen("sortinput.txt","r",stdin );
freopen("sortoutput.txt","w",stdout);

int x;
cin >>x;
int arr[x];
for(int i =0;i<x;i++){
    cin>>arr[i];
}
//bubble sort
for(int i=0;i<x;i++){

    for(int j =0;j<x-1;j++ ){ // for(int j =0;j<x-i-1;j++ ){
        if(arr[j] > arr[j+1]){
            int t= arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t ;
        }
        int m = i%5, m1 = j%4;
       if( (m==2||m==3) && (m1==2||m1==3) )
        cout<<" "<<" ";
       else
        cout <<" "<<"*";
    }
    cout <<"\n";
}
for(int i=0;i<x;i++){
    cout <<"  "<<arr[i];
}

return 0;

}
