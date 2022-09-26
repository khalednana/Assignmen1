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
    
    queue<car> cars{};
    
    cars.push(c1);
    cars.push(car2.car("BMW", "motorcycle", 2015));
    
    
    return 0;
}
