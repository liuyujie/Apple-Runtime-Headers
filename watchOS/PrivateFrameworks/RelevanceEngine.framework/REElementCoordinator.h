//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSMutableArray, NSMutableDictionary, REObserverStore;

@interface REElementCoordinator : RERelevanceEngineSubsystem
{
    NSMutableDictionary *_displayElements;
    REObserverStore *_observers;
    _Bool _performingBatch;
    NSMutableArray *_updates;
}

+ (id)applicationPrewarmIdentifiers;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)refreshElement:(id)arg1 atPath:(id)arg2;
- (void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)removeElement:(id)arg1 atPath:(id)arg2;
- (void)insertElement:(id)arg1 atPath:(id)arg2;
- (void)reloadElement:(id)arg1 atPath:(id)arg2;
- (void)performBatchUpdateBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pathForElement:(id)arg1;
- (unsigned int)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (id)displayElements;
@property(readonly, nonatomic) unsigned int numberOfObservers;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)didRemoveObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)didAddObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

@end

