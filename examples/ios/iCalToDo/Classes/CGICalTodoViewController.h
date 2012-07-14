//
//  CGICalTodoViewController.h
//  iCalToDo
//
//  Created by Satoshi Konno on 5/14/11.
//  Copyright 2011 Satoshi Konno. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CGICalendar.h"
#import "CGICalTodoDetailViewController.h"

#define CG_ICALTODOVIEWCONTROLLER_TITLE    @"ToDo"
#define CG_ICALTODOVIEWCONTROLLER_CHECKED_IMAGE_SIZE    32
#define CG_ICALTODOVIEWCONTROLLER_IMAGE_OFFSET          6
#define CG_ICALTODOVIEWCONTROLLER_IMAGE_CHECKED_NONE    @"chk_none.png"
#define CG_ICALTODOVIEWCONTROLLER_IMAGE_CHECKED_DONE    @"chk_done.png"

@interface CGICalTodoViewController : UITableViewController <CGICalTodoDetailViewControllerDelegate> {
    
}
- (id)initWithPath:(NSString *)path;
- (void)setPath:(NSString *)path;
@end
