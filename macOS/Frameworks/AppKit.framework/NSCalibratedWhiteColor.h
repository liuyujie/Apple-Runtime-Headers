//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColor.h>

__attribute__((visibility("hidden")))
@interface NSCalibratedWhiteColor : NSColor
{
    double whiteComponent;
    double alphaComponent;
    struct CGColor *_cachedCGColor;
}

+ (id)_cachedLookupWithWhite:(double)arg1 alpha:(double)arg2;
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
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor *)CGColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)getComponents:(double *)arg1;
- (long long)numberOfComponents;
- (double)alphaComponent;
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;
- (double)whiteComponent;
- (void)dealloc;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;

@end

