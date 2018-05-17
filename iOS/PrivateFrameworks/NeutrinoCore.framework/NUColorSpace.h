//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUColorSpace : NSObject
{
    struct CGColorSpace *_CGColorSpace;
}

+ (id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3;
+ (id)colorSpaceFromVideoColorProperties:(id)arg1;
+ (id)workingColorSpace;
+ (id)displayP3LinearColorSpace;
+ (id)displayP3ColorSpace;
+ (id)genericGrayColorSpace;
+ (id)genericRGBLinearColorSpace;
+ (id)genericRGBColorSpace;
+ (id)adobeRGBColorSpace;
+ (id)sRGBLinearColorSpace;
+ (id)sRGBColorSpace;
+ (id)_loadICCProfileDataWithIdentifier:(id)arg1;
@property(readonly, nonatomic) struct CGColorSpace *CGColorSpace; // @synthesize CGColorSpace=_CGColorSpace;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithICCProfileData:(id)arg1;
- (id)initWithCGColorSpace:(struct CGColorSpace *)arg1;
- (id)init;

@end
