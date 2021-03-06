//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDDataObserver.h"
#import "HDHealthDaemonReadyObserver.h"

@class HDProfile, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface NLHeartRateNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_fakingNotifyTokens;
}

- (void).cxx_destruct;
- (void)_unsubscribeToFakingNotifications;
- (void)_subscribeToFakingNotification:(id)arg1 type:(id)arg2 withData:(_Bool)arg3;
- (void)_subscribeToFakingNotifications;
- (void)_queue_fakeNotificationWithEventType:(id)arg1 withData:(_Bool)arg2;
- (void)_queue_showNotificationForHeartEvent:(id)arg1;
- (id)_userNotificationCenter;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

