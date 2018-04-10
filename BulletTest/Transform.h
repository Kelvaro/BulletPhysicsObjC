//
//  Transform.m
//  iosMaze
//
//  Created by Jason Cheung on 2018-03-19.
//  Copyright © 2018 Maze Team. All rights reserved.
//
//  Use this class to manipulate the OFFSET of the model.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>

@interface Transform : NSObject

@property GLKVector3 position;
@property GLKVector3 rotation;
@property GLKVector3 scale;

// calculate and return a model matrix. DON'T USE THIS WITH BULLET
-(GLKMatrix4)GetModelMatrix;
-(void)Translate :(float)x :(float)y :(float)z;
-(void)Rotate :(float)xDeg :(float)yDeg :(float)zDeg;
-(void)SetScale :(float)scale;

@end
