//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICFPLeaseSyncSession, ICSuzeLeaseSessionConfiguration, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue;

@interface ICSuzeLeaseSession : NSObject
{
    int _automaticRefreshCount;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _isRunning;
    NSDate *_leaseExpirationDate;
    NSObject<OS_dispatch_source> *_leaseRenewTimer;
    ICFPLeaseSyncSession *_leaseSyncSession;
    NSOperationQueue *_operationQueue;
    ICSuzeLeaseSessionConfiguration *_configuration;
    id <ICSuzeLeaseSessionDelegate> _delegate;
}

@property(nonatomic) __weak id <ICSuzeLeaseSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) ICSuzeLeaseSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_updateRenewalTimerWithResponse:(id)arg1;
- (void)_updateRenewalTimer;
- (void)_renewLeaseTimerAction;
- (id)_newSuzeLeaseRequestWithType:(int)arg1 clientData:(id)arg2;
- (void)stopLeaseSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startLeaseSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endAutomaticallyRefreshingLease;
- (void)beginAutomaticallyRefreshingLease;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

