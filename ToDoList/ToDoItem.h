//
//  ToDoItem.h
//  ToDoList
//
//  Created by Joshua Decosta on 8/26/15.
//  Copyright (c) 2015 Joshua Decosta. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
