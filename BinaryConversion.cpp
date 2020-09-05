#include<bits/stdc++.h>
using namespace std;

void modexpo(vector<int> , int, int );

int main(){

freopen("base2in.txt","r",stdin);
freopen("base2out.txt","w",stdout);
cout<<"\nenter power , base, modnumber \n";
int x,b,mn;
cin>>x>>b>>mn;
cout <<"\n\n Exponent value "<<x <<"   Base value  "<<b<<"  ModuleNumber " <<mn  ;
cout<<"\n\n \("<<b<<"^"<<x<<"\)%"<<mn ;
int r;
vector<int> v;
while(x>0){
    r= x%2;
    x = x/2;
    v.push_back(r);

}


 cout<<"\n\n vector forward contain data \n\n" ;
 for(int i=0 ; i < v.size();i++){
        cout<<"  "<<v[i];
 }

int sum = 0;
cout<<"\n\n vector forward sum contain data \n\n" ;
for(int i=0 ; i < v.size();i++){
        if(v[i] != 0){
int val = pow(2,i);
sum +=val ;
cout<<"  "<<val ;
    }

} cout<<"\n\n "<<sum;

//passing vector test

modexpo(v,b,mn);
return 0;
}

void modexpo(vector<int> v,int b, int modnum){
    cout<<"\n\n";
     int ans =1;
 int power = b% modnum;
 for(int i =0;i<v.size();i++){
    if(v[i] !=0){
        ans = ans*power%modnum ;
    }
    power = power* power % modnum ;
 }
 cout <<"\n\n total reminder "<<ans;

}
