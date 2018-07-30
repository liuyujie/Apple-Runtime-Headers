//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface FPMemoryObject : NSObject
{
    unsigned long long _totalDirtySize;
    unsigned long long _totalCleanSize;
    unsigned long long _totalSwappedSize;
    unsigned long long _totalReclaimableSize;
    struct FPRangeListNode *_rangeListHead;
    BOOL _accurateSizes;
    unsigned long long _totalWiredSize;
    NSString *_name;
    NSMutableSet *_memoryRegions;
}

@property(retain) NSMutableSet *memoryRegions; // @synthesize memoryRegions=_memoryRegions;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) unsigned long long totalWiredSize; // @synthesize totalWiredSize=_totalWiredSize;
@property(readonly) unsigned long long totalSwappedSize; // @synthesize totalSwappedSize=_totalSwappedSize;
@property(readonly) unsigned long long totalReclaimableSize; // @synthesize totalReclaimableSize=_totalReclaimableSize;
@property(readonly) unsigned long long totalCleanSize; // @synthesize totalCleanSize=_totalCleanSize;
@property(readonly) unsigned long long totalDirtySize; // @synthesize totalDirtySize=_totalDirtySize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)calculateSizes;
- (void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2;
- (id)init;

@end
