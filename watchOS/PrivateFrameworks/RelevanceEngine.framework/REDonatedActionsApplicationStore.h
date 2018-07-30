//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REDonatedActionFilteredCacheDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, REDonatedActionFilteredCache, REUpNextScheduler;

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate>
{
    REDonatedActionFilteredCache *_cache;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_applicationScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_applications;
}

- (void).cxx_destruct;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)donatedActionFilteredCacheDidAddDonation:(id)arg1;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyApplicationsUpdates;
- (void)_notify;
- (void)_sortDonationsByCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchPerformedCountForAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllUniqueDonationsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTopDonationsForApplications:(id)arg1 fromOnlyRecentPlatform:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchApplicationsProvidingDonations:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
