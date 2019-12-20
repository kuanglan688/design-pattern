#include "subject.h"
#include "observer.h"
#include <iostream>
Subject::~Subject(){}

void WeatherData::registerObserver(Observer *o) //注册观察者
{
    __observer.push_back(o);
}
void WeatherData::removeObserver(Observer *o){ //回收观察者
    __observer.push_back(o);
}
void WeatherData::notifyObserver() //通知观察者
{
    for (auto &i:__observer) {
        i->update(__temp, __humidity, __pressure);
    }
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure) //变量更新
{
    std::cout << "WeatherData::Measurements Changed" << std::endl << std::endl;
    this->__temp = temp;
    this->__humidity = humidity;
    this->__pressure = pressure;
    this->measurementChanges();
}

void WeatherData::measurementChanges()
{
    this->notifyObserver();
}
