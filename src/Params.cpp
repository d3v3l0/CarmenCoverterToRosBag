//
// Created by mikhail on 06.05.17.
//

#include "Params.h"

std::unordered_map<std::string, double> Params::old_laser_params = {{"front_laser_dev", double()},
                                                                    {"rear_laser_dev", double()},
                                                                    {"laser3_dev", double()},
                                                                    {"laser4_dev", double()},
                                                                    {"laser5_dev", double()},
                                                                    {"front_laser_type", double()},
                                                                    {"front_laser_resolution", double()},
                                                                    {"front_laser_use_remission", double()},
                                                                    {"front_laser_fov", double()},
                                                                    {"front_laser_baud", double()},
                                                                    {"front_laser_flipped", double()},
                                                                    {"rear_laser_type", double()},
                                                                    {"rear_laser_resolution", double()},
                                                                    {"rear_laser_use_remission", double()},
                                                                    {"rear_laser_fov", double()},
                                                                    {"rear_laser_baud", double()},
                                                                    {"rear_laser_flipped", double()},
                                                                    {"laser3_type", double()},
                                                                    {"laser3_resolution", double()},
                                                                    {"laser3_use_remission", double()},
                                                                    {"laser3_fov", double()},
                                                                    {"laser3_baud", double()},
                                                                    {"laser3_flipped", double()},
                                                                    {"laser4_type", double()},
                                                                    {"laser4_resolution", double()},
                                                                    {"laser4_use_remission", double()},
                                                                    {"laser4_fov", double()},
                                                                    {"laser4_baud", double()},
                                                                    {"laser4_flipped", double()},
                                                                    {"laser5_type", double()},
                                                                    {"laser5_resolution", double()},
                                                                    {"laser5_use_remission", double()},
                                                                    {"laser5_fov", double()},
                                                                    {"laser5_baud", double()},
                                                                    {"laser5_flipped", double()}};

std::unordered_map<std::string, double> Params::new_laser_params = {{"laser1_flipped", double()},
                                                                    {"laser2_flipped", double()},
                                                                    {"laser3_flipped", double()},
                                                                    {"laser4_flipped", double()},
                                                                    {"laser5_flipped", double()},
                                                                    {"laser6_flipped", double()},
                                                                    {"laser7_flipped", double()},
                                                                    {"laser8_flipped", double()},
                                                                    {"laser9_flipped", double()}};

std::unordered_map<std::string, double> Params::robot_params = {{"callow_rear_motion", double()},
                                                                {"rectangular", double()},
                                                                {"use_laser", double()},
                                                                {"use_sonar", double()},
                                                                {"converge", double()},
                                                                {"timeout", double()},
                                                                {"sensor_timeout", double()},
                                                                {"collision_avoidance", double()},
                                                                {"collision_avoidance_frequency", double()},
                                                                {"laser_bearing_skip_rate", double()},
                                                                {"turn_before_driving_if_heading_bigger", double()},
                                                                {"backwards", double()},
                                                                {"length", double()},
                                                                {"width", double()},
                                                                {"frontlaser_use", double()},
                                                                {"frontlaser_id", double()},
                                                                {"frontlaser_offset", double()},
                                                                {"frontlaser_side_offset", double()},
                                                                {"frontlaser_angular_offset", double()},
                                                                {"rearlaser_use", double()},
                                                                {"rearlaser_id", double()},
                                                                {"rearlaser_offset", double()},
                                                                {"rearlaser_side_offset", double()},
                                                                {"rearlaser_angular_offset", double()},
                                                                {"front_laser_max", double()},
                                                                {"min_approach_dist", double()},
                                                                {"min_side_dist", double()},
                                                                {"acceleration", double()},
                                                                {"deceleration", double()},
                                                                {"reaction_time", double()},
                                                                {"max_t_vel", double()},
                                                                {"max_r_vel", double()},
                                                                {"curvature", double()},
                                                                {"theta_gain", double()},
                                                                {"displacement_gain", double()},
                                                                {"use_bumper", double()},
                                                                {"bumper_offsets", double()},
                                                                {"odometry_inverted", double()}};

std::unordered_map<std::string, double> Params::gps_params = {{"nmea_dev", double()},
                                                              {"nmea_baud", double()},
                                                              {"originlat", double()},
                                                              {"originlon", double()},
                                                              {"integrate_with_odometry", double()},
                                                              {"initialtheta", double()},
                                                              {"initialthetastd", double()},
                                                              {"odomdiststdper1m", double()},
                                                              {"odomthetastdper1m", double()},
                                                              {"odomthetastdper1rad", double()},
                                                              {"gpsxystdper1precdil", double()}};

std::unordered_map<std::string, double> Params::base_params = {{"type", double()},
                                                               {"model", double()},
                                                               {"motion_timeout", double()},
                                                               {"dev", double()},
                                                               {"use_hardware_integrator", double()},
                                                               {"relative_wheelsize", double()},
                                                               {"relative_wheelbase", double()}};

std::unordered_map<std::string, double> Params::arm_params = {{"num_joints", double()},
                                                              {"joint_types", double()},
                                                              {"dev", double()}};

std::unordered_map<std::string, double> Params::segway_params = {{"accel_limit", double()},
                                                                 {"torque_limit", double()},
                                                                 {"gain_schedule", double()}};
