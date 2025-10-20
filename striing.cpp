#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    while(N--){

        string s,t;
        cin>>s>>t;
        string result="";

        int lenS=s.length();
        int lenT=t.length();
        int minLen=min(lenS,lenT);

        for(int i=0;i<minLen;i++)
        {
            result=result+s[i];
            result=result+t[i];
        }
        if(lenS>lenT)
            result+=s.substr(minLen);

        else if(lenT>lenS)
            result+=t.substr(minLen);

        cout<<result<<endl;
    }
    return 0;
}

