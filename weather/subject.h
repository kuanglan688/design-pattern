#ifndef SUBJECT_H
#define SUBJECT_H

class Observer;
class Subject
{
public:
    virtual ~Subject();
    virtual void registerObserver(Observer *o)=0;
    virtual void removeObserver(Observer *o)=0;
    virtual void notifyObserver()=0;
};

#include <vector>
class WeatherData : public Subject{
private:
    void measurementChanges();

    std::vector<Observer *> __observer;
    float __temp;
    float __humidity;
    float __pressure;
public:
    void registerObserver(Observer *o) override;
    void removeObserver(Observer *o) override;
    void notifyObserver() override;

    void setMeasurements(float temp, float humidity, float pressure);
};

#endif // SUBJECT_H
