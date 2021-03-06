//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_predictedLocationsOfInterests;
}

+ (Class)predictedLocationsOfInterestType;
@property(retain, nonatomic) NSMutableArray *predictedLocationsOfInterests; // @synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)predictedLocationsOfInterestAtIndex:(unsigned int)arg1;
- (unsigned int)predictedLocationsOfInterestsCount;
- (void)addPredictedLocationsOfInterest:(id)arg1;
- (void)clearPredictedLocationsOfInterests;

@end

