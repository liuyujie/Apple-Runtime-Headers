//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSURL, PHAAssetResourceDataLoader, PHAJobCoordinator, PHALibraryChangeListener, PHAMonitoring, PHPhotoLibrary;

@interface PHAManager : NSObject
{
    PHAMonitoring *_monitoring;
    id <PHAManagerDelegate> _delegate;
    PHAAssetResourceDataLoader *_dataLoader;
    NSURL *_libraryURL;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_executiveStateQueue;
    PHAJobCoordinator *_jobCoordinator;
    PHALibraryChangeListener *_changeListener;
    NSDictionary *_photoAnalysisWorkersByType;
}

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(CDUnknownBlockType)arg1;
@property(retain) NSDictionary *photoAnalysisWorkersByType; // @synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType;
@property(retain) PHALibraryChangeListener *changeListener; // @synthesize changeListener=_changeListener;
@property(readonly) PHAJobCoordinator *jobCoordinator; // @synthesize jobCoordinator=_jobCoordinator;
@property(retain) NSObject<OS_dispatch_queue> *executiveStateQueue; // @synthesize executiveStateQueue=_executiveStateQueue;
@property(retain) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (void).cxx_destruct;
- (id)monitoring;
- (void)enumerateWorkersUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceProcessingServiceWorker;
- (id)sceneClassificationServiceWorker;
- (id)taxonomyServiceWorker;
- (id)autoloopServiceWorker;
- (id)graphServiceWorker;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)backgroundActivityDidBegin;
- (void)stopBackgroundActivity;
- (void)triggerBackgroundActivity;
- (void)checkForQuiescence;
- (id)statusAsDictionary;
- (void)shutdown;
@property(readonly, getter=isTurboMode) BOOL turboMode;
@property(readonly, getter=isQuiescent) BOOL quiescent;
- (id)description;
- (id)initWithPhotoLibraryURL:(id)arg1 executiveStateQueue:(id)arg2 delegate:(id)arg3;
- (id)init;

@end
