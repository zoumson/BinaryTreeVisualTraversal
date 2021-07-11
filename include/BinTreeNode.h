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
 * @file BinTreeNode.h
 *
 * @brief Binary Tree.
 *
 * @author Adama Zouma
 * 
 * @Contact: stargue49@gmail.com
 *
 */

// BinTreeNode.h

#ifndef _Z_BIN_TREE_NODE_H_A_
#define _Z_BIN_TREE_NODE_H_A_
//#include <opencv2/core/types.hpp>
//#include <string>
//#include<opencv2/core/core.hpp>
//#include<opencv2/imgproc/imgproc.hpp>
namespace za {
/**
 * Implementation of a Possible character for retrieving character
 *
 * A character is delimited by a rectangular area
 * the area itself has a center defined by a coordinate (x,y)
 * the rectangle diagonal length and aspect ratio are used to 
 * check whether the possible character is a real character or not
 *
 */
template <typename T, typename P>
class BinTreeNode 
{

protected:
    /* ============================================================================
    * Data Memeber Declaration
    * ============================================================================
    */
      T val_;
      

    
public:
      BinTreeNode *left;
      BinTreeNode *right;
      //cv::Point_< P > pos;
      //std::string orientation;
    /* ============================================================================
    * Member Function Declaration
    * ============================================================================
    */
    //auto val() const& -> const T& { return val_; }
    /**
     * \brief Default constructor.
     *
     * \details Constructor without argument.
     *
     * \return #TreeNode
     * 
     * \attention The default value is 0.
     * 
     */
   //BinTreeNode() : val_(0), left(nullptr), right(nullptr), pos(cv::Point_< T>(0, 0){}
   BinTreeNode() : val_(0), left(nullptr), right(nullptr){}

   //BinTreeNode() : val_(0), left(nullptr), right(nullptr), pos(cv::Point_< int>(0, 0), orientation(std::string("n")){}

    /**
     * \brief Custom constructor.
     *
     * \details Custom constructor with value argument. 
     *
     * \param x tree node value, type is T.
     *
     * \return #BinTreeNode
     * 
     * \attention 
     * 
     */
    //BinTreeNode(T &x, cv::Point_<P> &position) : val_(x), left(nullptr), right(nullptr), pos(position) {}
    //BinTreeNode(T &&x, cv::Point_<P> &&position) : val_(x), left(nullptr), right(nullptr), pos(position){}
    //BinTreeNode(T &x, cv::Point_<P> &position, std::string &ori) : val_(x), left(nullptr), right(nullptr), pos(position) , orientation(ori){}
    //BinTreeNode(T &&x, cv::Point_<P> &&position, std::string &&ori) : val_(x), left(nullptr), right(nullptr), pos(position) , orientation(ori){}


    /**
     * \brief Custom constructor.
     *
     * \details Constructor with children.
     *
     * \param x [in] compared possible characters, type is PossibleChar.
     * \param left [in] left child, type is BinTreeNode.
     * \param right [in] right child, type is BinTreeNode.
     *
     * \return # type is bool.
     * 
     * \attention 
     * 
     */
    //BinTreeNode(T &x, BinTreeNode *left, BinTreeNode *right, cv::Point_<P> &position) : val_(x), left(left), right(right), pos(position){}
    //BinTreeNode(T &&x, BinTreeNode *left, BinTreeNode *right, cv::Point_<P> &&position) : val_(x), left(left), right(right), pos(position){}
    //BinTreeNode(T &x, BinTreeNode *left, BinTreeNode *right, cv::Point_<P> &position, std::string &o) : val_(x), left(left), right(right), pos(position), orientation(o){}
    //BinTreeNode(T &&x, BinTreeNode *left, BinTreeNode *right, cv::Point_<P> &&position, std::string &&o) : val_(x), left(left), right(right), pos(position), orientation(o){}
   
    /**
     * \brief Custom constructor.
     *
     * \details Constructor with children.
     *
     * \param x [in] compared possible characters, type is PossibleChar.
     * \param left [in] left child, type is BinTreeNode.
     * \param right [in] right child, type is BinTreeNode.
     *
     * \return # type is bool.
     * 
     * \attention 
     * 
     */

  
};

}

#endif  // FCT_ARGS_H