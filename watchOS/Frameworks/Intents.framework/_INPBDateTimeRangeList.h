//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBDateTimeRangeList.h"

@class NSArray, NSString, _INPBCondition;

@interface _INPBDateTimeRangeList : PBCodable <_INPBDateTimeRangeList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_dateRanges;
}

+ (Class)dateRangeType;
@property(copy, nonatomic) NSArray *dateRanges; // @synthesize dateRanges=_dateRanges;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dateRangeAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int dateRangesCount;
- (void)addDateRange:(id)arg1;
- (void)clearDateRanges;
@property(readonly, nonatomic) _Bool hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

