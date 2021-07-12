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


#ifndef _Z_DRAW_H_A_       
#define _Z_DRAW_H_A_
#include<opencv2/core/types.hpp>
#include "ConstantsColor.h"
#include <string>
#include<opencv2/imgproc/imgproc_c.h>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

namespace za {
/* ============================================================================
 * Global Constants
 * ============================================================================
 */
    void MyLine( cv::Mat &img, cv::Point start, cv::Point end );

    void MyCircle( cv::Mat &img, cv::Point center );

    void MyText(cv::Mat &img, cv::String t, cv::Point Inorg , std::string marg);
}

# endif	// _Z_DRAW_H_A_


