//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHashTable, NSLock;

@interface REObserverStore : NSObject
{
    NSLock *_lock;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *allObservers;
@property(readonly, nonatomic) unsigned int count;
- (id)init;

@end

