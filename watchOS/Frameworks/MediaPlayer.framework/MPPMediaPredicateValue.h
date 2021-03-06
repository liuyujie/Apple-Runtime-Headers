//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <NSCopying>
{
    double _doublePredicateValue;
    long long _integerPredicateValue;
    NSData *_bytesPredicateValue;
    float _floatPredicateValue;
    NSString *_stringPredicateValue;
    int _type;
    _Bool _boolPredicateValue;
    struct {
        unsigned int doublePredicateValue:1;
        unsigned int integerPredicateValue:1;
        unsigned int floatPredicateValue:1;
        unsigned int boolPredicateValue:1;
    } _has;
}

@property(retain, nonatomic) NSData *bytesPredicateValue; // @synthesize bytesPredicateValue=_bytesPredicateValue;
@property(retain, nonatomic) NSString *stringPredicateValue; // @synthesize stringPredicateValue=_stringPredicateValue;
@property(nonatomic) _Bool boolPredicateValue; // @synthesize boolPredicateValue=_boolPredicateValue;
@property(nonatomic) float floatPredicateValue; // @synthesize floatPredicateValue=_floatPredicateValue;
@property(nonatomic) double doublePredicateValue; // @synthesize doublePredicateValue=_doublePredicateValue;
@property(nonatomic) long long integerPredicateValue; // @synthesize integerPredicateValue=_integerPredicateValue;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBytesPredicateValue;
@property(readonly, nonatomic) _Bool hasStringPredicateValue;
@property(nonatomic) _Bool hasBoolPredicateValue;
@property(nonatomic) _Bool hasFloatPredicateValue;
@property(nonatomic) _Bool hasDoublePredicateValue;
@property(nonatomic) _Bool hasIntegerPredicateValue;
- (void)dealloc;

@end

