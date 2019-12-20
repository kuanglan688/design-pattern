#include "observer.h"
#include <iostream>
Observer::~Observer(){}
DisplayElement::~DisplayElement(){}

CurrentConditionsDisplay::CurrentConditionsDisplay()
{
    std::cout << "我是 CurrentConditionsDisplay面板"<< std::endl;
}
void CurrentConditionsDisplay::update(float temp, float humidity, float pressure)
{
    this->__temp = temp;
    this->__humi = humidity;
    this->__pres = pressure;
    this->display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " <<std::endl <<
                 "温度是: "<<this->__temp <<std::endl <<
                 "湿度是: "<<this->__humi <<std::endl <<
                 "压力是: "<<this->__pres <<std::endl;
}


StatisticsDisplay::StatisticsDisplay()
{
    std::cout << "我是 StatisticsDisplay 面板" << std::endl;
}


void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
    this->__temp = temp;
    this->__humi = humidity;
    this->__pres = pressure;
    this->display();
}

void StatisticsDisplay::display()
{
    std::cout << "Statistics conditions: " <<std::endl <<
                 "温度是: "<<this->__humi <<std::endl <<
                 "湿度是: "<<this->__temp <<std::endl <<
                 "压力是: "<<this->__pres <<std::endl;
}
