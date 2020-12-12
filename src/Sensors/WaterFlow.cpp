//
// Created by daniel on 12/11/20.
//

#include <Sensors/WaterFlow.h>

sensor::WaterFlow::WaterFlow(ros::NodeHandle *nodeHandle)
{
    this->nodeHandle_ = nodeHandle;
    this->sensorSub_ = nodeHandle_->subscribe("/water_level", 1, &WaterFlow::SensorCallback, this);
}

void sensor::WaterFlow::SensorCallback(const std_msgs::Int16 data) {

    this->waterLevel = data.data;

}

