/*
* Binary Tree
* See COPYRIGHT file at the top of the source tree.
*
* This product includes software developed by the
* STARGUE Project (http://www.stargue.org/).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the STARGUE License Statement and
* the GNU General Public License along with this program. If not,
* see <http://www.lsstcorp.org/LegalNotices/>.
*/

/**
 * @file ConstantsColor.h
 *
 * @brief Identify a plate number from image. 
 *
 * @author Adama Zouma
 * 
 * @Contact: stargue49@gmail.com
 *
 */


#ifndef _Z_CONSTANTS_COLOR_H_A_       
#define _Z_CONSTANTS_COLOR_H_A_
#include<opencv2/core/types.hpp>

namespace za {
/* ============================================================================
 * Global Constants
 * ============================================================================
 */
const cv::Scalar BLACK = cv::Scalar(0.0, 0.0, 0.0);
const cv::Scalar WHITE = cv::Scalar(255.0, 255.0, 255.0);
const cv::Scalar YELLOW = cv::Scalar(0.0, 255.0, 255.0);
const cv::Scalar GREEN = cv::Scalar(0.0, 255.0, 0.0);
const cv::Scalar RED = cv::Scalar(0.0, 0.0, 255.0);
const cv::Scalar BLUE = cv::Scalar(255.0, 0.0, 0.0);

}

# endif	// _Z_CONSTANTS_COLOR_H_A_

