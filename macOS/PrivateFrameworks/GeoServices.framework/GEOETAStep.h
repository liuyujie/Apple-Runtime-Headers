//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying>
{
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    GEOTimeCheckpoints *_timeCheckpoints;
    int _zilchPointIndex;
    struct {
        unsigned int distanceRemaining:1;
        unsigned int expectedTime:1;
        unsigned int stepID:1;
        unsigned int zilchPointIndex:1;
    } _has;
}

@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimeCheckpoints;
@property(nonatomic) BOOL hasZilchPointIndex;
@property(nonatomic) int zilchPointIndex; // @synthesize zilchPointIndex=_zilchPointIndex;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) BOOL hasDistanceRemaining;
@property(nonatomic) unsigned int distanceRemaining;

@end

