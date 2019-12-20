#include <iostream>
#include "observer.h"
#include "subject.h"
using namespace std;

int main()
{
    WeatherData *weatherData = new WeatherData;
    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay;
    StatisticsDisplay *statisticDisplay = new StatisticsDisplay;
    weatherData->registerObserver(currentDisplay);
    weatherData->registerObserver(statisticDisplay);
    weatherData->setMeasurements(20.8f,34.0f,34.2f);
    weatherData->setMeasurements(18.8f,67.0f,92.2f);
}
