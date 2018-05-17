//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> _strokes;
    _Bool _continuePreviousStroke;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)totalNumberOfPoints;
- (struct CGPoint)pointAtIndex:(unsigned int)arg1 inStrokeAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPointsInStrokeAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfStrokes;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned int)arg1;
- (void)endStroke;
- (void)addPoint:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
