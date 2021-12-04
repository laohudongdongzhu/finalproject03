#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <fstream>
#include "StockClass.h"
using namespace std;

int main(){
	string fileName = "TSLA.txt";
	ifstream file;
	float input;
	file.open(fileName);
	StockClass tsla;

	for (int i = 0; i < 2881; i++) {
		file >> input;
		tsla.setData(input);
		cout << tsla.getDayData(i) << endl;
	}
	cout << "Benchmark:" << tsla.benchMark() << endl;
	static int signal[2881];
	int holding=0;
	vector<float> DailyReturnVec;
	double totalReturn;
	 for(int i =0; i < 2881; i++){
		DailyReturnVec.push_back(tsla.calcDailyPnL(i));
        float ma1=tsla.calcMovingAvg(i, 15);
        float ma2=tsla.calcMovingAvg(i, 50);
        float ma3=tsla.calcMovingAvg(i, 200);
        if(ma2>=ma1>ma3){ //not finish
			cout << "idk!";
		}
		if (holding ==1){
			totalReturn +=DailyReturnVec[i];
		}   

            
        }
	cout << "Your Strategy's  Total Return is " << totalReturn << endl;
	



}
// 双class可以构建一个dataframe,从而可以做stock的portfolio strategy backtesting.  from kong zong