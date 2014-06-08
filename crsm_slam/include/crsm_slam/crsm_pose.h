/*
 * 	This file is part of CrsmSlam.
    CrsmSlam is free software: you can redistribute it and/or modify 
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CrsmSlam is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CrsmSlam.  If not, see <http://www.gnu.org/licenses/>.
* 
* Author : Manos Tsardoulias, etsardou@gmail.com
* Organization : AUTH, PANDORA Robotics Team
* */

#ifndef CRSM_POSE_HEADER
#define CRSM_POSE_HEADER

namespace crsm_slam{
	/**
	 @struct CrsmPose
	 @brief Holds a robot 2D pose
	 **/ 
	struct CrsmPose{
		float x;		//!< The x coordinate
		float y;		//!< The y coordinate
		float theta;	//!< The theta (yaw) coordinate
	};

}
#endif
