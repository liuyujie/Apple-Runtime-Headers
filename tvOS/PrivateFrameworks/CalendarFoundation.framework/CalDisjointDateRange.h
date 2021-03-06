//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_distinctRanges;
}

+ (_Bool)supportsSecureCoding;
+ (id)disjointRangeWithSingleRange:(id)arg1;
+ (id)disjointRangeWithDistinctRanges:(id)arg1;
@property(copy, nonatomic) NSMutableSet *distinctRanges; // @synthesize distinctRanges=_distinctRanges;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)intersectionWithDisjointRange:(id)arg1;
- (id)intersectionWithRange:(id)arg1;
- (id)subtractDisjointRange:(id)arg1;
- (id)subtractRange:(id)arg1;
- (id)addDisjointRange:(id)arg1;
- (id)addRange:(id)arg1;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)containsRange:(id)arg1;
- (_Bool)containsDate:(id)arg1;
- (double)totalDuration;
- (id)sortedDistinctRanges;
- (id)initWithDistinctRanges:(id)arg1;

@end

