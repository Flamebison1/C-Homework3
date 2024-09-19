// A program to ask an end-user for three numbers in a creative way

#include <iostream>
using namespace std;
int main(){

int age{0};
double height{0};
double weight{0};
double sum{0};
double average{0};
double product{0};

cout << " Hey there! we would love to get some information on you, If you dont mind!";
cout << endl;
cout <<"How old are you: ";

cin >>age;
cout << "Great!! You are "<<age<<" years old" <<endl;
cout << endl;
cout << "How tall are you: ";

cin >>height;
cout << "Fantastic! you are "<<height<<" feet tall"<< endl;
cout << endl;
cout << "How many pounds do you weigh: ";
cin >>weight;

cout << "Awesome! you weigh "<<weight<<" pounds"<< endl;
cout << endl;
cout << "Hence\n";
cout << "You are "<<age<<" years old , "<<height<<" feet tall"<<" and  weigh "<<weight<<" pounds ."<<endl;
cout << endl;
cout << "And with that we decided to find the sum, average and product of you age, height and weight""\n";


cout <<endl;

sum =age+height+weight;

average =(sum)/3;

product =age*height*weight;

cout <<"Here are your results"<<endl;
cout <<"------------------------------------------------\n";

cout <<"The sum of your age, height and weight is : "<<sum<< endl;
cout <<"The average of your inputs is "<<average<< endl;
cout <<"The ptoducts of your input is "<<product<< endl;
cout <<"------------------------------------------------\n";


    
    

    return 0;
}