#include "BinTreeNode.h"
//#include "BinTreeTraversal.h"
//#include "ConstantsColor.h"
#include <string>
//#include<opencv2/imgproc/imgproc_c.h>
//#include<opencv2/core.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>

/*
void MyLine( cv::Mat &img, cv::Point start, cv::Point end )
{
  int thickness = 2;
  int lineType = cv::LINE_8;
  cv::arrowedLine( img,
    start,
    end,
    cv::Scalar( 0, 0, 0 ),
    thickness,
    lineType );
}

void MyFilledCircle( cv::Mat &img, cv::Point center )
{
    int radius = 10;
    cv::circle( img,
      center,
      radius,
      za::RED,
      cv::FILLED,
      cv::LINE_8 );
}
*/
int main(int argc, char const *argv[])
{
    typedef za::BinTreeNode<std::string, int> Node;
    //cv::Mat screen(cv::Size(800, 600),CV_8UC3, cv::Scalar(255,255,255));
    
    //MyLine( screen, cv::Point( 100, 100), cv::Point( 400, 100) );
    //MyFilledCircle(screen, cv::Point( 150, 100));
    //cv::namedWindow( "Display Image", cv::WINDOW_AUTOSIZE );


    Node B;
    //Node B("B", cv::Point_<int>(140, 250));
    //Node B("B", cv::Point_<int>(140, 250), std::string("d"));
    //Node E("E", cv::Point_<int>(190, 250), "d");
    //Node H("H", cv::Point_<int>(560, 250), "d");
    //Node C("C", &B, &E, cv::Point_<int>(220, 150), "u");
    //Node D("D", nullptr, &H, cv::Point_<int>(480, 150), "r");
    //Node A("A", &C, &D, cv::Point_<int>(300, 50), "d");
   /*
    za::postOrder(&A, true);

    za::preOrder(&A, true);
    za::inOrder(&A, true);
    //za::levelOrder(&A, true);
    za::levelOrder(&A, true, screen);

    cv::imshow("Display Image", screen);
    cv::waitKey(0);
*/
    /* code */
    return 0;
}

