//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSCache.h>

__attribute__((visibility("hidden")))
@interface _NSMoribundCache : NSCache
{
}

- (void)setEvictsObjectsWithDiscardedContent:(_Bool)arg1;
- (_Bool)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned int)arg1;
- (unsigned int)countLimit;
- (void)setTotalCostLimit:(unsigned int)arg1;
- (unsigned int)totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end

