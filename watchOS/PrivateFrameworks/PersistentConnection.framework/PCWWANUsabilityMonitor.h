//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientDataDelegate.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, CoreTelephonyClient, NSObject<OS_dispatch_queue>, NSString, PCInterfaceUsabilityMonitor;

__attribute__((visibility("hidden")))
@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    _Bool _isInCall;
    _Bool _isInHighPowerState;
    _Bool _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    int _currentRAT;
    int _powerlogCDRXToken;
    CoreTelephonyClient *_ctClient;
    long _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
}

- (void).cxx_destruct;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) int interfaceIdentifier;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackUsability:(_Bool)arg1;
- (void)_forwardConfigurationOnIvarQueue;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) int currentRAT; // @synthesize currentRAT=_currentRAT;
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) _Bool isLTEWithCDRX;
- (void)_adjustInterfaceNameForWWANContextID:(long)arg1 interfaceName:(id)arg2;
- (id)_dataPreferredSubcriptionContext;
- (void)_setupWWANMonitor;
- (void)dealloc;
- (id)initWithDelegateQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

