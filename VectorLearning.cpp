#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("Vectorinput.txt","r",stdin);
    freopen("Vectoroutput.txt","w",stdout);


vector <int> number;
int x;
cin>> x;
for(int i=0;i<x;i++){
int num;
cin>>num;
    number.push_back(num);
}
sort(number.begin(), number.end());
for(int i=0;i<number.size();i++){
    cout <<number[i] <<"  ";
}

return 0;
}
