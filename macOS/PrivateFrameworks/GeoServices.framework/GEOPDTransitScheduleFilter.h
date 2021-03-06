//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDDeparturePredicate, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange _operatingHoursRange;
    GEOPDDeparturePredicate *_departurePredicateCountdown;
    GEOPDDeparturePredicate *_departurePredicateStamp;
    CDStruct_65124bb5 _has;
}

@property(nonatomic) struct GEOPDTimeRange operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateStamp; // @synthesize departurePredicateStamp=_departurePredicateStamp;
@property(retain, nonatomic) GEOPDDeparturePredicate *departurePredicateCountdown; // @synthesize departurePredicateCountdown=_departurePredicateCountdown;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasOperatingHoursRange;
@property(readonly, nonatomic) BOOL hasDeparturePredicateStamp;
@property(readonly, nonatomic) BOOL hasDeparturePredicateCountdown;

@end

