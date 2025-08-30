int countDigits(int n){
    int cnt = (int)(log10(n) +1);
    return cnt;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int digits = countDigits(n);
    cout<<digits;
}