//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureValueConstraint.h"
#import "NSCopying.h"

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    int _pixelsHigh;
    int _pixelsWide;
    MLImageSizeConstraint *_sizeConstraint;
    unsigned int _pixelType;
}

+ (unsigned int)imagePixelTypeFromOSType:(unsigned long)arg1;
+ (id)_stringForOSType:(unsigned long)arg1;
+ (id)constraintWithPixelsWide:(int)arg1 pixelsHigh:(int)arg2 pixelType:(unsigned int)arg3;
+ (id)constraintWithPixelsWide:(int)arg1 pixelsHigh:(int)arg2 pixelType:(unsigned int)arg3 sizeConstraint:(id)arg4;
+ (_Bool)osType:(unsigned long)arg1 isAcceptedForPixelType:(unsigned int)arg2;
@property(readonly) unsigned int pixelType; // @synthesize pixelType=_pixelType;
@property(readonly, nonatomic) MLImageSizeConstraint *sizeConstraint; // @synthesize sizeConstraint=_sizeConstraint;
@property(readonly, nonatomic) int pixelsWide; // @synthesize pixelsWide=_pixelsWide;
@property(readonly, nonatomic) int pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
- (void).cxx_destruct;
@property(readonly) unsigned long long imageWidth;
@property(readonly) unsigned long long imageHeight;
@property(readonly) unsigned long osType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)_stringForAllowedOSTypes;
@property(readonly, nonatomic) unsigned long pixelFormatType;
- (id)initWithPixelsWide:(int)arg1 pixelsHigh:(int)arg2 pixelType:(unsigned int)arg3 sizeConstraint:(id)arg4;

@end

