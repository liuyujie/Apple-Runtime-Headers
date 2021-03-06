//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITIdleTimerStateServerDelegate.h"

@class FBSSerialQueue, ITIdleTimerStateServer, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate>
{
    ITIdleTimerStateServer *_server;
    NSObject<OS_dispatch_queue> *_calloutDispatchQueue;
    FBSSerialQueue *_calloutQueue;
    NSMutableDictionary *_assertionsByReason;
    NSMutableDictionary *_assertionReasonsByClientID;
    id <BSInvalidatable> _stateCaptureAssertion;
    id <ITIdleTimerStateServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <ITIdleTimerStateServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_identifierForClient:(id)arg1;
- (_Bool)isIdleTimerServiceAvailable;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 setIdleTimerDisabled:(_Bool)arg2 forReason:(id)arg3;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

