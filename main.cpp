#include <iostream>
#include <string>
#include <queue>

using namespace std;
class car{
    public:
        car()
        {
            
        }
        car(string Car_Brand, int Max_Speed, int Year_Model)
        {
            
        }
        void setCarBrand(string x){
            Car_Brand=x;
        };
        string getCarBrand(){
            return Car_Brand;
        };
        void setCarType(string y){
        Car_Type=y;
        };
        string getCarType(){
            return Car_Type;
        };
        void setCarPlate(string z){
            Car_Plate=z;
        };
        string getCarPlate(){
            return Car_Plate;
        };
        void setSpeed(int a){
            Speed=a;
        };
        int getSpeed(){
            return Speed;
        };
        void setYearModel(int b){
            Year_Model=b;
        };
        int getYearModel(){
            return Year_Model;
        };
        
    private:
    string Car_Brand;
    string Car_Type;
    string  Car_Plate;
    int Speed;
    int Year_Model;
};

class road
{
private:
    char Road_Type;
    int Speed_Limit;
    int countA;
    int countB;
    int countC;
public:
    road()
    {
       
    };
    road(char Road_Type , int SpeedLimit)
    {
        Speed_Limit=SpeedLimit;
    };
    
    bool Radar(int car_speed, char Road_Type)
    {
        if(car_speed>Speed_Limit)
            return true;
        return false;
    };
    
    void setRoadType(char g){
        Road_Type=g;
    };
    char getRoadType(){
        return Road_Type;
    };
    void setSpeedLimit(int f){
        Speed_Limit=f;
    };
    int getSpeedLimit(){
        return Speed_Limit;
    };
    void setCountA(int c){
        countA=c;
    };
    int getCountA(){
        return countA;
    };
    void setCountB(int d){
        countB=d;
    };
    int getCountB(){
        return countB;
    };
    void setCountC(int e){
        countC=e;
    };
    int getCountC(){
        return countC;
    };
    void allow(string cartype)
    {
        if (cartype=="private" || cartype=="motorcycle")
        {
            cout<<"you are allowed or road A and B"<<endl;
        }
        else if (cartype== "truck")
        {
            cout<<"you are allowed or road B and C"<<endl;
        }
        else
        {
            cout<<"you are allowed on road B"<<endl;
        }
    };
    int age (int Year_Model)
    {
        return 2022-Year_Model;
    };
};
int main(int argc, const char * argv[]) {
    
     car c1,c2,c3,c4;
    c1.setCarType("car");
    c2.setCarType("moytorcycle");
    c3.setCarType("truck");
    c4.setCarType("private");
    c1.setCarBrand("BMW");
    c2.setCarBrand("KIA");
    c3.setCarBrand("toyota");
    c4.setCarBrand("MG");
    c1.setCarPlate("ABC1");
    c2.setCarPlate("ABC2");
    c3.setCarPlate("ABC3");
    c4.setCarPlate("ABC4");
    c1.setSpeed(130);
    c2.setSpeed(110);
    c3.setSpeed(90);
    c4.setSpeed(70);
    c1.setYearModel(2018);
    c2.setYearModel(2018);
    c3.setYearModel(2015);
    c4.setYearModel(2020);
    road r1;
    road r2;
    road r3;
    r1.setSpeedLimit(80);
    r3.setSpeedLimit(100);
    r3.setSpeedLimit(120);
    r1.setRoadType('A');
    r2.setRoadType('B');
    r3.setRoadType('C');
    queue<car> cars{};
    cars.push(c1);
    cars.push(c2);
    cars.push(c3);
    cars.push(c4);
    r1.Radar(c1.getSpeed(), r1.getRoadType());
    r1.Radar(c2.getSpeed(), r1.getRoadType());
    r1.Radar(c3.getSpeed(), r1.getRoadType());
    r1.Radar(c4.getSpeed(), r1.getRoadType());
    r1.allow(c1.getCarType());
    r1.allow(c2.getCarType());
    r1.allow(c3.getCarType());
    r1.allow(c4.getCarType());
    r1.age(c1.getYearModel());
    r1.age(c2.getYearModel());
    r1.age(c3.getYearModel());
    r1.age(c4.getYearModel());
    
    r2.Radar(c1.getSpeed(), r2.getRoadType());
    r2.Radar(c2.getSpeed(), r2.getRoadType());
    r2.Radar(c3.getSpeed(), r2.getRoadType());
    r2.Radar(c4.getSpeed(), r2.getRoadType());
    r2.allow(c1.getCarType());
    r2.allow(c2.getCarType());
    r2.allow(c3.getCarType());
    r2.allow(c4.getCarType());
    r2.age(c1.getYearModel());
    r2.age(c2.getYearModel());
    r2.age(c3.getYearModel());
    r2.age(c4.getYearModel());
    
    r3.Radar(c1.getSpeed(), r3.getRoadType());
    r3.Radar(c2.getSpeed(), r3.getRoadType());
    r3.Radar(c3.getSpeed(), r3.getRoadType());
    r3.Radar(c4.getSpeed(), r3.getRoadType());
    r3.allow(c1.getCarType());
    r3.allow(c2.getCarType());
    r3.allow(c3.getCarType());
    r3.allow(c4.getCarType());
    r3.age(c1.getYearModel());
    r3.age(c2.getYearModel());
    r3.age(c3.getYearModel());
    r3.age(c4.getYearModel());
    
    return 0;
}
