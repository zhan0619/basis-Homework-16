#include<iostream>
using namespace std;

int main()
{
    const char *a[10] = {"零","一","二","三","四","五","六","七","八","九"};
    cout<<"請輸入阿拉伯數字"<<endl;
    int i;
    while(cin>>i)
    {
        cout<<a[i];
    }
}
