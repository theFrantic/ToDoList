//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Daniel Whilchy on 18/12/13.
//  Copyright (c) 2013 Daniel Whilchy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
