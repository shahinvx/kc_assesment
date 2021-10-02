#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin); // To prevent get input from input.txt file comment out this line

    string first_num , second_num, total_sum="";
    cin>>first_num>>second_num;

    if(first_num.length() < second_num.length()){swap(second_num, first_num);}

    int length_difference = first_num.length() - second_num.length();

    int carry=0;

    for(int i=second_num.length() - 1; i>=0; i--)
    {
        carry = (first_num[i+ length_difference]-'0') + (second_num[i]-'0') + carry;
        //string chk = to_string(carry);
        int last_num = carry%10;
        total_sum.push_back(last_num + '0');
        carry = carry/10;
        //cout<<"Carry : "<<carry<<endl;
    }
    if(second_num.length()<first_num.length())
    {
        for(int i=first_num.length() - second_num.length() - 1; i>=0; i--)
        {
            carry = (first_num[i]-'0') + carry;
            int last_num = carry%10;
            total_sum.push_back(last_num + '0');
            carry = carry/10;
            //cout<<"Carry : "<<carry<<endl;
        }
        if (carry!=0){total_sum.push_back(carry + '0');}
    }

    reverse(total_sum.begin(), total_sum.end());
    cout<<total_sum<<endl;
    return 0;
}
//322
//222
