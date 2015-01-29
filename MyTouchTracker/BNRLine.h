//
//  BNRLine.h
//  MyTouchTracker
//
//  Created by Anastasia Boiko on 1/26/15.
//  Copyright (c) 2015 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CGGeometry.h>

@interface BNRLine : NSObject

@property (nonatomic) CGPoint begin;
@property (nonatomic) CGPoint end;
@property (nonatomic, strong) NSMutableArray *containingArray;

@end
