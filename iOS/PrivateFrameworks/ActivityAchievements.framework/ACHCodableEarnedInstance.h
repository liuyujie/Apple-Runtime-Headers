//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface ACHCodableEarnedInstance : PBCodable <NSCopying>
{
    double _createdDate;
    long long _creatorDevice;
    double _value;
    NSString *_earnedDateComponents;
    NSString *_templateUniqueName;
    NSString *_valueUnitString;
    struct {
        unsigned int createdDate:1;
        unsigned int creatorDevice:1;
        unsigned int value:1;
    } _has;
}

@property(retain, nonatomic) NSString *valueUnitString; // @synthesize valueUnitString=_valueUnitString;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) long long creatorDevice; // @synthesize creatorDevice=_creatorDevice;
@property(nonatomic) double createdDate; // @synthesize createdDate=_createdDate;
@property(retain, nonatomic) NSString *earnedDateComponents; // @synthesize earnedDateComponents=_earnedDateComponents;
@property(retain, nonatomic) NSString *templateUniqueName; // @synthesize templateUniqueName=_templateUniqueName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasValueUnitString;
@property(nonatomic) _Bool hasValue;
@property(nonatomic) _Bool hasCreatorDevice;
@property(nonatomic) _Bool hasCreatedDate;
@property(readonly, nonatomic) _Bool hasEarnedDateComponents;
@property(readonly, nonatomic) _Bool hasTemplateUniqueName;

@end

