#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str="programing";
    // cout<<"enter the string";
    // getline(cin,str);
    // cout<<str[0]<<endl;
    // cout<<str[1]<<endl;
    // cout<<str[2]<<endl;
    // cout<<str[3]<<endl;
    // cout<<str[4]<<endl;
    // for(int i=0; i<str.length(); i++)
    // for(int i=0; i<str.size(); i++)
    // {
    //     cout<<str[i];
    // }
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.append("language")<<endl;
    cout<<str.substr(0,3)<<endl;
    cout<<str.find("gram");

    return 0;
}