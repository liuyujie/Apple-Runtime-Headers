//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOBatchOpportunisticTileDownloaderDelegate.h"

@class GEOBatchOpportunisticTileDownloader, GEODataSaverTileLoaderManager, GEOPowerAssertion, GEORequestCounter, GEOResourceManifestManager, GEOStaleTileUpdater, GEOTileDB, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

__attribute__((visibility("hidden")))
@interface GEOProactiveTileDownloader : NSObject <GEOBatchOpportunisticTileDownloaderDelegate>
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id <GEOProactiveTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_xpc_object> *_xpcActivity;
    GEOTileDB *_diskCache;
    NSString *_startCountry;
    NSString *_startRegion;
    GEODataSaverTileLoaderManager *_dataSaverManager;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    struct GEOOnce_s _didStart;
    struct GEOOnce_s _didFinish;
    GEOStaleTileUpdater *_testStaleUpdater;
    GEOStaleTileUpdater *_staleUpdater;
    GEOBatchOpportunisticTileDownloader *_currentDownloader;
    _Bool _shouldUpdateRecentlyUsedStaleTiles;
    GEOPowerAssertion *_powerAssertion;
}

+ (_Bool)shouldDownloadTileType:(int)arg1;
+ (_Bool)usesDiscretionaryDownloads;
+ (_Bool)_canUseXPCActivity;
+ (unsigned long long)maximumDownloadBatchSize;
- (void).cxx_destruct;
- (void)batchOpportunisticTileDownloaderDidFinish:(id)arg1;
- (void)batchOpportunisticTileDownloader:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;
- (_Bool)batchOpportunisticTileDownloaderShouldPause:(id)arg1;
- (void)_finish;
- (void)_start;
- (void)_xpcActivityFired;
- (void)_registerXPCActivity;
- (void)cancel;
- (void)start;
- (void)_clearPowerAssertion;
- (void)_takePowerAssertionIfNecessary;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3 dataSaverManager:(id)arg4 manifestManager:(id)arg5 requestCounter:(id)arg6 staleUpdater:(id)arg7;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 diskCache:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
