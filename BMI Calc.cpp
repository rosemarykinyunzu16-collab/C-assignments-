
#include <iostream>

using namespace std;

int main()
{
	float weight, height,BMI;
	
	cout<< "Enter the weight in kilograms"<<endl;
	cin>>weight;
	cout<< "Enter the height in metres"<<endl;
    cin>>height;
    
    BMI= weight/height*height;

    if (BMI<18.5){
		cout<<"category: underweight"<<endl;
	}
    
    else if (BMI>=18.5 && BMI<=29.9){
     cout<<"category: normal weight"<<endl;
	}
	 else if (BMI>=25 && BMI<=29.9){
	 	cout<<"category: overweight"<<endl;
	}
	 else{
		 cout<<"category: obesity"<<endl;
	}
	return 0;
}
	