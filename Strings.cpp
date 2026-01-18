#include <bits/stdc++.h>
using namespace std;

int main(){
    //?             __________Character Array__________             
    // char str[] = {'A','n','i','m','s','h'};

    // // for (int i=0;i<6;i++){
    // //     cout<<str[i] <<" ";
    // // }

    // char ch= '\0';   //0
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

    // string s4;
    // cout<<"Enter your String: ";
    // cin>>s4;

    // for(int i=0;i<s4.length();i++){
    //     if(i%2!=0){
    //         s4[i]='a';
    //     }
    // }
    // cout<<s4;

    //Size of a string
    // string str="Animesh Thakur";
    // cout<<"Lenth of the string is:"<<str.size()<<endl; //we can use both actual lenth excluding null character
    // cout<<"Lenth of the string is:"<<str.length();

    // +Oprator
    // string s1="abc";
    //string s2="def"
    // string r=s1+s2;
    // cout<<r;//abcdef

    // string s1="abc";
    // string r=s1+"def"; //add s1+"def" or "def"+s1
    // cout<<r;//abcdef

    // string s1="abc";
    // string r=s1+'d';
    // cout<<r;//abcd

    // string s1="Anime";
    // s1.push_back('s');
    // s1.push_back('h');
    // cout<<s1<<endl;
    // s1.pop_back();
    // cout<<s1;

    //reverse()

    // string s="abcde";
    // reverse(s.begin(),s.end());
    // cout<<s;//edcba

    // string s="abcde";
    // reverse(s.begin(),s.begin()+2);
    // cout<<s;//bacde

//Q3)Ques : Input a string of even length and reverse the first half of the string.
    // string s;
    // cout<<"Enter a string of even lenth: ";
    // cin>>s;
    // if(s.size()%2!=0){
    //     cout<<"Type string of even length only";
    // }else{
    //     reverse(s.begin(),s.begin()+(s.size()/2));
    //     cout<<s;
    // }

//Q4)Ques : Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.

    // string s;
    // cout<<"Enter a string whose length should be greater than 5 :";
    // cin>>s;
    // if(s.size()<=5){
    //     cout<<"Your string not having length greater than five: "<<endl;
    // }else{
    //     reverse(s.begin()+1,s.begin()+5);
    //     cout<<"Expected output: " + s;
    // }

    //Substr()
    // string s1="animesh";
    // cout<<s1.substr(2);//imesh  (strting index)

    // string s2="animesh";
    // cout<<s2.substr(1,4);//nime   (strting index and length )

//Q5)

  

    


    


}



