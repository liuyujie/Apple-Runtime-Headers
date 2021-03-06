//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSRemoteNotifierDelegate.h"

@class NSOperationQueue, NSString, VSDeveloperServiceConnection, VSPreferences, VSRemoteNotifier, VSStoreURLBag;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate>
{
    _Bool _hasDeterminedInitialStatus;
    long long _status;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    VSStoreURLBag *_bag;
    VSPreferences *_preferences;
    VSDeveloperServiceConnection *_developerServiceConnection;
}

+ (_Bool)automaticallyNotifiesObserversOfStatus;
+ (id)defaultCenter;
@property(retain, nonatomic) VSDeveloperServiceConnection *developerServiceConnection; // @synthesize developerServiceConnection=_developerServiceConnection;
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) VSStoreURLBag *bag; // @synthesize bag=_bag;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(nonatomic) _Bool hasDeterminedInitialStatus; // @synthesize hasDeterminedInitialStatus=_hasDeterminedInitialStatus;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)determineIdentityProviderAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)_beginStatusUpdateAttemptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_sendStatusChangeNotification;
- (void)_accountStoreChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

