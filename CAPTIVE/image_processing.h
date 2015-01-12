#ifndef __CAPTIVE__image_processing__
#define __CAPTIVE__image_processing__

//- STANDARD LIBRARIES -------------------------------------------------------//
#include <stdio.h>

//- OPENCV PROCESSING LIBRARIES ----------------------------------------------//
#include <opencv/cv.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>

//- MISCELLANEOUS LIBRARIES --------------------------------------------------//
#include "camera_attributes.h"

//============================================================================//
// COLORED CUBE MARKER CLASS                                                  //
//============================================================================//

class cube_marker {
    public:
        // PUBLIC CLASS CONSTRUCTOR
        cube_marker(int hlow, int slow, int vlow, int hcap, int scap, int vcap);
    
    private:
        // CAMERA CAPTURE INSTANCE (NOTE: RETRIEVES CAMERA FRAME)
        camera_captures* capture;
    
        // ACCEPTABLE COLOR RANGES (NOTE: ALL VALUES ARE FOR THE HSV COLOR SPACE)
        int hue_low, hue_cap;                                                   // RANGE - HUE
        int sat_low, sat_cap;                                                   // RANGE - SATURATION
        int val_low, val_cap;                                                   // RANGE - VALUE
        
        // ATTRIBUTES RELATED TO THE CAPTURE REGION OF INTEREST
        float roix;                                                             // 'X' - LOCATION OF REGION CENTER
        float roiy;                                                             // 'Y' - LOCATION OF REGION CENTER
        float area;                                                             // AREA OF THE RECTANGULAR REGION
        
        // APPROXIMATE LOCATION OF MARKER IN THREE-DIMENSIONAL SPACE
        float position_x;
        float position_y;
        float position_z;
};

//============================================================================//
// PRIMARY IMAGE PROCESSING CLASS                                             //
//============================================================================//

class image_processing {
    public:
        // PUBLIC CLASS CONSTRUCTOR
        image_processing();
    
    private:
        // CLASS INSTANCE FOR CAMERA FEED
        camera_captures* camera_feed;
    
        // CLASS INSTANCES FOR COLOR MASKS
        cube_marker* orange_mask;
        cube_marker* yellow_mask;
        cube_marker* green__mask;
        cube_marker* blue___mask;
        cube_marker* violet_mask;
        cube_marker* red____mask;
        cube_marker* white__mask;
        cube_marker* black__mask;
};

#endif