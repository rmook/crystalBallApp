//
//  THCrystalBall.m
//  Crystal Ball
//
//  Created by Richard Mook on 9/3/14.
//  Copyright (c) 2014 Rick Mook. All rights reserved.
//

#import "THCrystalBall.h"

@implementation THCrystalBall

- (NSArray *) predictions {
   if (_predictions == nil) {
         _predictions = [[NSArray alloc] initWithObjects:@"It is Certain",@"It is decidely so",@"All signs say YES", @"The stars are not aligned", @"My reply is no",@"It is doubtful",@"Better not tell you now",@"Concentrate and ask again",@"Unable to answer now", nil];
   }
   return _predictions;
}

- (NSString*) randomPrediction {
   int random = arc4random_uniform(self.predictions.count);
   return [self.predictions objectAtIndex:random];
}

@end
