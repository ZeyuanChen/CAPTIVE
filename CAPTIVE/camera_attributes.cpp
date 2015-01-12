//
//  camera_attributes.cpp
//  CAPTIVE
//
//  Created by William Hill on 1/1/15.
//  Copyright (c) 2015 William Hill. All rights reserved.
//

#include "camera_attributes.h"


//============================================================================//
//  CONSTRUCTOR AND METHODS: CAMERA CAPTURE CLASS                             //
//============================================================================//

// GLOBAL STATIC POINTER TO ENSURE SINGLE INSTANCE OF CLASS
camera_captures* camera_captures::class_instance = NULL;

// PUBLIC FUNCTION TO RETURN SINGLETON CLASS INSTANCE
camera_captures* camera_captures::instance(){
    if(!class_instance)
        class_instance = new camera_captures();
    return class_instance;
}

// DEFAULT CONSTRUCTOR FOR CLASS INSTANCE
camera_captures::camera_captures(){
    
}

camera = cv2.VideoCapture(self.context.options.input_source) if not self.context.isImage else cv2.imread(self.context.options.input_source)
