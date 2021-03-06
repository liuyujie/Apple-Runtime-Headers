//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    int _expectedAttendance;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    struct {
        unsigned int expectedAttendance:1;
    } _has;
}

+ (Class)performerType;
+ (Class)eventDateTimeType;
+ (Class)poiIdType;
+ (Class)eventCategoryType;
@property(nonatomic) int expectedAttendance; // @synthesize expectedAttendance=_expectedAttendance;
@property(retain, nonatomic) NSMutableArray *performers; // @synthesize performers=_performers;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSMutableArray *eventDateTimes; // @synthesize eventDateTimes=_eventDateTimes;
@property(retain, nonatomic) NSMutableArray *poiIds; // @synthesize poiIds=_poiIds;
@property(retain, nonatomic) NSMutableArray *eventCategorys; // @synthesize eventCategorys=_eventCategorys;
@property(retain, nonatomic) GEOLocalizedString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExpectedAttendance;
- (id)performerAtIndex:(unsigned int)arg1;
- (unsigned int)performersCount;
- (void)addPerformer:(id)arg1;
- (void)clearPerformers;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned int)arg1;
- (unsigned int)eventDateTimesCount;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
- (id)poiIdAtIndex:(unsigned int)arg1;
- (unsigned int)poiIdsCount;
- (void)addPoiId:(id)arg1;
- (void)clearPoiIds;
- (id)eventCategoryAtIndex:(unsigned int)arg1;
- (unsigned int)eventCategorysCount;
- (void)addEventCategory:(id)arg1;
- (void)clearEventCategorys;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasEventId;

@end

