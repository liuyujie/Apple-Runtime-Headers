//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore, HKWheelchairUseObject, NSHashTable, NSObject<OS_dispatch_queue>;

@interface _HKWheelchairUseCharacteristicCache : NSObject
{
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    int _state;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSObject<OS_dispatch_queue> *_queue;
    int _characteristicUpdateToken;
    int _queryRetries;
}

- (void).cxx_destruct;
- (void)_handleFetchSuccess:(id)arg1;
- (void)_handleFetchError:(id)arg1;
- (void)_fetchWheelchairUse;
- (void)_fetchWheelchairUseIfNecessary;
- (_Bool)_needsFetch;
- (_Bool)hasFetchedWheelchairUse;
- (_Bool)isWheelchairUser;
- (void)_alertObserversDidUpdateToWheelchairUser:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end

