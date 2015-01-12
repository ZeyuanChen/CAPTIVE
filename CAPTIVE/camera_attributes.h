//
//  camera_attributes.h
//  CAPTIVE
//
//  Created by William Hill on 1/1/15.
//  Copyright (c) 2015 William Hill. All rights reserved.
//

#ifndef __CAPTIVE__camera_attributes__
#define __CAPTIVE__camera_attributes__

//- STANDARD LIBRARIES -------------------------------------------------------//
#include <stdio.h>

//- OPENCV PROCESSING LIBRARIES ----------------------------------------------//
#include <opencv/cv.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>

//============================================================================//
// CAMERA FEED CLASS (NOTE: SINGLETON INSTANCE FOR CAPTURE)                   //
//============================================================================//

class camera_captures {
public:
    // PUBLIC METHOD TO RETURN CLASS INSTANCE
    static camera_captures* instance();
    
private:
    // PRIVATE CLASS CONSTRUCTS
    camera_captures(                                   );                   // PRIVATE CONSTRUCTOR
    camera_captures(camera_captures const&             );                   // PRIVATE COPY CONSTRUCTOR
    camera_captures& operator = (camera_captures const&);                   // PRIVATE ASSIGNMENT OPERATOR
    
    // PRIVATE CLASS INSTANCE
    static camera_captures* class_instance;
};

#endif /* defined(__CAPTIVE__camera_attributes__) */
