#include "pololu_maestro_ros/set_servo.h"
#include "ros/ros.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  //Initialize node
  ros::init(argc, argv, "set_servo_test");
 
  //Check if channel and target were passed to node
  if (argc != 3)
  {
        ROS_INFO("usage: set_servo_test Channel target");
        return 1;
  }
  
  //create node handle
  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<pololu_maestro_ros::set_servo>("set_servo");
  
  //Create and send service request
  pololu_maestro_ros::set_servo srv;
  srv.request.channel = atoll(argv[1]);
  srv.request.target = atoll(argv[2]);
  client.call(srv);
 
  return 0;
}

