//
//  NotesTestAppDelegate.h
//  NotesTest
//
//  Created by Javier Julio on 6/19/10.
//  Copyright 9mmedia 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NotesTestAppDelegate : NSObject <UIApplicationDelegate> 
{
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

