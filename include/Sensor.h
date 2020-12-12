//
// Created by daniel on 12/11/20.
//

#ifndef GARDEN_ROBOT_SENSOR_H
#define GARDEN_ROBOT_SENSOR_H

#include "ros/ros.h"


class Sensor {

protected:
    ros::NodeHandle* nodeHandle_;
    ros::Subscriber sensorSub_;

public:
    Sensor(ros::NodeHandle *nodeHandle, ros::Subscriber *sensorSub);

    Sensor(){};
    virtual ~Sensor(){};

protected:
//    virtual void SensorCallback(T data) const = 0;

public:

};


#endif //GARDEN_ROBOT_SENSOR_H
