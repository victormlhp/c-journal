#include <iostream>
using namespace std;
int main() {
float value1,value2,convertion;
int op;
label:
cout <<“————————————————————————————————“<<endl;
cout <<“Welcome to C++ Unit Converter”<<endl;
cout <<“1-KM to Miles”<<endl;
cout <<“2-Miles to KM”<<endl;
cout <<“3-Inches to Centimeters”<<endl;
cout <<“4-Centimeters to Inches”<<endl;
cout <<“5-Feet to Meters”<<endl;
cout <<“6-Meters to Feet”<<endl;
cout <<“7-Fahrenheit to Celsius”<<endl;
cout <<“8-EXIT”<<endl;
cout <<“————————————————————————————————“<<endl;
cout <<“Select the Operation you would like to perform:”;
cin >> op;
switch (op) {
case 1:
cout <<“Converting from KM to Miles”<<endl;
cout <<“Please insert the value in Kilometers:”;
cin >> value1;
convertion=value1/1.6;
cout << value1 << “Kilometers” <<“=” << convertion << “Miles” << endl;
goto label;
break;
case 2:
cout <<“Converting from Miles to KM”<<endl;
cout <<“Please insert the value in Miles:”;
cin >> value1;
convertion=value1*1.6;
cout << value1 << “Miles” <<“=” << convertion << “Kilometers” << endl;
goto label;
break;
case 3:
cout <<“Converting from Inches to Centimeters”<<endl;
cout <<“Please insert value in INCHES:”;
cin >> value1;
convertion=value1*2.54;
cout << value1 << “Inches” <<“=” << convertion << “Centimeters” << endl;
goto label;
break;
case 4:
cout <<“Converting from Centimeters to Inches”<<endl;
cout <<“Please insert value in CENTIMETERS:”;
cin >> value1;
convertion=value1/2.54;
cout << value1 << “Centimeters” <<“=” << convertion << “Inches” << endl;
goto label;
break;
case 5:
cout <<“Converting from Feet to Meters”<<endl;
cout <<“Please insert value in Feet:”;
cin >> value1;
convertion=value1*0.3048;
cout << value1 << “Feet” << “=” << convertion << “Meters” << endl;
goto label;
break;
case 6:
cout <<“Converting from Meters to Feet”<<endl;
cout <<“Please insert value in Meters:”;
cin >> value1;
convertion=value1*3.28084;
cout << value1 << “Meters” << “=” << convertion << “Feet” << endl;
goto label;
break;
case 7:
cout << “Converting from Fahrenheit to Celsius” <<endl;
cout <<“Please insert temperature in Fahrenheit Degrees:”;
cin >> value1;
convertion=(value1-32)*0.5556;
cout << value1 << “F” << “=” << convertion << “Celsius” << endl;
goto label;
break;
case 8:
return 0;
break;
default:
cout <<“Wrong Input!!”<<endl;
break;
}
return 0;
}
