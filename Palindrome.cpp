#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    bool isPalendrom = true;
    for (int i = 0; i < n; i++) {
        if(str[i]=='?'&&str[n-i-1]=='?'){
            str[i]='a';
            str[n-i-1]='a';
        }
        else if(str[i]=='?'){
            str[i]=str[n-i-1];
        }
        else if(str[n-i-1]!='?'&&str[i]!=str[n-i-1]){
            isPalendrom = false;
            break;
        }
    }
    isPalendrom?cout<<str<<endl:cout<<-1;
    return 0;
}
