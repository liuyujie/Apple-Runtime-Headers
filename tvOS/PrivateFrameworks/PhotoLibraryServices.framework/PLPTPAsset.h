//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSData, NSNumber, NSString, PLPTPAssetHandle;

@interface PLPTPAsset : NSObject <NSMutableCopying, NSCopying>
{
    NSData *_event;
    PLPTPAssetHandle *_assetHandle;
    NSString *_filename;
    NSString *_createdFilename;
    _Bool _deleted;
    NSString *_originalFilename;
    NSString *_fullDirectoryPath;
    _Bool _exifAvailable;
    NSNumber *_objectCompressedSize;
    NSString *_originatingAssetID;
    NSNumber *_thumbOffset;
    NSNumber *_thumbCompressedSize;
    struct CGSize _imagePixSize;
    struct CGSize _thumbPixSize;
    long long _desiredOrientation;
    NSString *_modificationDateString;
    NSString *_captureDateString;
    NSString *_durationString;
    NSString *_locationString;
    NSString *_groupUUID;
    NSString *_burstUUID;
    _Bool _burstPicked;
    _Bool _burstFavorite;
    _Bool _burstFirstPicked;
    _Bool _highFrameRateVideo;
    _Bool _timeLapseVideo;
    NSString *_relatedUUID;
    long long _conversionGroup;
}

@property(readonly, copy, nonatomic) NSData *event; // @synthesize event=_event;
@property(readonly, nonatomic) long long conversionGroup; // @synthesize conversionGroup=_conversionGroup;
@property(readonly, copy, nonatomic) NSString *relatedUUID; // @synthesize relatedUUID=_relatedUUID;
@property(readonly, nonatomic, getter=isTimeLapseVideo) _Bool timeLapseVideo; // @synthesize timeLapseVideo=_timeLapseVideo;
@property(readonly, nonatomic, getter=isHighFrameRateVideo) _Bool highFrameRateVideo; // @synthesize highFrameRateVideo=_highFrameRateVideo;
@property(readonly, nonatomic, getter=isBurstFirstPicked) _Bool burstFirstPicked; // @synthesize burstFirstPicked=_burstFirstPicked;
@property(readonly, nonatomic, getter=isBurstFavorite) _Bool burstFavorite; // @synthesize burstFavorite=_burstFavorite;
@property(readonly, nonatomic, getter=isBurstPicked) _Bool burstPicked; // @synthesize burstPicked=_burstPicked;
@property(readonly, copy, nonatomic) NSString *burstUUID; // @synthesize burstUUID=_burstUUID;
@property(readonly, copy, nonatomic) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, copy, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
@property(readonly, copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(readonly, copy, nonatomic) NSString *captureDateString; // @synthesize captureDateString=_captureDateString;
@property(readonly, copy, nonatomic) NSString *modificationDateString; // @synthesize modificationDateString=_modificationDateString;
@property(readonly, nonatomic) long long desiredOrientation; // @synthesize desiredOrientation=_desiredOrientation;
@property(readonly, nonatomic) struct CGSize thumbPixSize; // @synthesize thumbPixSize=_thumbPixSize;
@property(readonly, nonatomic) struct CGSize imagePixSize; // @synthesize imagePixSize=_imagePixSize;
@property(readonly, copy, nonatomic) NSNumber *thumbCompressedSize; // @synthesize thumbCompressedSize=_thumbCompressedSize;
@property(readonly, copy, nonatomic) NSNumber *thumbOffset; // @synthesize thumbOffset=_thumbOffset;
@property(readonly, copy, nonatomic) NSString *originatingAssetID; // @synthesize originatingAssetID=_originatingAssetID;
@property(readonly, copy, nonatomic) NSNumber *objectCompressedSize; // @synthesize objectCompressedSize=_objectCompressedSize;
@property(readonly, nonatomic, getter=isExifAvailable) _Bool exifAvailable; // @synthesize exifAvailable=_exifAvailable;
@property(readonly, copy, nonatomic) NSString *fullDirectoryPath; // @synthesize fullDirectoryPath=_fullDirectoryPath;
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSString *createdFilename; // @synthesize createdFilename=_createdFilename;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) PLPTPAssetHandle *assetHandle; // @synthesize assetHandle=_assetHandle;
- (void).cxx_destruct;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *cacheKey;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPTPAsset:(id)arg1;

@end
