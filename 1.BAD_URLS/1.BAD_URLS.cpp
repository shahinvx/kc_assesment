#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin); // To prevent get input from input.txt file comment out this line
    string bad_url, good_url="";
    int flg=0;

    cin>>bad_url;

    for(int i=0; i<bad_url.length(); i++)
    {
        if(bad_url[i]=='/'){flg++;}
        else{flg=0;}

        if(flg<=1){
            good_url = good_url + bad_url[i];
        }
    }

    cout<<good_url<<endl;
    return 0;
}
