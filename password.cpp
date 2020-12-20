#include<iostream>
using namespace std;
int main()
{   string s;
    int res=0;
    int small=0;
    int special=0;
    int num=0;
    int key;
    // Password game.
    cout<<"TO PLAY input 1 and Press Enter"<<endl;
    cin>>key;
    if(key==1){
    cout<<"Hello there !"<<endl<<"Someone is Trying to hack and get the Nuclear codes!!"<<endl<<"The HACKER has already beaten the security system"<<endl;
    cout<<"You now have set up a password and protect the Codes"<<endl<<"Follow the instruction carefully and write the password"<<endl;
    cout<<"Your password must contain atleast one Uppercase ,one lowercase , one number and one  special character"<<endl;
    cout<<"Special character include [ # $ %  & * + () ' , - . /] only "<<endl;
    cout<<"Your password must be atleast  8 characters long."<<endl;
    cout<<"Enter Password:"<<endl;
    cin>>s;
    int n=s.length();
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {    if(n<8)
        {cout<<"Too short"<<endl<<"You Lost";
            break;
        }
        arr[i]=s[i];
        if((arr[i]<=90) && (arr[i]>=65))
        {
            res++;
        }
        else if((arr[i]>=97)&&(arr[i]<=122))
        {
            small++;
        }
        else if((arr[i]>=35)&&(arr[i]<=47))
        {
            special++;
        }
        else if((arr[i]>=48)&&(arr[i<=57]))
        {
            num++;
        }
        
    
     
     }
        int z=res;
        int y=small;
        int w=special;
        int v=num;
        if((z<1)&&(n>7))
        {
        cout<<"Uppercase letter missing"<<endl;
        cout<<"YOU LOST"<<endl;
     }
        if ((y<1)&&(n>7)){
        cout<<"Lowercase letter missing"<<endl;
        cout<<"YOU LOST"<<endl;
     }
        if((w<1)&&(n>7)){
        cout<<"Special characters missing"<<endl;
        cout<<"YOU LOST"<<endl;
        }
        if((v<1)&&(n>7)){
        cout<<"Numbers are missing"<<endl;
        cout<<"YOU LOST"<<endl;
        }

     if((z>=1)&&(y>=1)&&(w>=1)&&(v>=1)&&(n>7))
        {
        cout<<"CODE PROTECTED"<<endl;
        cout<<"YOU WON"<<endl;
        
        }

     

    
    }
    
    return 0;
}