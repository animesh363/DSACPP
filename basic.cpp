#include <bits/stdc++.h>
using namespace std;


//COUNT DIGIT (optimal) O(1)
// int countDigits(int n){
//     int cnt = (int)(log10(n) +1);
//     return cnt;
// }

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int digits = countDigits(n);
//     cout<<digits;
// }



//FUNCTIONS

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }


// int main(){
//     int num1, num2;
//     cout<<"Enter num1 : ";
//     cin>> num1;
//     cout<<"Enter num2: ";
//     cin>>num2;
//     cout<<"The Sum is "<<sum(num1, num2);

//     return 0;
// }


// int sum(int a,int b);

// int main(){
//     int num1, num2;
//     cout<<"Enter num1 : ";
//     cin>> num1;
//     cout<<"Enter num2: ";
//     cin>>num2;
//     cout<<"The Sum is "<<sum(num1, num2);

//     return 0;
// }
// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }




// void printDivisor(int n){
//     for(int i=1; i<=n; i++){
//         if(n % i == 0){
//             cout <<i <<" ";
//         }
//     }
// }
// int main(){
//     int n; 
//     cout<<"Enter a number: ";
//     cin>>n;
//     printDivisor(n);
//     return 0;
// }

//PRIME NUMBER

// int main(){
//     int n;
//     int cnt=0;
//     cout<<"Enter a number: ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cnt++;
//         } 
//     }
    
//     if(cnt==2){
//         cout<<"prime";
//     }else{
//         cout<<"not a prime number: ";
//     }
// }


//ARRAY
// int main(){
//     string s ="Animesh";
//     cout<<s[0]<<"\n";
//     cout<<s.size();
    
// }

   //FUNCTIONS
// void printName(){
//     cout<<"Animesh ka Function";
// }
// int main(){
//     printName();
// }

void printName(string name){
    cout<<"Hey "<<name;
}
int main(){
    string name;
    cout<<"Name: ";
    cin>>name;

    printName(name);

    string name2 = "Pranav";
    cin>>name2;
    printName(name2);
}


//MIN MAX FUNCTION

// int main(){
//     int num1, num2; 
//     cout<<"Enter num1 and num2: ";
//     cin>>num1 >> num2;
//     int minimum = min(num1, num2);
//     int maximum = max(num1, num2);
//     cout<< "min value is " <<minimum <<endl;
//     cout<<"Max value is " <<maximum <<endl;
// }

//_____________________________________________ STL _____________________________________________

// void print(){
//     cout<<"Animesh";

// }
// int sum(int a, int b){
//     return a + b;
// }

// int main(){
//     print();
//     int result = sum(4,7);
//     cout<<"\nSum is = " <<result;

//     return 0;
// }



//PAIR ; --> lies inside <utality> library


// void explainPair(){
//     // pair<int, int> p = {1,3};
//     // cout<< p.first <<" " << p.second; //pair ke value call kar rahe hian

//     // pair <int, pair<int, int>> p = {1,{3,6}}; //nested pair
//     // cout<<p.first << " " <<p.second.first <<" " <<p.second.second <<endl; 

//     pair <int, int>arr[] = { {1,2}, {3,4}, {5,6}, {7,8}};
//     cout<<arr[1].first <<endl;
//     cout<<arr[2].first <<endl;
// }
// int main(){
//     explainPair();
// }

//_____________________________________________________ VECTOR _____________________________________________________

// void explainVector(){
//     vector<int> v;

//     v.push_back(1);
//     v.emplace_back(2);

//     vector <pair<int, int>> vec;
//     v.push_back({1,2});
//     v.emplace_back(1,2);

//     vector <int> v(5,100);

//     vector <int> v(5); // defing 5 vector of size 5 but no value==>garbage value

//     vector <int> v1(5, 20);
//     vector <int> v2(v1); // copy values of v1 into v2
// }
// int main(){
//     explainVector();
// }




//_____________________________________________________ LIST _____________________________________________________


// void explainList() {
//     list<int> ls;

//     ls.push_back(2);      // 2 at back
//     ls.emplace_back(4);   // 4 at back

//     ls.push_front(5);     // 5 at front
//     ls.emplace_front(10); // 10 at front

//     for (auto it = ls.begin(); it != ls.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

// int main() {
//     explainList();
//     return 0;
// }

//_____________________________________________________ DEQUE _____________________________________________________

// void explainDeque(){
//     deque<int>dq;
//     dq.push_back(1); //1
//     dq.emplace_back(2);//1 2
//     dq.push_front(3);//3 1 2
//     dq.emplace_front(4);//4 3 1 2 
//     dq.pop_back();//4 3 1  
//     dq.pop_front();//3 1



//     cout << "Deque elements: ";
//     for (auto it = dq.begin(); it != dq.end(); ++it) {
//         cout << *it << " ";
//     }

// }

// int main(){
//     explainDeque();
//     return 0;
// }



//_____________________________________________________ STACK _____________________________________________________

// void explainStack(){

//     stack<int>st;

//     st.push(1);
//     st.push(2);
//     st.push(3);

//     st.emplace(5);

//     cout<<"Top Element: "<<st.top()<<endl;
    
    
// }

// int main(){
//     explainStack();
// }



//_____________________________________________________ QUEUE _____________________________________________________


// void explainQueue(){
//     queue<int>q;

//     q.push(1); //{1}
//     q.push(2); //{1 2}
//     q.emplace(3);//{1 2 3}

//     q.back() += 5;//{1 2 8}  last element changed
//     cout<<q.back()<<endl; //8
//     cout<<q.front()<<endl;//1

//     q.pop();
//     cout<<q.front()<<endl;//

//     cout<<"Front element: "<<q.front() <<endl;
//     cout<<"back element: "<<q.back()<<endl;


// }
// int main(){
//     explainQueue();

//     return 0;
// }


//_____________________________________________________ PRIORITY_QUEUE _____________________________________________________

// void priorityQueue(){
//     // priority_queue <int> pq; //max heap

//     // pq.push(1);
//     // pq.push(2);
//     // pq.push(4);
//     // pq.emplace(5);


//     // cout<<"Top element is: "<< pq.top();
//     // pq.pop();

//     priority_queue<int, vector<int>,greater<int>> pq;//min heap
//     pq.push(9); //9
//     pq.push(7); //7 9
//     pq.push(5); //5 7 9

//     cout<<pq.top();
// }
// int main(){
//     priorityQueue();

//     return 0;
    
// }


//_____________________________________________________ SET _____________________________________________________

// void explainSet(){
//     set <int> st;

//     st.insert(1); //{1}
//     st.insert(2); //{1 2}
//     st.emplace(2); //{1 2} only unique
//     st.insert(4); //{1 2 4}
//     st.insert(3); //{1 2 3 4} sorted manner

//     //{1 2 3 4 5}
//     auto it = st.find(3);
//     auto it = st.find(6);

//     st.erase(5);

    


// }
// int main(){
//     explainSet();

//     return 0;
// }



//_____________________________________________________ MULTISET _____________________________________________________


// void explainMultiset(){

//     multiset<int>ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(2);

//     // ms.erase(1);// erased all ocurance of 1

//     int cnt = ms.count(1);
//     cout<<"Occurancce of 1 is: " << cnt <<endl;

//     ms.erase(ms.find(1)); //first ocuurance of 1 is deleted



//     cout << "Elements in multiset: ";
//     for (int x : ms) {
//         cout << x << " ";
//     }
    
// }

// int main(){
//     explainMultiset();
// }

//_____________________________________________________ RECURSION _____________________________________________________


// int cnt=0;
// void print(){
//     if(cnt == 3) return;
//     cout<<cnt<<endl;
//     cnt++;
//     print();

// }
// int main(){
//     print();

// }


// PRINTING NAME N TIMES

// void fn(int i, int N){
//     if(i>N) return;
//     else {
//         cout<<"Animesh  " << i << endl;
//     }
//     fn(i+1, N);
// }
// int main(){
//     int N;
//     cout<<"Enter value of n: " ;
//     cin>>N;
//     fn(1, N);
// }

//PRINT LINEARLY FROM 1 TO N

// void fn(int i, int n){
//     if (i>n) return;
//     else cout<<i <<endl;
//     fn(i+1, n);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     fn(1, n);
// }

// void fn(int i, int n){
//     if (i<1) return;
//     else cout<<i <<endl;
//     fn(i-1, n);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     fn(n, n);
// }

//SUM OF FIRST N NUMBERS (Parametrised way)
// void fn(int i, int sum){
//     if(i<1){
//         cout<<(sum);
//         return;
//     }
//     fn(i-1,sum+i);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
    
//     fn(n, 0);

// }


//SUM OF FIRST N NUMBERS (Functional way)

// int sum(int n){
//     if(n == 0) return 0;
//     else return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n; 
//     cout<<sum(n);
// }


//FACTORIAL OF N

// int fact(int n){
//     if (n==0) return 1;
//     else  return n * fact(n-1);
// }

// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     cout<<fact(n);
// }
  
//FIBONACI SERIES BY RECURSION
// int fn(int n){
//     if(n<=1) return n;
//     int last = fn(n-1);
//     int slast = fn(n-2);

//     return last + slast;
// }
// int main(){
//     cout<<fn(4);
// }


// int main(){
//    string s;
//    cin>>s;

   //pre compute
//    int hash[26] = {0};
//    for(int i = 0; i<s.size(); i++){
//       hash[s[i] -'a']++ ;
//    }

//    int q;
//    cin>>q;
//    while(q--){
//       char c;
//       cin>>c;
//       //fetch
//       cout<<hash[c-'a'] <<endl;
//    }
//    return 0; 
// }










