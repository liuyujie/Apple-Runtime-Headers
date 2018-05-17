//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 livePhotoMovieEnabled:(_Bool)arg6 livePhotoMovieDimensions:(CDStruct_79c71658)arg7 turboModeEnabled:(_Bool)arg8 flashEnabled:(_Bool)arg9 HDREnabled:(_Bool)arg10 adjustedPhotoFiltersEnabled:(_Bool)arg11 EV0PhotoDeliveryEnabled:(_Bool)arg12 stillImageStabilizationEnabled:(_Bool)arg13 dualCameraFusionEnabled:(_Bool)arg14 squareCropEnabled:(_Bool)arg15 photoManifest:(id)arg16;
- (id)photoManifest;
@property(readonly) unsigned long long expectedPhotoCount;
@property(readonly, getter=isDualCameraFusionEnabled) _Bool dualCameraFusionEnabled;
- (_Bool)livePhotoMovieEnabled;
- (_Bool)isSquareCropEnabled;
@property(readonly, getter=isStillImageStabilizationEnabled) _Bool stillImageStabilizationEnabled;
- (_Bool)isEV0PhotoDeliveryEnabled;
- (_Bool)isAdjustedPhotoFilterRenderingEnabled;
- (_Bool)isHDREnabled;
@property(readonly, getter=isFlashEnabled) _Bool flashEnabled;
- (_Bool)isTurboModeEnabled;
@property(readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property(readonly) CDStruct_79c71658 rawPhotoDimensions;
@property(readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 previewDimensions;
@property(readonly) CDStruct_79c71658 photoDimensions;
@property(readonly) long long uniqueID;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 livePhotoMovieEnabled:(_Bool)arg6 livePhotoMovieDimensions:(CDStruct_79c71658)arg7 turboModeEnabled:(_Bool)arg8 flashEnabled:(_Bool)arg9 HDREnabled:(_Bool)arg10 adjustedPhotoFiltersEnabled:(_Bool)arg11 EV0PhotoDeliveryEnabled:(_Bool)arg12 stillImageStabilizationEnabled:(_Bool)arg13 dualCameraFusionEnabled:(_Bool)arg14 squareCropEnabled:(_Bool)arg15 photoManifest:(id)arg16;

@end
