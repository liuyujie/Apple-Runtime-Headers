//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientColorStop.h>

#import "NSCoding.h"

__attribute__((visibility("hidden")))
@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding>
{
    struct _psdGradientColor leadOutColor;
}

+ (id)doubleColorStopWithLocation:(float)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;
+ (void)initialize;
- (id)description;
- (_Bool)isDoubleStop;
- (struct _psdGradientColor)leadOutColor;
- (struct _psdGradientColor)leadInColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocation:(float)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;

@end
