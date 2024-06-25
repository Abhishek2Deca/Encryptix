#include<iostream>
using namespace std;
int main(){
    int n,m;
    char op;
    cout<<"Enter the first number n"<<endl;
    cin>>n;
    cout<<"Enter the second numb "<<endl;
    cin>>m;
    cout<<"Enter the Operator"<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
    cout<<"sum  is"<< n+m<<endl;
    break;
    case '-':
    cout<<"subtraction is"<< n-m<<endl;
    break;
    case 'x':
    cout<<"multiplication is"<< n*m<<endl;
    break;
    case'/':
    cout<<"devide is"<< n/m<<endl;
    break;
    default:
    cout<<"Error! operator is not in this calculator";
    break;
    }
return 0;
}