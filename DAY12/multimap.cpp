#include<iostream>
#include<map>

using  namespace std;

int main()
{


multimap<int,string>mpp ={(101,"abc"),(102,"xyz")};


mpp.insert({103,"pqr"});
mpp.insert({104,"lmn"});
mpp.emplace(105,"stu");
mpp.emplace(106,"vwx");
mpp.insert({101,"abc"});


for(auto it : mpp)
{
    cout<<it.first<<" "<<it.second<<endl;
}

}