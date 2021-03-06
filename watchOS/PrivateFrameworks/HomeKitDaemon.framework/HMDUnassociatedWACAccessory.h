//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>

#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMFTimer, NSObject<OS_dispatch_queue>, NSString;

@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate>
{
    id <HMDWACDevice> _wacDevice;
    CDUnknownBlockType _completionHandler;
    HMFTimer *_handoffExpirationTimer;
    int _state;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDUnassociatedAccessory *_postWACAccessory;
    id <HMDWACAccessoryConfigurationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *wacDeviceID;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)_postWACMatchingAccessoryFound:(id)arg1;
- (void)_abort:(CDUnknownBlockType)arg1;
- (void)_postWACMatchTimeout;
- (void)_waitForPostWACMatch;
- (void)_configureDeviceCompleted:(id)arg1;
- (void)_configureDevice;
- (void)_userPermissionResponse:(_Bool)arg1;
- (void)_requestUserPermission;
- (void)updateWithMatchingUnassociatedAccessory:(id)arg1;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSString *wacDeviceID; // @synthesize wacDeviceID;
@property(retain, setter=setWACDevice:) id <HMDWACDevice> wacDevice;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 wacDevice:(id)arg5;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDWACAccessoryConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDelegate:(id)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

