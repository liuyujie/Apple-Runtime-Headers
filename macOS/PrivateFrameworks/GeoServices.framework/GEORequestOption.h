//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOSurchargeType.h"
#import "NSCopying.h"

@class GEOFormattedString, NSString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying>
{
    int _enumValue;
    GEOFormattedString *_name;
    struct {
        unsigned int enumValue:1;
    } _has;
}

@property(retain, nonatomic) GEOFormattedString *name; // @synthesize name=_name;
@property(nonatomic) int enumValue; // @synthesize enumValue=_enumValue;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasName;
@property(nonatomic) BOOL hasEnumValue;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedName;
@property(readonly, nonatomic) int value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
