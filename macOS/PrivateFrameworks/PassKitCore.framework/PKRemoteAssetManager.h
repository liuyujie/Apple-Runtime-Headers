//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface PKRemoteAssetManager : NSObject
{
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableDictionary *_sha1HexFromRelativeManifest;
    NSMutableArray *_completionHandlers;
}

- (void).cxx_destruct;
- (void)_flushBundleCaches;
- (BOOL)addRemoteAssetData:(id)arg1 shouldWriteData:(BOOL)arg2 forManifestItem:(id)arg3 error:(id *)arg4;
- (BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id *)arg3;
- (void)_callCompletionHandlersWithFinishState:(BOOL)arg1 progress:(float)arg2 error:(id)arg3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)assetExistsLocally:(id)arg1;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)arg1;
- (id)itemWithRelativePath:(id)arg1;
- (id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)deviceSpecificItems;
- (id)remoteAssetManifests;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;

@end

