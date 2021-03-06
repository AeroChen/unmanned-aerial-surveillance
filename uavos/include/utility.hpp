/*
 * utility.hpp
 *
 *  Created on: Feb 20, 2013
 *      Author: Xichen Shi
 */

#ifndef UTILITY_HPP_
#define UTILITY_HPP_

#include <sys/time.h>
#include <ctime>

extern unsigned long program_start_time_ms;
extern unsigned long program_start_time_us;

unsigned long getMicroSeconds();

unsigned long getMilliSeconds();

#endif /* UTILITY_HPP_ */