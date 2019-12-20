#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    virtual ~Observer()=0;
    virtual void update(float temp, float humidity, float pressure)=0;
};

class DisplayElement{
public:
    virtual ~DisplayElement()=0;
    virtual void display()=0;
};

class CurrentConditionsDisplay: public Observer, DisplayElement{
public:
    CurrentConditionsDisplay();
    void update(float temp, float humidity, float pressure) override;

private:
    void display() override;

    float __temp;
    float __humi;
    float __pres;
};

//StatisticsDisplay 代表与CurrentConditionsDisplay 需要相同数据的不同对象
class StatisticsDisplay: public Observer, DisplayElement{
public:
    StatisticsDisplay();
    void update(float temp, float humidity, float pressure) override;
private:
    void display() override;

    float __temp;
    float __humi;
    float __pres;
};

#endif // OBSERVER_H
