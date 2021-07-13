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
 * @file BinTreeNodeTraversal.h
 *
 * @brief Binary Tree Traversal.
 *
 * @author Adama Zouma
 * 
 * @Contact: stargue49@gmail.com
 *
 */

// BinTreeNode.h

#ifndef _Z_BIN_TREE_TRAVERSAL_H_A_
#define _Z_BIN_TREE_TRAVERSAL_H_A_

//#include<opencv2/core/core.hpp>
//#include<opencv2/imgproc/imgproc.hpp>
#include "BinTreeNode.h"
#include <stack>
#include <deque>
#include <queue>
#include <vector>
#include<algorithm>
#include <iostream>
#include "ConstantsColor.h"
#include "Draw.h"
#include <string>
#include<opencv2/imgproc/imgproc_c.h>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include "opencv2/opencv.hpp"
#include <map>
//#include "gif.h"

//#include <math.h>
namespace za {

    /* ============================================================================
    * Member Function Declaration
    * ============================================================================
    /**
     * \brief Binary tree posorder traversal.
     *
     * \details Constructor with children.
     *
     * \param root [in] root node, type is BinTreeNode.
     *
     * \return # type is vector of T.
     * 
     * \attention 
     * 
     */
/*
void SetPixel( int xx, int yy, uint8_t red, uint8_t grn, uint8_t blu )
{
    uint8_t* pixel = &image[(yy*width+xx)*4];
    pixel[0] = red;
    pixel[1] = blu;
    pixel[2] = grn;
    pixel[3] = 255;  // no alpha for this demo
}

void SetPixelFloat( int xx, int yy, float fred, float fgrn, float fblu )
{
    // convert float to unorm
    uint8_t red = (uint8_t)roundf( 255.0f * fred );
    uint8_t grn = (uint8_t)roundf( 255.0f * fgrn );
    uint8_t blu = (uint8_t)roundf( 255.0f * fblu );
    
    SetPixel( xx, yy, red, grn, blu );
}
*/

    template <typename T, typename P>
    std::vector<T> postOrder(za::BinTreeNode<T, P> *root, bool print)
    {
        std::stack<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        BinTreeNode<T, P> *current = nullptr;
        if(root) store.push(root);

        while (!store.empty())
        {
            current = store.top();
            store.pop();
            data.insert(data.begin(), current->val());
            if(current->left) store.push(current->left);
            if(current->right) store.push(current->right);           
        }
        if(print)
        {
            std::cout << "\n";
            std::cout << "Post-order Binary Tree Traversal\n";
            std::for_each(data.begin(), data.end(), [](T &x){std::cout << x << " ";});
            //std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, "\n"));
            std::cout << "\n";
        }
        return data;
        
    }

    /**
     * \brief Binary tree preorder traversal.
     *
     * \details Constructor with children.
     *
     * \param root [in] root node, type is BinTreeNode.
     *
     * \return # type is vector of T.
     * 
     * \attention 
     * 
     */
     template <typename T, typename P>
    std::vector<T> preOrder(za::BinTreeNode<T, P> *root, bool print)
    {
        int delay = 500;
        std::string screenName = "Level-order Binary Tree Traversal";
        std::stack<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        BinTreeNode<T, P> *current = nullptr;
        if(root) store.push(root);

        while (!store.empty())
        {
            current = store.top();
            store.pop();
            data.push_back(current->val());
            if(current->right) store.push(current->right);  
            //Process left first   
            if(current->left) store.push(current->left);      
        }
        if(print)
        {
            std::cout << "\n";
            std::cout << "Pre-order Binary Tree Traversal\n";
            std::for_each(data.begin(), data.end(), [](T &x){std::cout << x << " ";});
            std::cout << "\n";
        }
        return data;
        
    }   
    
    /**
     * \brief Binary tree preorder traversal.
     *
     * \details Constructor with children.
     *
     * \param root [in] root node, type is BinTreeNode.
     *
     * \return # type is vector of T.
     * 
     * \attention 
     * 
     */
    template <typename T, typename P>
    //std::vector<T> inOrder(za::BinTreeNode<T, P> *root, bool print,cv::Mat &screen)
    std::vector<T> inOrder(za::BinTreeNode<T, P> *root, bool print)
    {
        //int delay = 500;
        std::string screenName = "In-order Binary Tree Traversal";
        std::stack<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        BinTreeNode<T, P> *current = nullptr;
        //std::map <T, cv::Point_< P >> mp;
        //cv::Point_< P > prev;
        if(root) store.push(root);

        while (!store.empty())
        {
            if(root) root = root->left;
            while(root)
            {
                store.push(root);
                root = root->left;
            }

            current = store.top();
            store.pop();
            /*
            if(data.size())
            {
                prev = mp[data.back()];
            }
            */
            data.push_back(current->val());
            /*
            mp[current->val()] = cv::Point_< P > (current->pos.x + 2, current->pos.y + 2);
            za::MyCircle(screen, current->pos); 
            cv::imshow(screenName, screen);
            cv::waitKey(delay); 
            if(data.size() >= 2)
            {
                za::MyLine( screen, prev, mp[data.back()], za::BLACK) ;
                cv::imshow(screenName, screen);
                cv::waitKey(delay);              
            }
            */
            if(current->right)
            {
                store.push(current->right); 
                root = current->right; 
            }
     
        }
        //cv::waitKey(0);  
        if(print)
        {
            std::cout << "\n";
            std::cout << screenName <<"\n";
            std::for_each(data.begin(), data.end(), [](T &x){std::cout << x << " ";});
            std::cout << "\n";
        }
        return data;
        
    }   
    
    /**
     * \brief Binary tree preorder traversal.
     *
     * \details Constructor with children.
     *
     * \param root [in] root node, type is BinTreeNode.
     *
     * \return # type is vector of T.
     * 
     * \attention 
     * 
     */
    
    template <typename T, typename P>
    std::vector<T> levelOrder(za::BinTreeNode<T, P> *root, bool print, cv::Mat &screen)
    {
        //uint8_t image[ screen.size().width * screen.size().height * 4 ];
        // Create a gif
        //GifWriter writer = {};
        //GifBegin( &writer, filename, width, height, 2, 8, true );        
        
        cv::VideoWriter video("./result/levelTrasversal.avi", cv::VideoWriter::fourcc('M','J','P','G'), 10, screen.size());
        std::queue<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        int total = 0;
        BinTreeNode<T, P> *current = nullptr;
        if(root) store.push(root);
        int delay = 500;
        std::string screenName = "Level-order Binary Tree Traversal";
        //int chCheckForEscKey;
        //int wordHeight = 50;
        //int wordWidth = 500;
        cv::Point leftCorner(120, screen.size().height - 55 );
        while (total = store.size())
        {


            while(total--)
            {
                current = store.front();
                store.pop();
                data.push_back(current->val());
                current->pos;
                za::MyCircle(screen, current->pos, za::RED);  
                za::MyText(screen, current->val(), current->pos,current->orient, za::RED);

                cv::rectangle(screen, cv::Point(100, screen.size().height - 80), cv::Point(screen.size().width - 100, screen.size().height - 30), za::BLACK);	
                za::MyText(screen, current->val(), leftCorner,"n", za::RED);
                video.write(screen);
/*
                for( int yy=0; yy<screen.size().height; ++yy )
                {
                    for( int xx=0; xx<screen.size().width; ++xx )
                    {
                          for(int j = 0; j < frame.cols; j++)
                            {
                                Vec3b bgrPixel = foo.at<cv::Vec3b>(i, j);

                                // do something with BGR values...
                            }                       
                        float red = 0.5f + 0.5f * cosf(tt+fx);
                        float grn = 0.5f + 0.5f * cosf(tt+fy+2.f);
                        float blu = 0.5f + 0.5f * cosf(tt+fx+4.f);
                        
                        SetPixelFloat( xx, yy, red, grn, blu );
                    }
                }
                GifWriteFrame( &writer, image, width, height, 2, 8, true );

*/
                cv::imshow(screenName, screen);
                    if( cv::waitKey(delay) == 27) 
                    {
                        cv::waitKey(0);
                        break;
                    }   
                za::MyText(screen, current->val(), leftCorner,"n", za::BLUE);
                za::MyText(screen, current->val(), current->pos,current->orient, za::BLUE);
                cv::Point tmp(leftCorner.x+30, screen.size().height - 55 );
                leftCorner = tmp;
                //Process left first   
                if(current->left) 
                {
                    store.push(current->left); 
                    za::MyLine( screen, current->pos, current->left->pos, za::BLACK) ;
                    video.write(screen);
                    //GifWriteFrame( &writer, image, width, height, 2, 8, true );
                    cv::imshow(screenName, screen);
                    if( cv::waitKey(delay) == 27) 
                    {
                        cv::waitKey(0);
                        break;
                    }   
                }
                if(current->right)
                {
                    store.push(current->right); 
                    za::MyLine( screen, current->pos, current->right->pos, za::BLACK) ;  
                    video.write(screen);
                    //GifWriteFrame( &writer, image, width, height, 2, 8, true );

                    cv::imshow(screenName, screen);
                    if( cv::waitKey(delay) == 27) 
                    {
                        cv::waitKey(0);
                        break;
                    }               
                }        
            }
 
     
        }
        cv::imshow(screenName, screen);
        cv::waitKey(delay);
        cv::waitKey(0);                       
        video.release();
         // Write EOF
        //GifEnd( &writer );
        if(print)
        {
            std::cout << "\n";
            std::cout << screenName <<"\n";
            std::for_each(data.begin(), data.end(), [](T &x){std::cout << x << " ";});
            std::cout << "\n";
        }
        return data;
        
    }



}
#endif  // _Z_BIN_TREE_NODE_H_A_



