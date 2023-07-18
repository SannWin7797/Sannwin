#include <iostream>
using namespace std;
int main()
{
int num=1;
cout<<"Choose 2 to 10\n";
int digit;
cin>>digit;
if(digit>=2 && digit<=10){
while(num<=10){
cout<<digit<<"*"<<num<<"="<<digit*num<<endl;
num++;
}
}
else{
cout<<"try again";
}
}