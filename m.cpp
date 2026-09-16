#include <bits/stdc++.h>
using namespace std; 
int main() {
vector<double> numbers={10000,90000,75500,74000,50000,55000,450000,80000,25000,65000};
for(auto value:numbers){
    cout<<value<<" ";
}
cout<<endl;
double max=*max_element(numbers.begin(), numbers.end());
cout<<"maximum salary:"<<max<<endl;
int count=0;
for(auto value:numbers){
    if(value>=50000)
    count++;
}
cout<<count;
float sum=0;
for(auto value:numbers){
    sum+=value;
}
cout<<"total salary"<<sum<<endl;
cout<<"avg salary"<<sum/numbers.size();
}