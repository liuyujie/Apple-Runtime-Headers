//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCreateTimerIntentResponse.h"

@class NSString, _INPBTimer;

@interface _INPBCreateTimerIntentResponse : PBCodable <_INPBCreateTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBTimer *_createdTimer;
}

@property(retain, nonatomic) _INPBTimer *createdTimer; // @synthesize createdTimer=_createdTimer;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasCreatedTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

