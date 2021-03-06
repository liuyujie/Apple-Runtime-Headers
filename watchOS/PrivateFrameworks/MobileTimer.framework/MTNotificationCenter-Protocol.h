//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAlarm, MTScheduledObject, MTTimer, NSArray;

@protocol MTNotificationCenter <NSObject>
- (void)dismissNotificationsForTimer:(MTTimer *)arg1;
- (void)postNotificationForScheduledTimer:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1;
- (void)postNotificationForScheduledAlarm:(MTScheduledObject *)arg1 completionBlock:(void (^)(void))arg2;

@optional
- (void)registerResponseDelegate:(id <MTNotificationResponseDelegate>)arg1;
- (void)dismissNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 dismissAction:(unsigned int)arg2;
@end

