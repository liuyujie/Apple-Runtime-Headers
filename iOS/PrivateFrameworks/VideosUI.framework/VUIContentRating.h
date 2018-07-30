//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface VUIContentRating : NSObject <NSCopying>
{
    long long _ratingSystem;
    NSString *_ratingLabel;
    unsigned long long _rank;
    NSString *_ratingDescription;
}

@property(copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(nonatomic) long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
- (void).cxx_destruct;
- (id)_initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithRatingSystem:(long long)arg1 explicitContent:(_Bool)arg2;
- (id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;

@end
