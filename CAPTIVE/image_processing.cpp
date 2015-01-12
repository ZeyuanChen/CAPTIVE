//
//  image_processing.cpp
//  CAPTIVE
//
//  Created by William Hill on 12/27/14.
//  Copyright (c) 2014 William Hill. All rights reserved.
//

#include "image_processing.h"

//============================================================================//
//  CONSTRUCTOR AND METHODS: COLOR CUBE MARKER CLASS                          //
//============================================================================//

cube_marker::cube_marker(int hlow, int slow, int vlow, int hcap, int scap, int vcap){
    // INITIALIZE CAMERA INSTANCE IN MARKER
    capture = camera_captures::instance();
    
    // INITIALIZE ACCEPTABLE COLOR RANGE
    hue_low = hlow;
    sat_low = slow;
    val_low = vlow;
    hue_cap = hcap;
    sat_cap = scap;
    val_cap = vcap;
    
}


//============================================================================//
//  CONSTRUCTOR AND METHODS: IMAGE PROCESSING CLASS                           //
//============================================================================//

image_processing::image_processing(){
    // INITIALIZE CAMERA FOR VIDEO CAPTURE
    camera_feed = camera_captures::instance();
    
    // INITIALIZE EACH COLOR MASK FOR MARKERS
    orange_mask = new cube_marker(  0, 150,  60,  22, 255, 255);
    yellow_mask = new cube_marker( 22, 150,  60,  38, 255, 255);
    green__mask = new cube_marker( 38, 150,  60,  75, 255, 255);
    blue___mask = new cube_marker( 75, 150,  60, 130, 255, 255);
    violet_mask = new cube_marker(130, 150,  60, 160, 255, 255);
    red____mask = new cube_marker(160, 150,  60, 180, 255, 255);
    white__mask = new cube_marker(  0,   0, 200, 180,  50, 255);
    black__mask = new cube_marker(  0,   0,   0, 180, 255,  50);
}