//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDPathSource.h>

#import "TSDMixing.h"

@class TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDBezierPathSource : TSDPathSource <TSDMixing>
{
    TSUBezierPath *mPath;
    _Bool mIsRectangular;
    struct CGSize mNaturalSize;
}

+ (id)pathSourceWithBezierPath:(id)arg1;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
- (void).cxx_destruct;
- (void)p_setBezierPath:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)isClosed;
- (_Bool)isCircular;
- (_Bool)isRectangularForever;
- (_Bool)isRectangular;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)transformToNaturalSize;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithNaturalSize:(struct CGSize)arg1;
- (id)initWithBezierPath:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1 andBezierArchive:(struct BezierPathSourceArchive *)arg2;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1 andBezierArchive:(const struct BezierPathSourceArchive *)arg2;

@end
