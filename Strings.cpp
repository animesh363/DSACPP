#include <bits/stdc++.h>
using namespace std;

int main(){
    //?             __________Character Array__________             
    // char str[] = {'A','n','i','m','s','h'};

    // // for (int i=0;i<6;i++){
    // //     cout<<str[i] <<" ";
    // // }

    // char ch= '\0';//0
    // cout<<int(ch);

    // char str1[]={'a','b','c','d','\0'}; //-->\0 used for terminating the it is added by default

    // char str2[]={'a','b','\0','c','d'};
    // for(int i=0;str2[i]!='\0';i++){
    //     cout<<str2[i]<<" ";
    // }



    //?             __________Strings__________ 

    // string str1 ="Animesh Anand"; //"Animesh Anand" -->This is treated as 14 size of char array 13 with space and 14 with \0 at the last
    // cout<<str1;

    //Name directly as a input

    // string name;
    // cout<<"Enter Youre name: ";
    // cin>>name;
    // cout<< "Your name is "<< name;

    //Problem
    // string str;
    // cin>>str;//Animesh Anand -> Animesh after space it is not taking it as a input
    // cout<<str;

    //solution 
    string str2;
    getline(cin,str2);
    cout<<str2;
}