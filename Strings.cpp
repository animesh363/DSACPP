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

    //// Problem
    // string str;
    // cin>>str;//Animesh Anand -> Animesh after space it is not taking it as a input
    // cout<<str;

    // //solution 
    // string str2;
    // getline(cin,str2);
    // cout<<str2;

    // //Q1)Inout a string of length n and count all vovels in the given string.
    // string str3;
    // cout<<"Enter your string: ";
    // cin>>str3;
    // int count=0;
    // for(int i=0;i<str3.length();i++){
    //     if(str3[i]=='a' || str3[i]=='A' ||  str3[i]=='e' || str3[i]=='E' ||str3[i]=='i' ||str3[i]=='I' ||str3[i]=='o' ||str3[i]=='O' ||str3[i]=='u' ||str3[i]=='U'){
    //         count++;
    //     }
    // }
    // cout<<"Total number of vovels: "<<count;

    // //We can change single character of a string => Strins are mutable in cpp

    // string str4="Animesh";
    // str4[1]='m'; //n->m
    // cout<<str4;//Amimesh

    //Q2)Ques : Input a string of size n and Update all the even positions in the string to character 'a'. Consider O-based indexing.

    string s4;
    cout<<"Enter your String: ";
    cin>>s4;

    for(int i=0;i<s4.length();i++){
        if(i%2!=0){
            s4[i]='a';
        }
    }
    cout<<s4;
}



