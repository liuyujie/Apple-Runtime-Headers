//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>
{
    NSDictionary *_valuesByIndex;
    NSString *_enumName;
    NSArray *_enumValues;
    int _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *enumValues; // @synthesize enumValues=_enumValues;
@property(copy, nonatomic) NSString *enumName; // @synthesize enumName=_enumName;
- (void).cxx_destruct;
- (id)valueForIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

