//
//  DrawingAppDelegate.h
//  DrawSketch
//
//  Created by Vijay Gupta on 24/01/13.
//  Copyright (c) 2013 Shahdeep. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DrawingViewController;

@interface DrawingAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) DrawingViewController *viewController;

@end
