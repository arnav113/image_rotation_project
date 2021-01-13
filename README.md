# image_rotation_project
A Bootcamp project(I week) , organized by Graphic Era Deemed To Be University.
@ The attached code in this repository is the project in c++ language. It is the code comprises of the way to rotate an image by a particular angle using OPEN-CV library.

@Tools and Technology used:
       * c++ programing language
       * visual studio 2019
       * GCC compiler
       * in-build library : "open-cv"
       
@ Modules of the project:
# Many in-built functions have been used to make the project successfull , are as follows-:
 * HEADER FILES  : <iostream> , <stdlib.h> , <opencv2/opencv.hpp> , project2_vscode2019.h are the libraries used herein.
 * NAMESPACES    : "using namespace std" and "using namespace cv" are the namespace being used in the program. 
 * MAIN FUNCTION : main() function contains the in-built functions. 
 * IN-BUILT FUNCTIONS : 
            1) imread()         : is used to take the image as input from different sources.
            2) namedWindow()    : is used to create a new window for the image.
            3) imshow()         : is used to display the image in the created window.
            4) Size()           : is used to calculate the size of image as matrix.
            5) Point()          : is used to find the point along which image is to be rotated.
            6) getRotationMatrix2D() : is used to rotate the image by an angle.
            7) warpAffine()          : is used for transformation.
            8) destroyWindow()       : is used to destroy the window
            9) waitkey()             : is used for execution of program.
  
@ APPLICATION -: 
# The Program can be used to rotate the image by an angle using open-cv library. 
