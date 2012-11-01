//
//  DTAppDelegate.h
//  DTUIKitAdditionsExamples
//
//  Created by dave.trudes on 01.11.12.
//  Copyright (c) 2012 David Renoldner <hello@davetrudes.com>. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DTViewController;

@interface DTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) DTViewController *viewController;

@end
