//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHAssetCreationOptions : NSObject
{
    _Bool _shouldDownloadOrCloudReReferenceMissingResources;
    _Bool _resetUserSpecificMetadata;
    _Bool _copyStillPhotoFromLivePhoto;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    CDStruct_1b6d18a9 _stillSourceTime;
}

@property(nonatomic) _Bool copyStillPhotoFromLivePhoto; // @synthesize copyStillPhotoFromLivePhoto=_copyStillPhotoFromLivePhoto;
@property(nonatomic) _Bool resetUserSpecificMetadata; // @synthesize resetUserSpecificMetadata=_resetUserSpecificMetadata;
@property(nonatomic) CDStruct_1b6d18a9 stillSourceTime; // @synthesize stillSourceTime=_stillSourceTime;
@property(copy, nonatomic) CDUnknownBlockType destinationAssetAvailabilityHandler; // @synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler;
@property(nonatomic) _Bool shouldDownloadOrCloudReReferenceMissingResources; // @synthesize shouldDownloadOrCloudReReferenceMissingResources=_shouldDownloadOrCloudReReferenceMissingResources;
- (void).cxx_destruct;
- (id)init;

@end

