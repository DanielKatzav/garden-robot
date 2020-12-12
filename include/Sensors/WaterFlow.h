//
// Created by daniel on 12/11/20.
//

#ifndef GARDEN_ROBOT_WATERFLOW_H
#define GARDEN_ROBOT_WATERFLOW_H

#include "Sensor.h"
#include <std_msgs/Int16.h>

namespace sensor{

    class WaterFlow : protected Sensor {

    protected:
        void SensorCallback(const std_msgs::Int16 data);

    public:
        WaterFlow(ros::NodeHandle *nodeHandle);

        WaterFlow(){};
        ~WaterFlow(){};

    private:

    public:


    };

}


#endif //GARDEN_ROBOT_WATERFLOW_H
