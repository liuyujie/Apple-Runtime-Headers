//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>
{
}

@property(readonly, nonatomic) unsigned long long sizeOfOriginalResourcesToUpload;
@property(readonly, nonatomic) unsigned long long sizeOfResourcesToUpload;
- (_Bool)openWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned int countOfOriginalOthers;
@property(readonly, nonatomic) unsigned int countOfOriginalVideos;
@property(readonly, nonatomic) unsigned int countOfOriginalImages;
- (_Bool)shouldUploadResource:(id)arg1;
- (id)resourceTypesToUploadForUploadIdentifier:(id)arg1;
- (_Bool)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
