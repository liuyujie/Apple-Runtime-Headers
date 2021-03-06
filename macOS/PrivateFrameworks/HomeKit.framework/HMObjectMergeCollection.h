//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMObjectMergeOperations, NSArray, NSMapTable, NSMutableArray;

@interface HMObjectMergeCollection : NSObject
{
    NSMutableArray *_currentExistingObjects;
    HMObjectMergeOperations *_currentOperations;
    NSMutableArray *_currentAddedObjects;
    NSMutableArray *_currentRemovedObjects;
    NSMutableArray *_currentModifiedObjects;
    NSMapTable *_commonObjectsMaps;
}

@property(retain, nonatomic) NSMapTable *commonObjectsMaps; // @synthesize commonObjectsMaps=_commonObjectsMaps;
@property(retain, nonatomic) NSMutableArray *currentModifiedObjects; // @synthesize currentModifiedObjects=_currentModifiedObjects;
@property(retain, nonatomic) NSMutableArray *currentRemovedObjects; // @synthesize currentRemovedObjects=_currentRemovedObjects;
@property(retain, nonatomic) NSMutableArray *currentAddedObjects; // @synthesize currentAddedObjects=_currentAddedObjects;
@property(nonatomic) __weak HMObjectMergeOperations *currentOperations; // @synthesize currentOperations=_currentOperations;
@property(retain, nonatomic) NSMutableArray *currentExistingObjects; // @synthesize currentExistingObjects=_currentExistingObjects;
- (void).cxx_destruct;
- (void)mergeCommonObjectsNoMergeCount;
- (void)_mergeCommonObjects;
- (void)_enumerateObjectRemoveWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateObjectAdditionWithBlock:(CDUnknownBlockType)arg1;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)arg1;
@property(readonly, nonatomic) NSArray *modifiedObjects;
@property(readonly, nonatomic) NSArray *removedObjects;
@property(readonly, nonatomic) NSArray *addedObjects;
@property(readonly, nonatomic) unsigned long long modifiedCount;
@property(readonly, nonatomic, getter=isModified) BOOL modified;
@property(readonly, nonatomic) NSArray *existingObjects;
- (id)initWithExistingObjects:(id)arg1 newObjects:(id)arg2 operations:(id)arg3;
- (id)init;

@end

