//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENGroupContextCacheMiddleware.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_groupIDtoGroup;
    NSMutableDictionary *_latestStableGroupIDToGroup;
}

@property(retain, nonatomic) NSMutableDictionary *latestStableGroupIDToGroup; // @synthesize latestStableGroupIDToGroup=_latestStableGroupIDToGroup;
@property(retain, nonatomic) NSMutableDictionary *groupIDtoGroup; // @synthesize groupIDtoGroup=_groupIDtoGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)middlewareCacheCostForContext:(id)arg1;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

