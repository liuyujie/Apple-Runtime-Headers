//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSAssetDownloadSchedulerContinuation.h"

@class MSAssetDownloadScheduler, NSObject<OS_xpc_object>, NSString;

@interface _MSAssetDownloadSchedulerContinuation : NSObject <MSAssetDownloadSchedulerContinuation>
{
    MSAssetDownloadScheduler *_scheduler;
    NSObject<OS_xpc_object> *_activity;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak MSAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
- (void)stopScheduling;
- (void)rescheduleAfterFailure;
- (void)rescheduleAfterSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
