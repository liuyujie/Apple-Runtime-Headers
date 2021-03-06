//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSSearchableIndexDelegate.h"

@class CSSearchableIndex, ICSelectorDelayer, NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate>
{
    BOOL _disabled;
    BOOL _retryOnErrors;
    BOOL _observingChanges;
    unsigned long long _maxBytesPerIndexingBatch;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSOperationQueue *_operationQueue;
    NSDictionary *_dataSourcesByIdentifier;
    CSSearchableIndex *_searchableIndex;
    ICSelectorDelayer *_changeProcessingDelayer;
    NSMutableDictionary *_retryTimers;
}

+ (id)sharedIndexer;
@property(retain, nonatomic) NSMutableDictionary *retryTimers; // @synthesize retryTimers=_retryTimers;
@property(nonatomic, getter=isObservingChanges) BOOL observingChanges; // @synthesize observingChanges=_observingChanges;
@property(retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer; // @synthesize changeProcessingDelayer=_changeProcessingDelayer;
@property(retain, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;
@property(copy, nonatomic) NSDictionary *dataSourcesByIdentifier; // @synthesize dataSourcesByIdentifier=_dataSourcesByIdentifier;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue; // @synthesize indexingQueue=_indexingQueue;
@property(nonatomic) unsigned long long maxBytesPerIndexingBatch; // @synthesize maxBytesPerIndexingBatch=_maxBytesPerIndexingBatch;
@property(nonatomic) BOOL retryOnErrors; // @synthesize retryOnErrors=_retryOnErrors;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (void)clearRetryForSelector:(SEL)arg1;
- (void)retrySelector:(SEL)arg1;
- (id)objectForSearchableItemIdentifier:(id)arg1 inContexts:(id)arg2;
- (id)objectsDictionaryForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 inIndex:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsInIndex;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishRemainingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelIndexingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reindexAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newContextsForAllDataSources;
- (id)dataSourceWithIdentifier:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1;
@property(readonly, nonatomic) NSArray *dataSources;
- (void)processChanges;
- (void)dataSourceDidChange:(id)arg1;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

