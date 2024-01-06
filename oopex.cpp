#include<bits/stdc++.h>
using namespace std;
class vehicle
{

public:
int milage;
int price
    vehicle(int m, int p){
        this.milage = m;
        this.price = p;
    }
};
class Car: public vehicle{
    public:
    int ownership_cost;
    int warenty;
    int seatingcapacity;
    string fueltype;


};
class bike : public vehicle{
    public:
    int cylinder;
    int gears;
    string coolingtyp;
    string wheeltyp;
    float fueltanksize;

};

class audi : public vehicle{
    public:
    string modeltype;
};
class ford : public vehicle{
    public:
    string modeltype;
};
class bajaj: public vehicle{
    public:
    string modeltype;
};
class tvs : public vehicle{
    public:
    string modeltype;
};

int main()
{
    return 0;
}