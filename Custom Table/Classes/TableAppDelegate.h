//
//  TableAppDelegate.h
//  Table
//
//  Created by Javier Julio on 6/20/10.
//  Copyright 9mmedia 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TableViewController;

@interface TableAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TableViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TableViewController *viewController;

@end

