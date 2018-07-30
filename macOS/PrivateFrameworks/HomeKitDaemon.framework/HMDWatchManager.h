//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "IDSServiceDelegate.h"

@class IDSService, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    NSMutableSet *_connectedWatches;
    BOOL _pairedWithWatch;
    id <HMDWatchManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    IDSService *_service;
}

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)isCompatibleWatchDevice:(id)arg1;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property __weak id <HMDWatchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (id)connectedWatchFromDeviceID:(id)arg1;
- (void)_updateConnectedDevices:(id)arg1;
- (void)notifyDelegateOfRemovedConnectedWatch:(id)arg1;
- (void)removeConnectedWatch:(id)arg1;
- (void)notifyDelegateOfAddedConnectedWatch:(id)arg1;
- (void)addConnectedWatch:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *connectedWatches;
@property(getter=isPairedWithWatch) BOOL pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property(readonly, copy, nonatomic) NSArray *watches;
- (void)__initializeConnectedDevices;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
