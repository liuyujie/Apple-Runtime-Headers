//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class NSIndexPath, TSKTableView;

@protocol TSKTableViewDelegate <UITableViewDelegate>

@optional
- (void)tableView:(TSKTableView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(TSKTableView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(TSKTableView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

