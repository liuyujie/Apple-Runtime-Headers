//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"
#import "NSSecureCoding.h"

@class HMDelegateCaller, HMEventTrigger, HMFMessageDispatcher, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver>
{
    _Bool _endEvent;
    HMEventTrigger *_eventTrigger;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    NSString *_triggerType;
    HMFMessageDispatcher *_msgDispatcher;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDelegateCaller *_delegateCaller;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (_Bool)isSupportedForHome:(id)arg1;
@property(retain, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(nonatomic, getter=isEndEvent) _Bool endEvent; // @synthesize endEvent=_endEvent;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_updateTriggerType;
- (id)initWithDict:(id)arg1;
- (void)_invalidate;
@property(nonatomic) __weak HMEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
