//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    int _status;
    int _taskType;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
    struct {
        unsigned int status:1;
        unsigned int taskType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsTaskType:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTaskType;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(readonly, nonatomic) BOOL hasModifiedDateTime;
@property(readonly, nonatomic) BOOL hasCreatedDateTime;
@property(readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property(readonly, nonatomic) BOOL hasSpatialEventTrigger;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) BOOL hasTitle;

@end
