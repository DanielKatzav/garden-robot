//
// Created by daniel on 12/8/20.
//

#ifndef GARDEN_ROBOT_GARDEN_H
#define GARDEN_ROBOT_GARDEN_H

#include "Sensors/WaterFlow.h"
#include "Sensors/WaterLevel.h"
#include "Sensors/LiquidPH.h"

class Garden{

private:

    sensor::LiquidPH* _liquidPH;
    sensor::WaterFlow* _waterFlow;
    sensor::WaterLevel* _waterLevel;

public:

private:

public:

};


#endif //GARDEN_ROBOT_GARDEN_H
