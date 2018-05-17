//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken _stackKey[17];
    struct _renditionkeytoken *_key;
    int _type;
    unsigned int _subtype;
    unsigned int _scale;
    int _exifOrientation;
    int _blendMode;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int isVectorBased:1;
        unsigned int isOpaque:1;
        unsigned int bitmapEncoding:4;
        unsigned int optOutOfThinning:1;
        unsigned int isFlippable:1;
        unsigned int isTintable:1;
        unsigned int preservedVectorRepresentation:1;
        unsigned int reserved:20;
    } _renditionFlags;
    int _templateRenderingMode;
    int _artworkStatus;
    unsigned int _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    int _validLookGradation;
    float _opacity;
    NSString *_utiType;
    struct CGImage *_uncroppedImage;
    struct CGSize _physicalSizeInMeters;
}

+ (id)displayNameForRenditionType:(int)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(int)arg1 andPixelFormat:(unsigned int)arg2;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (struct CGImage *)uncroppedImage;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (id)contentNames;
- (id)mipLevels;
- (id)layerReferences;
- (id)externalTags;
- (id)assetPackIdentifier;
- (id)data;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(float)arg1;
- (struct CGPDFDocument *)pdfDocument;
- (id)effectPreset;
- (unsigned int)subtype;
- (unsigned int)gradientStyle;
- (id)gradient;
- (float)gradientDrawingAngle;
- (id)sizeIndexes;
- (const struct _csicolor *)csiColor;
- (_Bool)edgesOnly;
- (_Bool)isScaled;
- (_Bool)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (float)scale;
- (id)maskForSliceIndex:(int)arg1;
- (id)imageForSliceIndex:(int)arg1;
- (struct CGImage *)unslicedImage;
- (id)textureImages;
- (id)provideTextureInfo;
- (id)description;
- (_Bool)isValidForLookGradation:(int)arg1;
- (unsigned int)colorSpaceID;
- (int)artworkStatus;
- (_Bool)isTintable;
- (_Bool)preservedVectorRepresentation;
- (_Bool)isFlippable;
- (_Bool)optOutOfThinning;
- (int)templateRenderingMode;
- (int)bitmapEncoding;
- (_Bool)isOpaque;
- (_Bool)isVectorBased;
- (_Bool)isHeaderFlaggedFPO;
- (struct CGSize)physicalSizeInMeters;
- (id)utiType;
- (id)name;
- (int)type;
- (const struct _renditionkeytoken *)key;
- (void)dealloc;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (struct CGRect)_destinationFrame;
- (unsigned long)sourceRowbytes;
- (struct CGSize)unslicedSize;
- (id)linkingToRendition;
- (_Bool)isInternalLink;
- (void)_setStructuredThemeStore:(id)arg1;

@end
