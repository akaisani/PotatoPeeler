//
//  AppDelegate.h
//  PotatoPeeler
//
//  Created by Abid Amirali on 6/16/19.
//  Copyright © 2019 Abid Amirali. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

