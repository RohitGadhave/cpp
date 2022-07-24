//
//  main.cpp
//  CPP study
//
//  Created by Rohit Gadhave Patil on 23/07/22.
//

#include <iostream>
using namespace std;

float calculateAreaOfTriangle(float,float);
int calculateSumOfNaturalNumber(int );

int main(int argc, const char * argv[]) {
    // insert code here...
    float base=0.0,height=0.0,Area=0.0;
    
    std::cout << "Enter The Base and Height Of Triangle\n";
    
    cin>>base>>height;
    
    Area = calculateAreaOfTriangle(base,height);
    
    cout<< "Area Of Triange is "<<Area <<"\n";
    
    int number = 0;
    
    cout<<"Enter Number \n";
    cin >> number;
    int sum = calculateSumOfNaturalNumber(number);
    cout<< "Sum of natuaral number " << sum<<"\n";
    
    return 0;
}

float calculateAreaOfTriangle(float base,float height){
    return (base*height)/2;
}

int calculateSumOfNaturalNumber(int number){
    return (number * (number+1))/2;
}
