#include <string>
#include <iostream>
#include <vector>

class StockClass
{
private:
    std::vector<float> data;

public:
    void setData(float);
    float calcDailyPnL(int);
    float calcMovingAvg(int, int);
    float getDayData(int);
    float benchMark();
};
