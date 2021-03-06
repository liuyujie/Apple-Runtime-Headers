//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBTask.h"

@class NSString, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
        unsigned int taskType:1;
    } _has;
    int _status;
    int _taskType;
    _INPBDateTime *_createdDateTime;
    NSString *_identifier;
    _INPBDateTime *_modifiedDateTime;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
    _INPBDataString *_title;
}

@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime; // @synthesize modifiedDateTime=_modifiedDateTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTime *createdDateTime; // @synthesize createdDateTime=_createdDateTime;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
- (int)StringAsTaskType:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTaskType;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
@property(readonly, nonatomic) _Bool hasModifiedDateTime;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasCreatedDateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

