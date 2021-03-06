//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBDateTime.h"

@class NSString, _INPBLocalDate, _INPBLocalTime;

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int calendarSystem:1;
    } _has;
    int _calendarSystem;
    _INPBLocalDate *_date;
    _INPBLocalTime *_time;
    NSString *_timeZoneID;
}

@property(copy, nonatomic) NSString *timeZoneID; // @synthesize timeZoneID=_timeZoneID;
@property(retain, nonatomic) _INPBLocalTime *time; // @synthesize time=_time;
@property(retain, nonatomic) _INPBLocalDate *date; // @synthesize date=_date;
@property(nonatomic) int calendarSystem; // @synthesize calendarSystem=_calendarSystem;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTimeZoneID;
@property(readonly, nonatomic) BOOL hasTime;
@property(readonly, nonatomic) BOOL hasDate;
- (int)StringAsCalendarSystem:(id)arg1;
- (id)calendarSystemAsString:(int)arg1;
@property(nonatomic) BOOL hasCalendarSystem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

