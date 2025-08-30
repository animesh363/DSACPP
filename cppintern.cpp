#include <iostream>
using namespace std;

// int main(){
    // cout<<"Animesh";
    
    //PRINTING ALL THE ELEMENTS OF THE ARRAY BY TRAVERSING
    // int arr[5]  ={1,2,3,4,5};

    // cout<<"Array's Elements are: ";
    // for(int i=0; i<5; i++){
    //     cout<<arr[i] <<" ";
    // }
    // int amount;
    // cout<<"Emter Amount: ";
    // cin>>amount

    // if(amount>=5000){
    //     cout<<"Discount Applied";
    // }
    


    // char x ;
    // cout<<"Enter a character: ";
    // cin>>x;

    // switch(x){
    //     case 'A':
    //     cout << "A";
    //     break;
    //     case 'B':
    //     cout << "B";
    //     break;
    //     default:
    //     cout<<"other than A and B";
    //     break;
    // }



    // for(int i=1; i<=100;i++){
    //     if(i==3) continue; // skip the iteration when i is 3
    //     cout<<"Animesh "<<i<<endl;
    // }
    

    // int n =10;
    // while(n>0){
    //     cout<<n <<" ";
    //     n--;
    // }


    // for(int i=o;)

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum =sum + i; 
    // }
    // cout<<"Sum of numbers = " <<sum;



// }

//__________________________________________________________________

// int square(int num){
//     return num*num;
// }
// int main(){
//     int number = 12;
//     cout<< "Square of "<< number<<"is " << square(number);
//     return 0;

// }
//__________________________________________________________________


/*
Q1)calculateC(int A, int B) that returns A^2 + 2*A*B + B^2
Q2)calculateD(int A, int B) that returns A + B
*/
// __________________________________________________________________

// int first(int A, int B){
//     return A*
// }

// class Student{
//     public:
//     int roll;


//     void show(){
//         cout<<"Roll no : "<<roll<<endl;
//     }

// };
// int main(){
//     //obj creation
//     Student s1;

//     //acess data member
//     s1.roll=11;

//     //calling main function
//     s1.show();
//     return 0;
    
// }



// class Student{
//     string name;
//     int marks1, marks2, marks3;


//     void setData string



//     void sisplayMarks(){
//         cout<<"Student Name"<< name <<endl;

//     }



// };

// __________________________________________________________________



// union Locker{
//     int books;
//     float cloths;
//     char bagl;
//     char bag;
// };

// int maiin(){
//     Locker myLocker;
//     myLocker.books =5;
//     myLocker.cloths=100;
//     myLocker.bag='e';
//     cout<<myLocker.      
// }

// __________________________________________       STRECTURE AND UNION IN C++       ________________________________________



enum Mode {
    WASH,   // 0
    RINSE,  // 1
    SPIN    // 2
};

// int main() {
//     Mode currentMode;

//     currentMode = SPIN;

//     if (currentMode == WASH) {
//         cout << "Washing Mode.." << endl;
//     } else if (currentMode == RINSE) {
//         cout << "RINSE Mode.." << endl;
//     } else if (currentMode == SPIN) {
//         cout << "SPIN Mode.." << endl;
//     }

//     cout << "Numeric value of Mode: " << currentMode << endl;

//     return 0;
// }

// int main(){
//     int arr[20],n,i;
//     cout<<"Enter number of element: ";
//     cin>>n;

//     for(int i; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"\n Array after insertion: \n";
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }



//INSERTION AT END


// int main(){
// int arr[20],n,i,num;

// cout<<"Enter the number of elements";
// cin>>n;

// for(i=0;i<n;i++){
// cout<<"arr["<<i<<"]=";
// cin>>arr[i]; //store the elements in the arr
// }
// //insserton at the end

// cout<<"Enter the number to insert at the end";
// cin>>num;

// //insert at the end
// arr[n]=num;
// n++;

// cout<<"\n Array after insertion :\n";
// for(i=0;i<n;i++){
// cout<<"arr["<<i<<"]"<<arr[i]<<endl;
// }








// return 0;
// }




//INSERTION AT THE SPECIFIC POSITION
// int main(){
// int i,n,num,pos,arr[10];

// cout<<"enter the number of elements of arra: ";
// cin>>n;

// for(i=0;i<n;i++){
// cout<<"arr["<<i<<"]=";
// cin>>arr[i];
// }

// //insert new number or value
// cout<<"Enter the number to be inserted: ";
// cin>>num;


// cout<<"Enter the position at which you want to insert the number ";
// cin>>pos;

// //shifting of elements to rights side to make a space for new ele
// for(i=n-1;i>=pos;i--){
// arr[i+1]=arr[i];
// }
// //insert the elememnt / new number
// arr[pos]=num;
// n=n+1;

// cout<<"\n The array after insertion of "<<num<<"is\n";
// for(i=0;i<n;i++){
// cout<<"arr["<<i<<"]="<<arr[i]<<endl;
// }






// return 0;
// }



// __________________________________________       FRIEND FUNCTION IN C++       ________________________________________


// class Sum {
// private:
//     int a, b, c;

// public:
//     void input() {
//         cout << "Enter value of a: ";
//         cin >> a;
//         cout << "Enter value of b: ";
//         cin >> b;
//     }

//     void add() {
//         c = a + b;
//         cout << "Sum = " << c << endl;
//     }
// };

// int main() {
//     Sum s;
//     s.input();
//     s.add();
//     return 0;
// }

//________________________________________ POINTERS ________________________________________

// int main(){
//     int a;
//     int *p;
//     cout<<"Enter value of a : ";
//     cin>>a;
//     p = &a;
//     cout<<"Address of variable a="<<p <<endl;
//     cout<<"Value stored at location " <<*p;


//     *p = *p + 1;
//     cout<<"updated value is ="<<a <<endl;
//     cout<<"updated value is ="<<p <<endl;
    


//     return 0;
// }


// int main(){
//     int a, b;
//     int *p1 , *p2;
//     cout<<"Enter value of a : ";
//     cin>>a;
//     cout<<"Enter value of b : ";
//     cin>>b;
//     p1 = &a;
//     p2 = &b
//     int sum ;
//     cout<<"sum = "<<sum<<endl;
    
//     return 0;
// }


class sum {
    private:
    int a, b, c;
    public:
    void input(){
        cout<<"Enter value of a: ";
        cin>>a;
        cout<<"Enter value of b: ";
        cin>>b;
    }
    void add(){
        c=a+b;
        cout<<"sum = "<<c;
    }

};
int main(){
    sum s;
    sum *p;
    p = &s;
    p->input();
    p->add();

    return 0;
}



//this is the testing of github repo 