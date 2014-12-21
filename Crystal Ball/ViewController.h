//
//  ViewController.h
//  Crystal Ball
//
//  Created by Richard Mook on 9/3/14.
//  Copyright (c) 2014 Rick Mook. All rights reserved.
//

#import <UIKit/UIKit.h>

@class THCrystalBall;

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) THCrystalBall *crystalBall;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediction;
@end
