//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NCABDelayedNotificationSender : NSObject
{
    struct __CFArray *_delegatesForDelayedNotification;
    NSMutableArray *_delayedNotifications;
    struct __CFDictionary *_delayedNotificationInfos;
}

- (void)addDelayedNotification:(id)arg1;
- (void)addDelayedNotification:(id)arg1 withInfo:(struct __CFDictionary *)arg2 allowDuplicateNotification:(_Bool)arg3;
- (void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(_Bool)arg2;
- (_Bool)containsDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;

@end

