#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    char ch[20];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        c++;
    }
    for(int i=c-n;ch[i]!='\0';i++){
        cout<<ch[i];
    }
    for(int i=0;i<=c-n-1;i++){
        cout<<ch[i];
    }
    return 0;
}
