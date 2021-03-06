//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@interface NSCalibratedRGBColor : NSColor
{
    double redComponent;
    double greenComponent;
    double blueComponent;
    double alphaComponent;
    struct CGColor *_cachedCGColor;
}

+ (id)_cachedLookupWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)newWithCoder:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1 colorSpaceCode:(BOOL)arg2;
- (Class)classForCoder;
- (BOOL)isUniform;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorSpace;
- (id)colorUsingColorSpace:(id)arg1;
- (id)colorUsingType:(long long)arg1;
- (long long)type;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2;
- (void)_setAsSystemColor;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)getComponents:(double *)arg1;
- (long long)numberOfComponents;
- (double)alphaComponent;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (void)dealloc;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;

@end

