// #include<iostream>
// #include<map>
// #include<vector>
// #include<math.h>
// using namespace std;
 
// #define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// void solve()
// {
//     string str="";
//     cin>>str;
//     if(str=="abc"||str=="acb"||str=="bac"|| str=="cba" ) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;

// }
// int main()
// {
//     #ifndef ONLINE_JUDGE
//         // for getting input from input.txt
//         freopen("input.txt", "r", stdin);
//         // for writing output to output.txt
//         freopen("output.txt", "w", stdout);
//         #endif
//         fastio();
//     int t ;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        #ifndef ONLINE_JUDGE
            // for getting input from input.txt
            freopen("input.txt", "r", stdin);
            // for writing output to output.txt
            freopen("output.txt", "w", stdout);
            #endif
            fastio();
        char ch[3];
        cin>> ch;
 
         if(ch[0]=='a' && ch[1]=='b' && ch[2]=='c'){cout<<"YES"<<'\n';}
         else if(ch[0]=='b' && ch[1]=='a' && ch[2]=='c'){cout<<"YES" <<'\n';}
         else if(ch[0]=='a' && ch[1]=='c' && ch[2]=='b'){cout<<"YES"<<"\n";}
         else if(ch[0]=='c' && ch[1]=='b' && ch[2]=='a'){cout<<"YES"<<'\n';}
         else{cout<<"NO"<<'\n';}
 
 
 
    }
} 