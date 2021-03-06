//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSectionedIdentifierListEntry, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MPSectionedIdentifierList : NSObject
{
    int _itemCount;
    _Bool _automaticallyReversesNonDestructiveDataSourceEdits;
    NSString *_identifier;
    id <MPSectionedIdentifierListDelegate> _delegate;
    NSMutableArray *_startEntries;
    MPSectionedIdentifierListEntry *_endEntry;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_sectionHeadEntryMap;
}

@property(readonly, nonatomic) NSMutableDictionary *sectionHeadEntryMap; // @synthesize sectionHeadEntryMap=_sectionHeadEntryMap;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) MPSectionedIdentifierListEntry *endEntry; // @synthesize endEntry=_endEntry;
@property(readonly, nonatomic) NSMutableArray *startEntries; // @synthesize startEntries=_startEntries;
@property(nonatomic) _Bool automaticallyReversesNonDestructiveDataSourceEdits; // @synthesize automaticallyReversesNonDestructiveDataSourceEdits=_automaticallyReversesNonDestructiveDataSourceEdits;
@property(readonly, nonatomic) int itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <MPSectionedIdentifierListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2;
- (id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2;
- (void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3;
- (void)_enqueueDataSourceWorkIfNeeded:(CDUnknownBlockType)arg1;
- (id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3;
- (id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3;
- (void)_addBranchToEntry:(id)arg1 entries:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2;
- (id)enumeratorWithOptions:(unsigned int)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (id)enumeratorWithOptions:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithOperationQueue:(id)arg1;
- (id)init;
- (id)_debugDescriptionWithEnumerator:(id)arg1;
- (id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2;
- (id)debugDescription;

@end

