# pololu_maestro_ros
ROS package to control pololu maestro servo controller

## Setup
Download and install ROS package
```
cd catkin_ws/src
git clone https://github.com/kdkalvik/pololu_maestro_ros.git
cd ..
catkin_make
```

## Usage
Start service
```
roscore && rosrun pololu_maestro_ros set_servo_server
```

Test service with service-client test node
```
rosrun pololu_maestro_ros set_servo_test channel target
```

Valid values for set_servo_test 

channel : 0-23
target  : 4000-8000
