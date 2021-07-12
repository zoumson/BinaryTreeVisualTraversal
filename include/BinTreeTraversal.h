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
    std::vector<T> inOrder(za::BinTreeNode<T, P> *root, bool print)
    {
        std::stack<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        BinTreeNode<T, P> *current = nullptr;
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
            data.push_back(current->val());
            if(current->right)
            {
                store.push(current->right); 
                root = current->right; 
            }
     
        }
        if(print)
        {
            std::cout << "\n";
            std::cout << "In-order Binary Tree Traversal\n";
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
        std::queue<BinTreeNode<T, P> *> store;
        std::vector<T> data;
        int total = 0;
        BinTreeNode<T, P> *current = nullptr;
        if(root) store.push(root);
        int delay = 500;
        std::string screenName = "Level-order Binary Tree Traversal";
        while (total = store.size())
        {


            while(total--)
            {
                current = store.front();
                store.pop();
                data.push_back(current->val());
                current->pos;
                za::MyCircle(screen, current->pos);  
   
                za::MyText(screen, current->val(), current->pos,current->orient);
                cv::imshow(screenName, screen);
                cv::waitKey(delay);
                //Process left first   
                if(current->left) 
                {
                    store.push(current->left); 
                    za::MyLine( screen, current->pos, current->left->pos) ;
                    cv::imshow(screenName, screen);
                    cv::waitKey(delay);
                }
                if(current->right)
                {
                    store.push(current->right); 
                    za::MyLine( screen, current->pos, current->right->pos) ;  
                    cv::imshow(screenName, screen);
                    cv::waitKey(delay);                
                }        
            }
 
     
        }
  
        cv::waitKey(0);                       

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



