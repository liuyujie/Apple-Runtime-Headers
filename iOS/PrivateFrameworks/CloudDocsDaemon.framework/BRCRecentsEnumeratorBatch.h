//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject
{
    NSMutableOrderedSet *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSFileProviderEnumerationObserver> _observer;
    unsigned long long _rank;
}

@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)listItems:(CDUnknownBlockType)arg1;
- (id)description;
- (unsigned long long)batchCount;
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;
- (void)addIndexOfItem:(id)arg1;
- (id)init;

@end
