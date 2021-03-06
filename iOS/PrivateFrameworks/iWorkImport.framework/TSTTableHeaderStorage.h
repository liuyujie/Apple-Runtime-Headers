//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPContainedObject.h>

#import "TSTTableHeaderStorage.h"

@class NSString, TSTTableHeaderStorageBucket;

__attribute__((visibility("hidden")))
@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage>
{
    TSTTableHeaderStorageBucket *mBuckets[1];
}

- (unsigned int)lowerBound:(unsigned int)arg1;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (long long)count;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)enumerateHeadersWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)willModifyAllHeaders;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2;
- (void)saveToArchive:(struct HeaderStorage *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct HeaderStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

