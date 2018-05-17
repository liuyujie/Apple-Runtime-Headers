//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"
#import "HMFNetMonitorDelegate.h"
#import "HMFTimerDelegate.h"
#import "NSURLSessionDelegate.h"
#import "_HMFNetServiceMonitorDelegate.h"

@class HMFExponentialBackoffTimer, HMFNetMonitor, HMFNetService, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURL, NSURLSession, _HMFNetServiceMonitor;

@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, _HMFNetServiceMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate>
{
    _Bool _reachable;
    _Bool _pinging;
    _Bool _allowAnonymousConnection;
    _Bool _active;
    NSURL *_baseURL;
    HMFNetService *_netService;
    id <HMFHTTPClientDelegate> _delegate;
    unsigned int _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSURLSession *_session;
    HMFNetMonitor *_reachabilityMonitor;
    NSOperationQueue *_reachabilityProbeQueue;
    _HMFNetServiceMonitor *_netServiceMonitor;
    HMFExponentialBackoffTimer *_delegatedPingTimer;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (_Bool)isValidBaseURL:(id)arg1;
+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned int)arg3;
@property(retain, nonatomic) HMFExponentialBackoffTimer *delegatedPingTimer; // @synthesize delegatedPingTimer=_delegatedPingTimer;
@property(readonly, nonatomic) _HMFNetServiceMonitor *netServiceMonitor; // @synthesize netServiceMonitor=_netServiceMonitor;
@property(readonly, nonatomic) NSOperationQueue *reachabilityProbeQueue; // @synthesize reachabilityProbeQueue=_reachabilityProbeQueue;
@property(readonly, nonatomic) HMFNetMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) _Bool allowAnonymousConnection; // @synthesize allowAnonymousConnection=_allowAnonymousConnection;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property __weak id <HMFHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)monitor:(id)arg1 didUpdateReachability:(_Bool)arg2;
- (void)monitor:(id)arg1 didUpdateNetService:(id)arg2;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setNetService:(id)arg1;
@property(readonly, copy, nonatomic) HMFNetService *netService; // @synthesize netService=_netService;
- (void)cancelPendingRequests;
- (void)sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopDelegatedPingTimer;
- (void)startDelegatedPingTimer;
- (_Bool)requestClientReachabilityPingWithRetry:(_Bool)arg1;
- (void)startReachabilityProbe;
- (void)notifyDelegateOfReachabilityChange:(_Bool)arg1;
@property(nonatomic, getter=isPinging) _Bool pinging; // @synthesize pinging=_pinging;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)isValid;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (void)__initializeWithOptions:(unsigned int)arg1;
- (id)initWithNetService:(id)arg1 options:(unsigned int)arg2;
- (id)initWithBaseURL:(id)arg1 options:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
