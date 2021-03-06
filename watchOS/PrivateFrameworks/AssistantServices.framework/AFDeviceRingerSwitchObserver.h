//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFNotifyObserverDelegate.h"

@class AFNotifyObserver, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFNotifyObserver *_notifyObserver;
    NSHashTable *_listeners;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) int state;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

