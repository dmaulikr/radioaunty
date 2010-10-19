//
//  ScheduleMenuItem.h
//  Radio
//
//  Created by Duncan Robertson on 15/10/2010.
//  Copyright 2010 Duncan Robertson. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface ScheduleMenuItem : NSMenuItem {
  NSDate *start;
  NSString *title;
  NSString *availability;
  NSString *short_synopsis;
  NSString *currentState;
}

@property (nonatomic, retain) NSDate *start;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *availability;
@property (nonatomic, copy) NSString *short_synopsis;
@property (nonatomic, copy) NSString *currentState;

- (void)createLabel;

@end
