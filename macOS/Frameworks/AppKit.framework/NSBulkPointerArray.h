//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSPointerFunctions;

__attribute__((visibility("hidden")))
@interface NSBulkPointerArray : NSObject <NSCopying>
{
    void **_cArray;
    unsigned long long _count;
    unsigned long long _capacity;
    NSPointerFunctions *_pointerFuncs;
    unsigned long long _pointerFuncOptions;
}

+ (void)_setRunningTestRig:(BOOL)arg1 minCapacity:(unsigned long long)arg2;
+ (id)weakObjectsPointerArray;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)removePointersAtIndexes:(id)arg1;
- (void)insertPointers:(void **)arg1 numberOfItems:(unsigned long long)arg2 atIndexes:(id)arg3;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void *)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)addPointer:(void *)arg1;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (void **)_cArray;
- (_Bool)_pointersAreEqual:(void *)arg1:(void *)arg2;
- (void)releasePointersInRange:(struct _NSRange)arg1;
- (void)releasePointer:(void *)arg1;
- (void *)retainPointer:(void *)arg1;
- (_Bool)pointersAreReleased;
- (_Bool)pointersAreRetained;
- (id)debugDescription;
- (void)clearRangeWithoutRelease:(struct _NSRange)arg1;
- (void)clearRange:(struct _NSRange)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (unsigned long long)_capacity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

