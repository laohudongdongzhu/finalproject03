#include "StockClass.h"
using namespace std;
    void StockClass::setData(float d)
    {
        data.push_back(d);
    }
    float StockClass::calcDailyPnL(int x)
    {
        float dailyPnL = 0.0;
        dailyPnL = data[x] / data[x - 1] - 1;
        return dailyPnL;
    }

    float StockClass::calcMovingAvg(int x, int y)
    {
        float movingAvg = 0.0;
        for (int i = x - 1; i > (x - y - 1); i--)
        {
            movingAvg += (data[i]);
        }
        return (movingAvg / static_cast<float>(y));
    }

    float StockClass::getDayData(int x)
    {
        return data[x];
    }
    float StockClass::benchMark() {
        float benchMark;
        benchMark = data.back() / data[0];
        return benchMark;
    }


