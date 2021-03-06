//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDStroke.h>

#import "TSDMutableStroke.h"

@class TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableStroke : TSDStroke <TSDMutableStroke>
{
}

+ (id)emptyStroke;
+ (id)stroke;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
@property(copy, nonatomic) TSDStrokePattern *pattern;
@property(nonatomic) int join;
@property(nonatomic) double miterLimit;
@property(nonatomic) int cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) TSUColor *color;
@property(nonatomic) _Bool dontClearBackground; // @dynamic dontClearBackground;

@end

