//
//  MSAppDelegate.h
//  StockTrader
//
//  Created by Matt Smicinski on 1/14/14.
//  Copyright (c) 2014 Matt Smicinski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MSAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
