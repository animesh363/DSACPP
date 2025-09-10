#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<< "Enter number: ";
//     for(int m=0;m<3;m++){
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             for(int j=1; j<=i ;j++){
//                 cout<<" *";
//             }
//             cout<<endl;
//         }   
//     } 
// }

// void greeting(){
//     cout<<"Hello!"<<endl;
//     cout<<"Good Morning"<<endl;
// }
// int main(){
//     greeting();
// }


//fUNCTIONS 

// void pattern(int x){
//     for(int i=1;i<=x;i++){
//         for (int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     pattern(3);
//     pattern(4);(Actual argument )
//     pattern(5);
// }

// int sum(int x, int y){
//     return x + y;
// }
// int main(){
//     int num1 =5;
//     int num2 = 6;
//     cout<<sum(num1, num2); //Formal argument
// }
// int mini(int n1, int n2){
//     int a;
//     if(n1<n2) a = n1;
//     else a=n2;
//     return a;
// }

// int main(){
//     cout<<mini(4,6);
// }



// ________________________________________________________     PERMUTATION AND COMBINATION     ________________________________________________________

//COMBIONATION:) choosing r items out of n items  nCr = n! / (r!(n - r)!)
// int main(){
//     int n, r;
// cout<< "enter n: ";
// cin>>n;
// cout<<"enter r: ";
// cin>>r;

// int nfact =1;
// for(int i=2; i<=n;i++){  
//     nfact = nfact * i;        
// }
// int rfact = 1;
// for(int i=2; i<=r; i++){
//     rfact = rfact * i;
// }
// int nrfact = 1;
// for (int i=2; i<=(n-r); i++){
//     nrfact = nrfact * i;
// };

// int ncr = nfact / (rfact * nrfact);
// cout<<ncr;
// }

//with function 

int fn(int x){
    int fact=1;
    for(int i=2;i<=x; i++){
        fact = fact * i;
    }
    return fact ;
}
int main(){
    int n, r;
    cout <<"Enter n and r: ";
    cin>>n >>r;
    int nfact = fn(n);
    int rfact = fn(r);
    int nrfact = fn(n-r);

    int ncr = nfact / (rfact * nrfact);
    cout<<ncr;

}


//PERMUTATION:) number of ways to arrange or select objects from a given set of objects  nPr = n! / (n - r)!

// int main(){
// int n, r;
// cout<<"Enter n: ";
// cin>>n;
// cout<<"Enter r: ";
// cin>>r;
// int nfact = 1;
// for(int i=2; i<=n; i++){
//     nfact = nfact * i;
// }
// int nrfact = 1;
// for(int i=2; i<=(n-r);i++){
//     nrfact = nrfact * i;
// }

// int npr = nfact / nrfact ;
// cout<< npr;
// }


// with function 

// int fn(int x){
//     int fact=1;
//     for(int i=2;i<=x; i++){
//         fact = fact * i;
//     }
//     return fact ;
// }
// int main(){
//     int n, r;
//     cout <<"Enter n and r: ";
//     cin>>n >>r;
//     int nfact = fn(n);
//     int nrfact = fn(n-r);
    
//     int npr = nfact / nrfact;
//     cout<<npr;

// }








// int fact(int x){
//     int f = 1;
//     for(int i=2;i<=x;i++){
//         f = f * i;
//     }
//     return f;
// }
// int com(int n, int r){
//     int ncr = fact(n) / (fact(r) * fact(n-r));
//     return ncr;
// }
// int per(int n, int r){
//     int npr = fact(n) / fact(n-r);
//     return npr;
// }
// int main(){
//     int n, r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Enter r: ";
//     cin>>r;
//     cout<<"ncr = " << com(n, r) <<endl;
//     cout<<"npr = " << per(n, r) <<endl;

// }



//PASCLE TRIANGLE

// int fact(int x){
//     int f = 1;
//     for(int i=2;i<=x;i++){
//         f=f*i;
//     }
//     return f;
// }
// int combn(int n, int r){
//     int ncr = fact(n) / (fact(r) *fact(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){   
//             cout<<combn(i,j) << " ";
//         }cout<<endl;
//     }
// }




