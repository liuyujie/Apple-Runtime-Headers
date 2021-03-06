//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString;

@interface HKObserverSet : NSObject
{
    NSMapTable *_observerMap;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)_notifyObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) unsigned int count;
- (void)notifyObservers:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;

@end

