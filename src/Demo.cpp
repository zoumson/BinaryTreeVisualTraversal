#include "BinTreeNode.h"
#include "BinTreeTraversal.h"
#include "ConstantsColor.h"
#include <string>
#include<opencv2/imgproc/imgproc_c.h>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>

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
    cv::Mat screen(cv::Size(1500, 800),CV_8UC3, cv::Scalar(255,255,255));
    
    Node I("I", cv::Point_<int>(150, 720), "d");
    Node L("L", cv::Point_<int>(300, 720), "d");
    Node M("M", cv::Point_<int>(450, 720), "d");
    Node T("T", cv::Point_<int>(900, 720), "d");
    Node U("U", cv::Point_<int>(1050, 720), "d");

    Node G("G", &I, &L, cv::Point_<int>((I.pos.x + L.pos.x)/2, 620), "l");
    Node K("K", nullptr, &M, cv::Point_<int>(G.pos.x + 150, 620), "r");
    Node P("P", &T, &U, cv::Point_<int>((T.pos.x + U.pos.x)/2, 620), "r");
     
    Node F("F", &G, &K,cv::Point_<int>((G.pos.x + K.pos.x)/2, 520), "r");
    Node O("O", nullptr, &P,cv::Point_<int>(P.pos.x - 75, 520), "r");
    Node Q("Q",cv::Point_<int>(O.pos.x + 150, 520), "d");
 
    Node B("B", nullptr, &F, cv::Point_<int>(F.pos.x - 75, 420), "l");
    Node E("E", cv::Point_<int>(B.pos.x + 150, 420), "d");
    Node N("N", nullptr, &O, cv::Point_<int>(O.pos.x - 75, 420), "u");
    Node H("H", nullptr, &Q, cv::Point_<int>(N.pos.x + 150, 420), "ru");


    Node C("C", &B, &E, cv::Point_<int>((B.pos.x + E.pos.x)/2, 320), "l");
    Node D("D", &N, &H, cv::Point_<int>((N.pos.x + H.pos.x)/2, 320), "r");
    Node A("A", &C, &D, cv::Point_<int>((C.pos.x + D.pos.x)/2, 220), "u");
 
    za::postOrder(&A, true);

    za::preOrder(&A, true);
    za::inOrder(&A, true);
    za::levelOrder(&A, true, screen);

    return 0;
}

