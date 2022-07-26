//
//  main.cpp
//  CPP study
//
//  Created by Rohit Gadhave Patil on 23/07/22.
//

#include <iostream>
#include <math.h>

using namespace std;

float calculateAreaOfTriangle(float,float);
int calculateSumOfNaturalNumber(int );
float calculateQuadraticEqu(float,float,float);
float root(int,int ,int );

int bitwiseOptationOR(int ,int );
int bitwiseOptationXOR(int ,int );
int bitwiseOptationAnd(int ,int );
int bitwiseOptationNOT(int );


int bitwiseOptationLeftShift(int ,int );
int bitwiseOptationRightShift(int ,int );

int main(int argc, const char * argv[]) {
    // insert code here...
    float base=0.0,height=0.0,Area=0.0;
    
    std::cout << "Enter The Base and Height Of Triangle\n";
    
//    cin>>base>>height;
    
    Area = calculateAreaOfTriangle(base,height);
    
    cout<< "Area Of Triange is "<<Area <<"\n";
    
    int number = 0;
    
    cout<<"Enter Number \n";
//    cin >> number;
    int sum = calculateSumOfNaturalNumber(number);
    cout<< "Sum of natuaral number " << sum<<"\n";
    cout<<"Enter value of a,b,c \n";
    float a=0.0, b=0.0, c=0.0;
//    cin >>a >> b>> c;
    float r = calculateQuadraticEqu(a,b,c);
    cout<< "Quadratic Equation of " <<a <<" "<<b <<" "<<c<< " is "<< r<<"\n";
    
    cout << "Enter two number for bitwise" << endl;
    int bitNumber1 =0, bitNumber2 =0;
    cin >> bitNumber1 >> bitNumber2;

    cout <<"AND " << bitwiseOptationAnd(bitNumber1,bitNumber2)<<endl;
    cout << "OR " << bitwiseOptationOR(bitNumber1,bitNumber2)<<endl;
    cout << "X-OR " << bitwiseOptationXOR(bitNumber1,bitNumber2)<<endl;
    cout << "NOT " << bitwiseOptationNOT(bitNumber1)<<endl;
    cout << "Left Shift " <<bitwiseOptationLeftShift(bitNumber1,bitNumber2)<<endl;
    cout << "Right Shift " <<bitwiseOptationRightShift(bitNumber1,bitNumber2)<<endl;

    return 0;
}

float calculateAreaOfTriangle(float base,float height){
    return (base*height)/2;
}

int calculateSumOfNaturalNumber(int number){
    return (number * (number+1))/2;
}

float calculateQuadraticEqu(float a ,float b,float c){
    float root = (-b +sqrt(b*b-4*a*c))/(2*a);
    return root;
}

float root(int a,int b,int c)
{
    float root1;
    
    root1=(float) (-b + sqrt(b*b -4*a*c))/2*a; //Write expression here, remove this comment
    
    return root1;
}

int SimpleInterest(int P,int T,int R)
{
    float SI;
    
    SI=(P*R*T)/100;//write expression here

    return SI;
}

float CylinderVolume(int radius,int height)
{
    float volume;
    
    volume=3.1415f * radius * radius * height;//Write expression here
    
    return volume;
}

int bitwiseOptationAnd(int number1,int number2){
    return number1 & number2;
}

int bitwiseOptationOR(int number1,int number2){
    return number1 | number2;
}
int bitwiseOptationXOR(int number1,int number2){
    return number1 ^ number2;
}
int bitwiseOptationNOT(int number1){
    return  ~ number1;
}
int bitwiseOptationLeftShift(int number1,int number2){
    return (int)number1 << number2;
}
int bitwiseOptationRightShift(int number1,int number2){
    return (int)number1 >> number2;
}

