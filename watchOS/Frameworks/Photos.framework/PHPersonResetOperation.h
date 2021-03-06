//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class PHFetchResult, PHPhotoLibrary;

@interface PHPersonResetOperation : NSOperation
{
    PHPhotoLibrary *_library;
    _Bool _shouldResetPhotoAnalysis;
    unsigned int _batchSize;
    PHFetchResult *_personsToDelete;
    unsigned int _totalPersonsToDelete;
    unsigned int _deletedPersons;
    PHFetchResult *_facesToDelete;
    unsigned int _totalFacesToDelete;
    unsigned int _deletedFaces;
    _Bool _shouldDeleteAllFaceCrops;
    PHFetchResult *_faceCropsToDelete;
    unsigned int _totalFaceCropsToDelete;
    unsigned int _deletedFaceCrops;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
}

+ (id)resetAllPersonsOperationWithBatchSize:(unsigned int)arg1 shouldResetPhotoAnalysis:(_Bool)arg2 photoLibrary:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)resetOperationsForPersons:(id)arg1 batchSize:(unsigned int)arg2 photoLibrary:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (_Bool)isAsynchronous;
- (void)main;
- (void)_prepareToDeleteFaceCrops;
- (void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned int)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithPersonsToDelete:(id)arg1 facesToDelete:(id)arg2 shouldDeleteAllFaceCrops:(_Bool)arg3 shouldResetPhotoAnalysis:(_Bool)arg4 batchSize:(unsigned int)arg5 photoLibrary:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end

