//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CLLocation, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSTimeZone;

@interface IPAMetadata : NSObject <NSCopying>
{
    _Bool _xmpLoaded;
    NSDate *_imageDate;
    NSTimeZone *_imageTimeZone;
    NSString *_filePath;
    NSMutableDictionary *_exifProperties;
    NSMutableDictionary *_iptcProperties;
    NSMutableDictionary *_basicProperties;
    NSMutableDictionary *_fileSystemProperties;
    NSMutableDictionary *_customInfo;
    NSMutableDictionary *_cgImageProperties;
    NSDictionary *_audioVideoProperties;
    NSArray *_focusPoints;
    int _originalOrientation;
    int _orientation;
    NSArray *_cgImageMetadataProperties;
    NSString *_fileTypeIdentifier;
    struct CGSize _originalUnrotatedSize;
}

+ (id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(_Bool)arg2;
+ (id)metadataIdentifierTypeMapImage;
+ (id)metadataIdentifierTypeMapVideo;
+ (id)metadataIdentifierTypeMapCommon;
+ (id)defaultOptionsForCGImageSource;
+ (struct CGImageSource *)newImageSourceForURL:(id)arg1;
+ (struct CGImageSource *)newImageSourceForData:(id)arg1 uti:(id)arg2;
@property(retain, nonatomic) NSString *fileTypeIdentifier; // @synthesize fileTypeIdentifier=_fileTypeIdentifier;
@property(retain, nonatomic) NSArray *cgImageMetadataProperties; // @synthesize cgImageMetadataProperties=_cgImageMetadataProperties;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) struct CGSize originalUnrotatedSize; // @synthesize originalUnrotatedSize=_originalUnrotatedSize;
@property(retain, nonatomic) NSArray *focusPoints; // @synthesize focusPoints=_focusPoints;
@property(retain, nonatomic) NSDictionary *audioVideoProperties; // @synthesize audioVideoProperties=_audioVideoProperties;
@property(retain, nonatomic) NSMutableDictionary *cgImageProperties; // @synthesize cgImageProperties=_cgImageProperties;
@property(nonatomic) _Bool xmpLoaded; // @synthesize xmpLoaded=_xmpLoaded;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSMutableDictionary *fileSystemProperties; // @synthesize fileSystemProperties=_fileSystemProperties;
@property(retain, nonatomic) NSMutableDictionary *basicProperties; // @synthesize basicProperties=_basicProperties;
@property(retain, nonatomic) NSMutableDictionary *iptcProperties; // @synthesize iptcProperties=_iptcProperties;
@property(retain, nonatomic) NSMutableDictionary *exifProperties; // @synthesize exifProperties=_exifProperties;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)convertGPSString:(id)arg1 toLatitude:(id *)arg2 longitude:(id *)arg3;
- (void)dumpXmpProperties;
- (void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2;
- (void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3;
- (void)setEncodedAudioVideoData:(id)arg1;
- (void)setEncodedImageData:(id)arg1;
- (id)encodedDataReduceIfLargerThan:(unsigned int)arg1;
- (id)encodedData;
@property(readonly, nonatomic) CLLocation *exifLocation;
- (id)utiFastModernizeVideoMedia;
- (_Bool)isSDOF;
- (_Bool)isCompositeHDR;
- (int)hdrType;
- (_Bool)isSloMoForType:(unsigned char)arg1;
- (void)setImagePropertiesForURL:(id)arg1;
- (void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(_Bool)arg2 atEnd:(CDUnknownBlockType)arg3;
- (void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1;
- (void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;
- (void)applyTimezoneAndImageDateFromUTCDate:(id)arg1 toExifProperties:(id)arg2;
- (void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(_Bool)arg3 readyHandler:(CDUnknownBlockType)arg4;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2;
- (void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1;
- (void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(_Bool)arg2 readyHandler:(CDUnknownBlockType)arg3;
- (void)setAudioVideoAttributesFromDictionary:(id)arg1;
- (void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1;
- (void)_digestedGPSExifAttributesFromExif:(id)arg1;
- (void)_digestedAVExifAttributesFromExif:(id)arg1;
- (void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1;
- (void)_digestedDateTimeExifAttributesFromExif:(id)arg1;
- (_Bool)_didSetValidSubsec:(double *)arg1 forSubsecAsString:(id)arg2;
- (_Bool)_validSubsec:(double)arg1;
- (_Bool)_validTimezone:(id)arg1 forLongitude:(id)arg2;
- (void)digestedDateTimeExifAttributesFromExif:(id)arg1;
- (void)_digestedOrientationExifAttributesFromExif:(id)arg1;
- (void)_enforceProperFormatting:(id)arg1;
- (id)_digestedExifAttributesFromRawAttributes:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
- (id)_digestedIptcAttributesFromRawAttributes:(id)arg1;
- (void)setCGImageProperties:(id)arg1;
- (id)description;
@property(readonly, copy) NSString *jsonFormattedDescription;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2;
- (id)iptcPropertyForKey:(id)arg1;
- (void)setIPTCProperty:(id)arg1 forKey:(id)arg2;
- (id)exifPropertyForKey:(id)arg1;
- (void)setExifProperty:(id)arg1 forKey:(id)arg2;
- (id)customPropertyForKey:(id)arg1;
- (void)setCustomProperty:(id)arg1 forKey:(id)arg2;
- (void)setRawFileSystemAttributes:(id)arg1;
- (void)setCustomProperties:(id)arg1;
- (void)mergeMetadata:(id)arg1;
- (void)clearImageAttributes;
@property(readonly, nonatomic) int customRendered;
@property(readonly, nonatomic) _Bool isPortrait;
@property(readonly, nonatomic) _Bool isLongExposure;
@property(readonly, nonatomic) _Bool isMirror;
@property(readonly, nonatomic) _Bool isAutoloop;
@property(readonly, nonatomic) _Bool hasCustomRendered;
@property(readonly, nonatomic) NSString *groupingUuid;
@property(readonly, nonatomic) NSString *burstUuid;
@property(retain, nonatomic) NSTimeZone *imageTimeZone; // @synthesize imageTimeZone=_imageTimeZone;
@property(retain, nonatomic) NSDate *imageDate; // @synthesize imageDate=_imageDate;
- (id)timeZoneAdjustedImageDate;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)utiForExtension:(id)arg1;
- (id)initWithFileData:(id)arg1 path:(id)arg2 fileSize:(unsigned long)arg3 cgImageProperties:(id)arg4 imageSource:(struct CGImageSource *)arg5 loadXmpData:(_Bool)arg6 xmpSidecarPath:(id)arg7 loadEssentialMetadataOnly:(_Bool)arg8;
- (id)initWithFileData:(id)arg1 path:(id)arg2 cgImageProperties:(id)arg3 loadXmpData:(_Bool)arg4 xmpSidecarPath:(id)arg5;
- (id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 loadXmpData:(_Bool)arg3 xmpSidecarPath:(id)arg4;
- (id)initWithPath:(id)arg1 loadXmpData:(_Bool)arg2 xmpSidecarPath:(id)arg3;
- (id)initWithPath:(id)arg1 fileSize:(unsigned long)arg2 loadEssentialMetadataOnly:(_Bool)arg3;
- (id)initWithPath:(id)arg1;
- (id)init;
- (_Bool)conformsToUTType:(struct __CFString *)arg1 forExtention:(id)arg2;

@end

