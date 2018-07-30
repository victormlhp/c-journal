Here I am giving it a try to Computer Programming one more time after several years of leaving computer science behind.

include <iostream>
using namespace std;
int main(){
int num1,num2,result,op;
char ask;

cout <<“Welcome to C++ Basic Calculator”<<endl;
label:
cout <<“What operation would you like to perform?(1- Addition 2-Substract 3-Multiply 4-Divide)” << endl;
cout <<“Please enter the number of the desire operation:”;
cin >> op;
cout <<“Please enter the first number:”;
cin >> num1;
cout <<“Please enter the second number:”;
cin >> num2;

switch (op) {
case 1:
result=num1+num2;
cout << num1 << “+” << num2 << endl;
cout << “The Result is:” << result << endl;
goto label;
break;
case 2:
result=num1-num2;
cout << num1 << “-” << num2 << endl;
cout << “The Result is:” << result << endl;
goto label;
break;
case 3:
result=num1*num2;
cout << num1 << “*” << num2 << endl;
cout << “The Result is:” << result << endl;
goto label;
break;
case 4:
result=num1/num2;
cout << num1 << “/” << num2 << endl;
cout << “The Result is:” << result << endl;
goto label;
break;
default:
cout << “Incorrect Operator!!” << endl;
break;
}
return 0;
}
