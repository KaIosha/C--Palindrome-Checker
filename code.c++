 #include<iostream>
using namespace std;


bool is_a_palindrom(int number){
    int newnumber=0;
    while (number>0)
    {
        newnumber=number%10;
        number/=number;
    }

  return(number==newnumber);
    
    

}

int main(){
 if (is_a_palindrom(/*/Any int number*/))
 {
    cout<<"yes it's a palindrome\n";
 }
 cout<<"No it's a palindrom";
    return 0;
}