#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>numbers={90,75,60,57,83,97};
for(int value:numbers){
    cout<<value<<"%"<<endl;
}
cout<<endl;
int count=0;
for(auto value:numbers){
    if(value>75)
    count++;
}
count<<count;
}