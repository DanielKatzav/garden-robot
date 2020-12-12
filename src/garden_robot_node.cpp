//
// Created by daniel on 12/7/20.
//

#include <ros/ros.h>
#include "Garden.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "rosgarden");
    ros::NodeHandle nodeHandle("~");

//    ros_package_template::RosPackageTemplate rosPackageTemplate(nodeHandle);

    ros::spin();
    return 0;
}