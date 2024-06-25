#include<iostream>
#include<windows.h>
//this is use for clear screen,pause terminal,system color*****
using namespace std;
void print_tasks(string tasks[],int task_count){
cout<<"Task To Do:"<<endl;
cout<<"--------------------------------"<<endl;
for(int i=0;i<task_count;i++)
{
    cout<<"Task"<<i<<":"<<tasks[i]<<endl;
}
cout<<"--------------------------------"<<endl;
}
int main()
{
string tasks[10]={""};
//know how many task  added
int task_count=0;
int option=-1;
while(option!=0){
    cout<<"---To Do List---"<<endl;
    cout<<"1-To Add New Task"<<endl;
    cout<<"2-To View The Task"<<endl;
    cout<<"3-Delete The Task"<<endl;
    cout<<"0-Terminate The Programme"<<endl;
    cin>>option;
    switch (option)
    {
    case 1:{
        if(task_count >9)
        {
            cout<<"Task List Is Full"<<endl;
        }
        else{
            cout<<"Enter The New Task"<<endl;
            cin.ignore();
            cin>>tasks[task_count];
            task_count++;
        }
        break;
    }
    case 2:
    {
        system("cls");
        print_tasks(tasks,task_count);
        break;
        }
    case 3:{
        system("cls");
        print_tasks(tasks,task_count);
        int del_task=0;
        cout<<"Enter The Task Delete"<<endl;
        cin>>del_task;
        if(del_task<0||del_task>9){
            cout<<"You Enter The Invalide Task Num"<<endl;
            break;
        }
        for(int i=del_task;i<task_count;i++){
            tasks[i]=tasks[i+1];
        }
        task_count=task_count -1;
        break;
    }
 case 0:{
    cout<<"Terminating The Programme------"<<endl;
    break;
 }
 default:{
    cout<<"You Enter The Invalid Value"<<endl;
 }
}
}
return 0;
}