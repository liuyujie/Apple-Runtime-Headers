//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFWiFiManagerDataSourceDelegate.h"

@class HMFMACAddress, HMFUnfairLock, NSObject<OS_dispatch_queue>, NSString;

@interface HMFWiFiManager : HMFObject <HMFWiFiManagerDataSourceDelegate>
{
    HMFUnfairLock *_lock;
    BOOL _shouldAssertWoW;
    NSString *_currentNetworkSSID;
    HMFMACAddress *_MACAddress;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMFWiFiManagerDataSource> _dataSource;
}

+ (id)sharedManager;
@property(nonatomic) BOOL shouldAssertWoW; // @synthesize shouldAssertWoW=_shouldAssertWoW;
@property(readonly, nonatomic) id <HMFWiFiManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) HMFMACAddress *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void).cxx_destruct;
- (void)currentNetworkDidChangeForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 didChangeLinkAvailability:(BOOL)arg2;
- (void)dataSource:(id)arg1 didChangeWoWState:(BOOL)arg2;
- (void)releaseWoWAssertion;
- (void)takeWoWAssertion;
@property(copy, nonatomic) NSString *currentNetworkSSID; // @synthesize currentNetworkSSID=_currentNetworkSSID;
- (id)initWithWorkQueue:(id)arg1 dataSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
