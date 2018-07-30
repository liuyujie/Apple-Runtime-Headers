//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFCachePolicy.h>

@class NSObject<OS_dispatch_queue>;

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _maximumCount;
    unsigned int _seed;
    unsigned int _tick;
    unsigned int _tickMaximum;
    unsigned int _considerationCount;
    id *_considerationKeys;
}

+ (id)policyWithMaximumCount:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;
- (void)_rebuildConsiderationKeys:(id)arg1;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)arg1;
- (void)didAddCacheEntry:(id)arg1;
- (void)didGetCacheEntry:(id)arg1;
- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (unsigned int)capacityHint;
- (void)dealloc;
- (id)initWithMaximumCount:(unsigned int)arg1;

@end
