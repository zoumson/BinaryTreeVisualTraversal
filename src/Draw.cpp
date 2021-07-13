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


#include "Draw.h"

namespace za {
/* ============================================================================
 * Global Constants
 * ============================================================================
 */
    void MyLine( cv::Mat &img, cv::Point start, cv::Point end , cv::Scalar col)
    {
    int thickness = 2;
    int lineType = cv::LINE_8;
    cv::arrowedLine( img,
        start,
        end,
        //cv::Scalar( 0, 0, 0 ),
        col,
        thickness,
        lineType );
    }

    void MyCircle( cv::Mat &img, cv::Point center , cv::Scalar col)
    {
        int radius = 5;
        cv::circle( img,
        center,
        radius,
        col,
        cv::FILLED,
        cv::LINE_8 );
    }

    void MyText(cv::Mat &img, cv::String t, cv::Point Inorg , std::string marg, cv::Scalar col)
    {
        int fontFace = cv::FONT_HERSHEY_SIMPLEX ;
        int marVal = 20;
        cv::Point org = Inorg ;


    if (marg == "l")
    {
        org.x -= marVal;   
    }

    else if (marg == "r")
    {
        org.x += marVal; 
    }
    
    else if (marg == "u")
    {
        org.y -= marVal;     
    }
    
    else if (marg == "d")
    {
        org.y += marVal;    
    }
    
    else if (marg == "ld")
    {
        org.x -= marVal;
        org.y -= marVal;  
    }
    
    else if (marg == "ld")
    {
        org.x -= marVal;
        org.y += marVal;     
    }
    
    else if (marg == "ru")
    {
        org.x += marVal;
        org.y -= marVal;
   
    }
    
    else if (marg == "rd")
    {
        org.x += marVal;
        org.y += marVal;
    
    }
    
    else if (marg == "n")
    {

    }
    else
    {
        
    }
        
    double fontScale = 0.5;
    cv::putText (img, t, org, fontFace, fontScale, col, 2);

    }

}


