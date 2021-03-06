//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTDaemonClientRegistrar.h>

#import "NSSecureCoding.h"
#import "RTDaemonClientRegistrarProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RTActionManager;

@interface RTDaemonClientRegistrarAction : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>
{
    id <RTDaemonClientRegistrarActionProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pendingActionConditionInvocations;
    NSMutableArray *_monitoredActions;
    RTActionManager *_actionManager;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) RTActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) NSMutableArray *monitoredActions; // @synthesize monitoredActions=_monitoredActions;
@property(retain, nonatomic) NSMutableDictionary *pendingActionConditionInvocations; // @synthesize pendingActionConditionInvocations=_pendingActionConditionInvocations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <RTDaemonClientRegistrarActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)registered;
- (BOOL)invocationsPending;
- (long long)countOfPendingInvocations;
- (void)addPendingAction:(id)arg1 block:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3 description:(id)arg4;
- (void)_logMonitoredAction:(id)arg1;
- (void)_stopMonitoringPredictedConditionsForAction:(id)arg1;
- (void)stopMonitoringPredictedConditionsForAction:(id)arg1;
- (void)_onActionConditions:(id)arg1 error:(id)arg2;
- (void)_startMonitoringPredictedConditionsForAction:(id)arg1;
- (void)startMonitoringPredictedConditionsForAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActionManager:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

