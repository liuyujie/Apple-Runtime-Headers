//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (IC)
- (id)objectAfter:(id)arg1 wrap:(_Bool)arg2;
- (id)objectBefore:(id)arg1 wrap:(_Bool)arg2;
- (id)objectAfter:(id)arg1;
- (id)objectBefore:(id)arg1;
- (_Bool)ic_indexIsValid:(int)arg1;
- (unsigned int)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned int *)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)arrayByGroupingIntoArraysWithMaxCount:(unsigned int)arg1;
- (id)objectsOfClass:(Class)arg1;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id ic_randomObject;
@end

