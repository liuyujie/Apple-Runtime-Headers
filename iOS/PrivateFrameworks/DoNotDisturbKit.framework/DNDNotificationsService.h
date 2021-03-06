//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DNDSettingsUpdateListener.h"
#import "DNDStateUpdateListener.h"
#import "UNUserNotificationCenterDelegate.h"

@class DNDBehaviorSettings, DNDBypassSettings, DNDModeAssertionService, DNDSettingsService, DNDState, DNDStateModeAssertionMetadata, DNDStateService, NSObject<OS_dispatch_queue>, NSString, UNUserNotificationCenter;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    _Bool _doNotDisturbActive;
    _Bool _basicActive;
    _Bool _bedtimeActive;
    _Bool _drivingActive;
    _Bool _workoutActive;
    DNDStateModeAssertionMetadata *_longestAssertionMetadata;
    DNDState *_currentState;
    DNDBehaviorSettings *_currentBehaviorSettings;
    DNDBypassSettings *_currentPhoneCallBypassSettings;
    UNUserNotificationCenter *_notificationsCenter;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (id)_attachmentForIdentifier:(id)arg1;
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(_Bool)arg1 significantTimeChange:(_Bool)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)settingsService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)settingsService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)resume;
- (id)initWithClientIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

