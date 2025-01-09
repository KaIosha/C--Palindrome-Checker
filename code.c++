 #include<iostream>
using namespace std;


bool is_a_palindrom(int number){
    int newnumber=0;
    int orignal=number;
    while (number>0)
    {
       
        newnumber=newnumber*10+number%10;
        number/=10;
    }

  return(orignal==newnumber);
    
    

}

int main(){
  int num;
      cout << "Enter a number: ";
       cin >> num;

 if (is_a_palindrom(num))
 {
    cout<<"yes it's a palindrome\n";
 }else{
 cout<<"No it's a palindrom";
    return 0;
  }

}
