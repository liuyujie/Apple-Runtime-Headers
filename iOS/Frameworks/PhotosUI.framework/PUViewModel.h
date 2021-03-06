//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, PUViewModelChange;

@interface PUViewModel : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
    _Bool __publishingChanges;
    NSHashTable *__changeObservers;
}

@property(readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) _Bool _publishingChanges; // @synthesize _publishingChanges=__publishingChanges;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)_applyPendingChanges;
- (void)_publishChanges;
- (void)_didChange;
- (void)_willChange;
- (void)didPublishChanges;
- (void)willPublishChanges;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) PUViewModelChange *currentChangeIfExists;
@property(readonly, nonatomic) PUViewModelChange *currentChange;
- (void)assertInsideChangesBlock;
- (id)newViewModelChange;
- (id)init;

@end

