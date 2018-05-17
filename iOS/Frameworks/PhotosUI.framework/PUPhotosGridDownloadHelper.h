//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, PUPhotosGridViewController;

@interface PUPhotosGridDownloadHelper : NSObject
{
    NSMutableDictionary *_downloadContexts;
    NSObject<OS_dispatch_queue> *_downloadContextsIsolationQueue;
    _Bool _shouldTreatLivePhotosAsStills;
    PUPhotosGridViewController *_gridViewController;
    long long _mode;
}

+ (id)createAlertControllerForDownloadErrorWithAsset:(id)arg1;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool shouldTreatLivePhotosAsStills; // @synthesize shouldTreatLivePhotosAsStills=_shouldTreatLivePhotosAsStills;
@property(readonly, nonatomic) __weak PUPhotosGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (void)_removeDownloadRequestForIdentifier:(id)arg1;
- (id)_downloadContextForIdentifier:(id)arg1;
- (void)_setDownloadContext:(id)arg1 forIdentifier:(id)arg2;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 canceled:(_Bool)arg3 error:(id)arg4;
- (void)_updateDownloadProgressForAsset:(id)arg1;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 options:(id)arg2 inCollection:(id)arg3;
- (void)cancelAllDownloads;
- (void)cancelDownloadForIdentifier:(id)arg1;
- (id)_defaultOptions;
- (void)_checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelPreviousDownloadsForAsset:(id)arg1;
- (void)checkIfDownloadIsRequiredForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDownloadOfAssetIfNeeded:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3;
- (void)handleDownloadOfAsset:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(CDUnknownBlockType)arg3;
- (id)initWithGridViewController:(id)arg1;
- (id)init;

@end
