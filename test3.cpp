#include<bits/stdc++.h>
using namespace std;

class Vehicle{
protected:
    int mileage,price;
public:
    void get_Vehicle_Data(){
        cout<<"Enter The mileage of the Vehicle: ";
        cin>>mileage;
        cout<<"Enter the price of the vehicle: ";
        cin>>price;
    }
};

class Car : protected Vehicle{
protected :
    int warranty,seating_capacity,prise_of_car;
    string fuel_type;
public:
    void get_Car_Data(void){
        get_Vehicle_Data();
        cout<<"Enter the prise of the car: ";
        cin>>prise_of_car;
        cout<<"Enter the warranty of the car: ";
        cin>>warranty;
        cout<<"Enter the seating capacity of the car: ";
        cin>>seating_capacity;
        cout<<"Enter the fuel type of the car: ";
        cin>>fuel_type;
    }
};

class Bike : protected Vehicle{
protected:
    int cylinders,gears;
    string colling_type,wheel_type,fuel_tank_size;
public:
    void get_Bike_Data(void){
        void get_Vehicle_Data();
        cout<<"How many cylinders the bike have: ";
        cin>>cylinders;
        cout<<"How many gears the bike have: ";
        cin>>gears;
        cout<<"What is the cooling type of the  bike: ";
        cin>>colling_type;
        cout<<"What is the wheel type of the  bike: ";
        cin>>wheel_type;
        cout<<"What is the fuel tank size of the  bike: ";
        cin>>fuel_tank_size;
    }
};

class Audi : protected Car{
protected:
    string model_type;
public:
    void get_Audi_Data(){
        get_Car_Data();
        cout<<"Enter the model of the ca:  ";
        cin>>model_type;
    }
};

class Ford : protected Car{
protected:
    string Model_type;
public:
    void get_Ford_Data(){
        get_Car_Data();
        cout<<"Enter the model of the ca:  ";
        cin>>Model_type;
    }
};

class Bajaj : protected Bike{

};

class TVS : protected Bike{
};

int main(){

return 0;
}