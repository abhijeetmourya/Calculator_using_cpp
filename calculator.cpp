#include <iostream>

using namespace std;

int main()
{
   int num1, num2;
   string oper;

   cout<<"enter the first number: ";
   cin>> num1;
   cout<<"enter the second number: ";
   cin>> num2;
   cout<<"enter the operation(add, subtract, multiply, divide): ";
   cin>> oper;
   if(oper == "add"){
       int answer = num1 + num2;
    cout<< "the answer is "<< answer << endl;
   } else if(oper == "subtract"){
       int answer = num1 - num2;
    cout<< "the answer is "<< answer << endl;
   } else if(oper == "multiply" ){
       int answer = num1 * num2;
    cout<< "the answer is "<< answer << endl;
   } else if(oper == "divide" ){
       int answer = num1 / num2;
    cout<< "the answer is "<< answer << endl;
   } else {
       cout<< "the given value is invalid"<<endl;
   }
    return 0;
}
