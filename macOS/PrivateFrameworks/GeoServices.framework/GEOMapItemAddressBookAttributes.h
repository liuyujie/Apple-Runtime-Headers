//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, PBUnknownFields;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_addressIdentifier;
    int _addressType;
    NSString *_name;
    NSString *_spokenName;
    BOOL _isMe;
    struct {
        unsigned int addressType:1;
        unsigned int isMe:1;
    } _has;
}

@property(retain, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(retain, nonatomic) NSString *spokenName; // @synthesize spokenName=_spokenName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAddressIdentifier;
@property(nonatomic) BOOL hasIsMe;
@property(readonly, nonatomic) BOOL hasSpokenName;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsAddressType:(id)arg1;
- (id)addressTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasAddressType;
@property(nonatomic) int addressType; // @synthesize addressType=_addressType;

@end

