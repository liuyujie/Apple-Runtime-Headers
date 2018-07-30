//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBTimer.h"

@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int duration:1;
        unsigned int remainingTime:1;
        unsigned int state:1;
    } _has;
    int _state;
    double _duration;
    NSString *_identifier;
    _INPBDataString *_label;
    double _remainingTime;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) _INPBDataString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(nonatomic) BOOL hasState;
@property(nonatomic) BOOL hasRemainingTime;
@property(readonly, nonatomic) BOOL hasLabel;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(nonatomic) BOOL hasDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
