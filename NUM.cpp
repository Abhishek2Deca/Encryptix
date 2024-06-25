#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    char input;
    int inputuser;
    do{
     int  var=rand()%10+1;
     cout<<"Enter any num between 1 to 10"<<endl;
     cin>>inputuser;
     cout<<endl;
     if(inputuser==var)
     {
        cout<<"Congratulations! You Guess Correct"<<endl;
     }
     else{
        cout<<"Sorry, You Guess Wrong NUM "<<endl;
     }
     cout<<"Would You want to Try Again or Not Y/N";
     cin>>input;
     cout<<endl;
    }
    while(input!='N');
    cout<<"Game end"<<endl;
}