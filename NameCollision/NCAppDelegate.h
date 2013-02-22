//
//  NCAppDelegate.h
//  NameCollision
//
//  Created by Dariusz Seweryn on 2/22/13.
//  Copyright (c) 2013 Dariusz Seweryn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NCViewController;

@interface NCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) NCViewController *viewController;

@end
