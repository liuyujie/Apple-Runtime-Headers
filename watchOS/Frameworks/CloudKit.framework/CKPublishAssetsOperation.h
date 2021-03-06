//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation
{
    CDUnknownBlockType _assetPublishedBlock;
    CDUnknownBlockType _publishAssetCompletionBlock;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned int _requestedTTL;
    unsigned int _URLOptions;
    NSArray *_recordIDs;
    NSMutableDictionary *_perItemErrorsByRecordID;
}

@property(retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID; // @synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(nonatomic) unsigned int URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned int requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType publishAssetCompletionBlock; // @synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType assetPublishedBlock; // @synthesize assetPublishedBlock=_assetPublishedBlock;
- (id)activityCreate;
- (id)initWithRecordIDs:(id)arg1;

@end

