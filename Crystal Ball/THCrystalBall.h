//
//  THCrystalBall.h
//  Crystal Ball
//
//  Created by Richard Mook on 9/3/14.
//  Copyright (c) 2014 Rick Mook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THCrystalBall : NSObject {
   NSArray *_predictions;
}
@property (strong, nonatomic, readonly) NSArray *predictions;
- (NSString*) randomPrediction;

@end
