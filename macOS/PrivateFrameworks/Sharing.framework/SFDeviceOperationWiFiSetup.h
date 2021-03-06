//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUReachabilityMonitor, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, SFSession;

@interface SFDeviceOperationWiFiSetup : NSObject
{
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    unsigned int _repairFlags;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricSeconds;
    SFSession *_sfSession;
}

@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(nonatomic) unsigned int repairFlags; // @synthesize repairFlags=_repairFlags;
@property(readonly, nonatomic) double metricSeconds; // @synthesize metricSeconds=_metricSeconds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_complete:(id)arg1;
- (void)invalidate;
- (void)_activate2;
- (void)_activate;
- (void)activate;
- (id)init;

@end

